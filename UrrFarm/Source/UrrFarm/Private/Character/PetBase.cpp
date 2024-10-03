// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PetBase.h"
#include "Kismet/GameplayStatics.h"
#include "Character/MainCharacter.h"
#include "AI/AISystemBase.h"
#include "AIController.h"
#include "Character/EnemyBase.h"

// Sets default values
APetBase::APetBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	
}

void APetBase::FollowMainCharacter()
{
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
}

void APetBase::WanderAround()
{
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
}

void APetBase::StopWandering()
{
    bIsWandering = false;
    GetWorld()->GetTimerManager().ClearTimer(WanderTimerHandle);
}

void APetBase::MoveToLocation(FVector TargetLocation)
{
    AAIController* AIController = Cast<AAIController>(GetController());
    if (AIController)
    {
        SmoothRotateToTarget(TargetLocation);
        AIController->MoveToLocation(TargetLocation);
    }
}

void APetBase::SmoothRotateToTarget(FVector TargetLocation)
{
    FVector DirectionToTarget = (TargetLocation - GetActorLocation()).GetSafeNormal();
    FRotator TargetRotation = DirectionToTarget.Rotation();
    FRotator CurrentRotation = GetActorRotation();

    // �ε巴�� ȸ�� (���������̼� ���)
    FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f);
    SetActorRotation(NewRotation);
}

void APetBase::AttackEnemies(TArray<AEnemyBase*> DetectedEnemies)
{
    bEnemyNearby = true;
    if (DetectedEnemies.Num() > 0)
    {
        // ù ��° ���� Ÿ������ ���� (������ ���� ���� Ÿ�� ���� ����)
        AEnemyBase* TargetEnemy = DetectedEnemies[0];

        if (TargetEnemy)
        {
            // Ÿ���� �����ϴ� ���� �߰� (�̵� �� ����)
            MoveToLocation(TargetEnemy->GetActorLocation());
            UE_LOG(LogTemp, Warning, TEXT("Pet attacking: %s"), *TargetEnemy->GetName());
        }
    }
}

void APetBase::StopAttacking()
{
    bEnemyNearby = false;
    AAIController* AIController = Cast<AAIController>(GetController());
    if (AIController)
    {
        AIController->StopMovement();
    }

    UE_LOG(LogTemp, Warning, TEXT("Pet Stopped Attacking"));
}

// Called every frame
void APetBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
            // ���� ĳ���Ͱ� ���߰� �ְ� ���� ������ ���� �̵� ����
             // �� ���� ���� �ʿ�
            if (!bEnemyNearby && !bIsWandering)
            {
                WanderAround();
            }
        }
    }

}



