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
#include "AI/PetAIController.h"

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
	
	ExpectedSpringArmLength = 800.f;
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<AActor*> Animals;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APetBase::StaticClass(), Animals);
	for (AActor* Animal : Animals)
	{
		APetBase* Pet = Cast<APetBase>(Animal);
		if (Pet)
		{
			PartyAnimals.Add(Pet);
		}
	}
	
	PartyMemberMaxNum = 4;
	PartyMembersCurrentNum = PartyAnimals.Num();
	CharacterState = ECharacterState::ECS_Idle;


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


	if (MainController->bIsDestinationSetted)
	{
		for (APetBase* Pet : PartyAnimals)
		{
			Pet->GetAIController()->SetCurrentStateAsMoving();
		}
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
		Manage->ComponentOwner = this;
	}
}

/////////////////////////////////////// ī�޶� /////////////////////////////////////////

//���콺 �� �ø��� (�� ��)
void AMainCharacter::OnWheelRollUp()
{
	ExpectedSpringArmLength = FMath::Clamp<float>(ExpectedSpringArmLength - 150.0f, 150.0f, 800.0f);
}

//���콺 �� ������ (�� �ƿ�)
void AMainCharacter::OnWheelRollDown()
{
	ExpectedSpringArmLength = FMath::Clamp<float>(ExpectedSpringArmLength + 150.0f, 150.0f, 800.0f);
}

/////////////////////////////////////// ���̴� /////////////////////////////////////////




void AMainCharacter::ActivateRadar(float DeltaTime)
{

	bIsRadarActive = true;

	//���̴��� �����ִٸ� �׻� trace�� ��.
	//PerformSphereTrace();
	PerformRadarTick(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("Radar Activated"));

}

void AMainCharacter::DeactivateRadar()
{
	bIsRadarActive = false;
	
	if (Manage)
	{
		Manage->IsDetectedIsNearBy = false;
	}
	
}

void AMainCharacter::PerformSphereTrace()
{
  	DetectedEnemies.Empty();
	DetectedResources.Empty();

	TArray<FOverlapResult> OverlapResults;
	FVector StartLocation = GetActorLocation();
	float Radius = 500.0f;

	

	// ���̴� ���� �� �浹�ϴ� ���͵� ����
	bool bHit = GetWorld()->OverlapMultiByChannel(
		OverlapResults,
		StartLocation,
		FQuat::Identity,
		ECC_ToDetect,  // ������ ä�� ����
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

				if (DetectedActor->ActorHasTag("Enemy"))
				{
					// ������ ���Ͱ� AEnemyBase Ŭ�������� Ȯ��
					AEnemyBase* DetectedEnemy = Cast<AEnemyBase>(DetectedActor);
					if (DetectedEnemy)
					{

						DetectedEnemies.Add(DetectedEnemy);
						GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Enemy Detected"));
					}
				}
				if(DetectedActor->ActorHasTag("Resource"))
				{
					AResourceBase* DetectedResource = Cast<AResourceBase>(DetectedActor);
					if (DetectedResource)
					{
						DetectedResources.Add(DetectedResource);
						GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Resource Detected"));
					}
				}
			}

			if (DetectedEnemies.Num() > 0)
			{
				if (PartyMembersCurrentNum > 0)
				{
					for (APetBase* Pet : PartyAnimals)
					{
						Pet->GetAIController()->SetCurrentStateAsAttacking(DetectedEnemies);
					}
				}
			}

			else if (DetectedResources.Num() > 0)
			{
				if (PartyMembersCurrentNum > 0)
				{
					for (APetBase* Pet : PartyAnimals)
					{
						Pet->GetAIController()->SetCurrentStateAsGathering(DetectedResources);
					}
				}
			}
			
		}
	}
}

void AMainCharacter::PerformRadarTick(float DeltaTime)
{
	ElapsedTime += DeltaTime;

	// ���� �ֱ�(��: 1��)�� ������ �� Overlap ����
	if (ElapsedTime >= OverlapInterval)
	{
		// Overlap ����
		PerformSphereTrace();

		// ��� �ð��� �ʱ�ȭ�Ͽ� �ֱ������� Overlap�� �����ϵ��� ��
		ElapsedTime = 0.0f;
	}
}



void AMainCharacter::SetCurrentCharacterState(ECharacterState NewState)
{
	CharacterState = NewState;
}

/* ĳ���Ͱ� ���콺�� ���� ���� �Դ��� Ȯ�����ִ� �Լ�.*/
void AMainCharacter::CheckCharaceterArrived(FVector TargetDestination)
{
	FVector CurrentLocation = GetActorLocation();
	// ĳ���Ͱ� ��ǥ ������ �����ߴ��� Ȯ�� (�ణ�� ���� ���)
	float DistanceToDestination = FVector::Dist(CurrentLocation, TargetDestination);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("Distance to Destination: %f"), DistanceToDestination));

	float AcceptableRadius = 150.0f;

	if (DistanceToDestination <= AcceptableRadius)
	{
		MainController->bIsDestinationSetted = false;
		for (APetBase* Pet : PartyAnimals)
		{
			Pet->GetAIController()->SetCurrentStateAsIdle();
		}
	}
}

//////////////////////// �� ���� //////////////////////////




