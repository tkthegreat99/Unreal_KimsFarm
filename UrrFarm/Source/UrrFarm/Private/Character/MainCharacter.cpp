// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Controller/MainGameController.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Character/EnemyBase.h"
#include "Character/PetBase.h"
#include "Components/SphereComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Resource/ResourceBase.h"
#include "Components/CharacterManagementComponent.h"
#include "Components/CharacterManagementComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	RadarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RadarMesh"));
	RadarMesh->SetupAttachment(RootComponent);
	RadarMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Manage = CreateDefaultSubobject<UCharacterManagementComponent>(TEXT("ManageComponent"));


	MainController = Cast<AMainGameController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (MainController)
	{
		MainController->MainCharacter = this;
	}
	
	//카메라 줌 정도
	ExpectedSpringArmLength = 800.f;
}



void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (CameraBoom)
	{
		if (FMath::Abs(CameraBoom->TargetArmLength - ExpectedSpringArmLength) > KINDA_SMALL_NUMBER) { CameraBoom->TargetArmLength = FMath::Lerp(CameraBoom->TargetArmLength, ExpectedSpringArmLength, 0.05f); }
	}

	
	if (MainController)
	{
		CheckCharaceterArrived(MainController->CachedDestination);
	}


	if (MainController->SetDestination)
	{
		DeactivateRadar();
	}
	else
	{
		ActivateRadar(DeltaTime);
	}
	
}

void AMainCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (Manage)
	{
		Manage->SetCharacterMaxHealth(300.f);
	}
}

/////////////////////////////////////// 카메라 /////////////////////////////////////////

//마우스 휠 올리기 (줌 인)
void AMainCharacter::OnWheelRollUp()
{
	ExpectedSpringArmLength = FMath::Clamp<float>(ExpectedSpringArmLength - 150.0f, 150.0f, 800.0f);
}

//마우스 휠 내리기 (줌 아웃)
void AMainCharacter::OnWheelRollDown()
{
	ExpectedSpringArmLength = FMath::Clamp<float>(ExpectedSpringArmLength + 150.0f, 150.0f, 800.0f);
}

/////////////////////////////////////// 레이더 /////////////////////////////////////////


void AMainCharacter::ActivateRadar(float DeltaTime)
{

	bIsRadarActive = true;

	//레이더가 켜져있다면 항상 trace를 함.
	//PerformSphereTrace();
	PerformRadarTick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("Radar Activated"));

}

void AMainCharacter::DeactivateRadar()
{
	bIsRadarActive = false;
	
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Radar Deactivated"));
	
}

void AMainCharacter::PerformSphereTrace()
{
  	DetectedEnemies.Empty();
	DetectedResources.Empty();

	TArray<FOverlapResult> OverlapResults;
	FVector StartLocation = GetActorLocation();
	float Radius = 500.0f;

	

	// 레이더 범위 내 충돌하는 액터들 감지
	bool bHit = GetWorld()->OverlapMultiByChannel(
		OverlapResults,
		StartLocation,
		FQuat::Identity,
		ECC_ToDetect,  // 감지할 채널 설정
		FCollisionShape::MakeSphere(Radius),
		FCollisionQueryParams(SCENE_QUERY_STAT(SphereTrace), false, GetOwner())
	);

	if (bHit)
	{
		for (const FOverlapResult& Result : OverlapResults)
		{
			AActor* DetectedActor = Result.GetActor();
			if (DetectedActor)
			{
				// 감지된 액터가 AEnemyBase 클래스인지 확인
				AEnemyBase* DetectedEnemy = Cast<AEnemyBase>(DetectedActor);
				if (DetectedEnemy)
				{

					DetectedEnemies.Add(DetectedEnemy);
					//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Enemy Detected"));
				}
				AResourceBase* DetectedResource = Cast<AResourceBase>(DetectedActor);
				if (DetectedResource)
				{
					DetectedResources.Add(DetectedResource);
					//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Resource Detected"));
				}
			}

			
		}

		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Enemies Detected: %d"), DetectedEnemies.Num()));
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("Resources Detected: %d"), DetectedResources.Num()));
		if (Manage)
		{
			Manage->HandleEnemiesAndResources(DetectedEnemies, DetectedResources);
		}
		
	}
}

void AMainCharacter::PerformRadarTick(float DeltaTime)
{
	ElapsedTime += DeltaTime;

	// 일정 주기(예: 1초)가 지났을 때 Overlap 실행
	if (ElapsedTime >= OverlapInterval)
	{
		// Overlap 수행
		PerformSphereTrace();

		// 경과 시간을 초기화하여 주기적으로 Overlap을 실행하도록 함
		ElapsedTime = 0.0f;
	}
}


/* 캐릭터가 마우스로 찍은 곳에 왔는지 확인해주는 함수.*/
void AMainCharacter::CheckCharaceterArrived(FVector TargetDestination)
{
	FVector CurrentLocation = GetActorLocation();
	// 캐릭터가 목표 지점에 도달했는지 확인 (약간의 오차 허용)
	float DistanceToDestination = FVector::Dist(CurrentLocation, TargetDestination);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("Distance to Destination: %f"), DistanceToDestination));

	float AcceptableRadius = 150.0f;

	if (DistanceToDestination <= AcceptableRadius)
	{
		MainController->SetDestination = false;
	}
}

//////////////////////// 펫 관련 //////////////////////////

void AMainCharacter::CommandPetsToAttack(TArray<AEnemyBase*> Enemies)
{
	TArray<AActor*> PetActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APetBase::StaticClass(), PetActors);  // 모든 펫 액터 찾기

	for (AActor* PetActor : PetActors)
	{
		APetBase* Pet = Cast<APetBase>(PetActor);
		if (Pet)
		{
			// 각 펫에게 감지된 적 리스트 전달 (펫들이 알아서 적을 타겟팅하게 할 수 있음)
			Pet->bEnemyNearby = true;
			Pet->AttackEnemies(Enemies);
		}
	}
}

void AMainCharacter::StopPetAttack()
{
	DetectedEnemies.Empty();

	// 펫들이 공격을 중지하도록 명령
	TArray<AActor*> PetActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APetBase::StaticClass(), PetActors);  // 모든 펫 액터 찾기

	for (AActor* PetActor : PetActors)
	{
		APetBase* Pet = Cast<APetBase>(PetActor);
		if (Pet)
		{
			Pet->bEnemyNearby = false;
			Pet->StopAttacking();
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("All Pets Stopped Attacking and Enemies Cleared"));
}

