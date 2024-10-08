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
        MainCharacter = Cast<AMainCharacter>(FoundCharacters[0]);  // ù ��° ���� ĳ����
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

    // �Ÿ��� FollowDistance���� ũ�� ���� ĳ���͸� ���� �̵�
    if (DistanceToMainCharacter > FollowDistance)
    {
        FVector MoveDirection = DirectionToMainCharacter.GetSafeNormal();  // �̵��� ������ ����ȭ
        AddMovementInput(MoveDirection, 1.0f);  // ���� ĳ���� �������� �̵�
    }
    */
}

void APetBase::WanderAround()
{
    /*
    bIsWandering = true;

    // ������ ��ġ�� �̵�
    MoveToRandomLocation();

    // ���� �ð��� ������ �ٽ� ���� �̵� �õ�
    GetWorld()->GetTimerManager().SetTimer(WanderTimerHandle, this, &ThisClass::WanderAround, WanderDelay, false);
}

void APetBase::MoveToRandomLocation()
{
    // ������ ��ġ ��� (���� ĳ���� �ֺ����� WanderRadius ��)
    FVector MainCharacterLocation = MainCharacter->GetActorLocation();
    FVector RandomDirection = FMath::VRand();  // ������ ����
    RandomDirection.Z = 0;  // ��� �̵��� ���

    FVector TargetLocation = MainCharacterLocation + RandomDirection * FMath::RandRange(100.0f, WanderMoveDistance);

    // ���� �̵��� ��ǥ ��ġ�� �̵�
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

    // �ε巴�� ȸ�� (���������̼� ���)
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

        // ���� ĳ���Ͱ� �����̸� ���� �̵� �����ϰ� ����
        if (!bMainCharacterStopped)
        {
            StopWandering();  // ���� �̵� ����
            StopAttacking();
            FollowMainCharacter();  // ���� ĳ���͸� ����
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





