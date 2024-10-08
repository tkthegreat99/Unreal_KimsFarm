// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PetBase.h"
#include "Kismet/GameplayStatics.h"
#include "Character/MainCharacter.h"
#include "AI/PetAIController.h"
#include "Character/EnemyBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CharacterManagementComponent.h"
#include "Animation/AnimMontage.h"

// Sets default values
APetBase::APetBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    Manage = CreateDefaultSubobject<UCharacterManagementComponent>(TEXT("Manage"));


}

void APetBase::BeginAttack()
{
    GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_None);
    bIsAttacking = true;


}

void APetBase::EndAttack()
{
    GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
    bIsAttacking = false;
}

// Called when the game starts or when spawned
void APetBase::BeginPlay()
{
	Super::BeginPlay();

    TArray<AActor*> FoundCharacters;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMainCharacter::StaticClass(), FoundCharacters);

    if (FoundCharacters.Num() > 0)
    {
        MainCharacter = Cast<AMainCharacter>(FoundCharacters[0]);  // 첫 번째 메인 캐릭터
    }
    PetAIController = Cast<APetAIController>(GetController());
    GetCharacterMovement()->MaxWalkSpeed = PetMoveSpeed;
}

void APetBase::PostInitializeComponents()
{
    Super::PostInitializeComponents();
    if (Manage)
    {
        Manage->ComponentOwner = this;
    }
}
void APetBase::FollowMainCharacter()
{
    /*
    FVector MainCharacterLocation = MainCharacter->GetActorLocation();
    FVector PetLocation = GetActorLocation();
    FVector DirectionToMainCharacter = MainCharacterLocation - PetLocation;
    float DistanceToMainCharacter = DirectionToMainCharacter.Size();

    // 거리가 FollowDistance보다 크면 메인 캐릭터를 향해 이동
    if (DistanceToMainCharacter > FollowDistance)
    {
        FVector MoveDirection = DirectionToMainCharacter.GetSafeNormal();  // 이동할 방향을 정규화
        AddMovementInput(MoveDirection, 1.0f);  // 메인 캐릭터 방향으로 이동
    }
    */
}

void APetBase::WanderAround()
{
    /*
    bIsWandering = true;

    // 랜덤한 위치로 이동
    MoveToRandomLocation();

    // 일정 시간이 지나면 다시 자율 이동 시도
    GetWorld()->GetTimerManager().SetTimer(WanderTimerHandle, this, &ThisClass::WanderAround, WanderDelay, false);
}

void APetBase::MoveToRandomLocation()
{
    // 랜덤한 위치 계산 (메인 캐릭터 주변에서 WanderRadius 내)
    FVector MainCharacterLocation = MainCharacter->GetActorLocation();
    FVector RandomDirection = FMath::VRand();  // 랜덤한 방향
    RandomDirection.Z = 0;  // 평면 이동만 고려

    FVector TargetLocation = MainCharacterLocation + RandomDirection * FMath::RandRange(100.0f, WanderMoveDistance);

    // 펫이 이동할 목표 위치로 이동
    MoveToLocation(TargetLocation);
    */
}

void APetBase::StopWandering()
{
    /*
    bIsWandering = false;
    GetWorld()->GetTimerManager().ClearTimer(WanderTimerHandle);
    */
}

void APetBase::MoveToLocation(FVector TargetLocation)
{
    /*
    if (AIController)
    {
        SmoothRotateToTarget(TargetLocation);
        AIController->MoveToLocation(TargetLocation);
    }
    */
}

void APetBase::SmoothRotateToTarget(FVector TargetLocation)
{
    /*
    FVector DirectionToTarget = (TargetLocation - GetActorLocation()).GetSafeNormal();
    FRotator TargetRotation = DirectionToTarget.Rotation();
    FRotator CurrentRotation = GetActorRotation();

    // 부드럽게 회전 (인터폴레이션 사용)
    FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f);
    SetActorRotation(NewRotation);
    */
}





// Called every frame
void APetBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    /*
    if (MainCharacter)
    {
        FVector MainVelocity = MainCharacter->GetVelocity();
        bool bMainCharacterStopped = MainVelocity.Size() == 0.0f;

        // 메인 캐릭터가 움직이면 자율 이동 중지하고 따라감
        if (!bMainCharacterStopped)
        {
            StopWandering();  // 자율 이동 중지
            StopAttacking();
            FollowMainCharacter();  // 메인 캐릭터를 따라감
        }
        else
        {
            if (Manage)
            {
                if (!Manage->IsDetectedIsNearBy && !bIsWandering)
                {
                    WanderAround();
                }
            }
        }
    }

   */
}





