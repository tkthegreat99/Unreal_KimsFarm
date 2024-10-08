// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/PetAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Character/PetBase.h"
#include "Character/MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Character/EnemyBase.h"
#include "Resource/ResourceBase.h"

const FName APetAIController::OwnerActorKey(TEXT("OwnerActor"));
const FName APetAIController::DetectedActorKey(TEXT("DetectedActor"));
const FName APetAIController::CurrentCharacterStateKey(TEXT("CurrentCharacterState"));

APetAIController::APetAIController()
{
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));
	BrainComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BrainComponent"));
}

void APetAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* ControlledPawn = GetPawn();
	if (IsValid(ControlledPawn) == true)
	{
		BeginAI(ControlledPawn);
	}
}

void APetAIController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	EndAI();

	Super::EndPlay(EndPlayReason);
}

void APetAIController::BeginAI(APawn* InPawn)
{
	ACharacter* Getcharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	OwnerCharacter = Cast<AMainCharacter>(Getcharacter);
	
	checkf(IsValid(OwnerCharacter), TEXT("Fail to Get Character"));

	UBlackboardComponent* BlackboardComponent = Cast<UBlackboardComponent>(Blackboard);
	if (IsValid(BlackboardComponent) == true)
	{
		if (UseBlackboard(BlackboardData, BlackboardComponent) == true)
		{
			bool bRunSucceeded = RunBehaviorTree(BehaviorTree);
			checkf(bRunSucceeded == true, TEXT("Fail to run behavior tree."));

			BlackboardComponent->SetValueAsObject(OwnerActorKey, OwnerCharacter);
			BlackboardComponent->SetValueAsEnum(CurrentCharacterStateKey, static_cast<uint8>(OwnerCharacter->GetCurrentCharacterState()));
		}
	}
}

void APetAIController::EndAI()
{
	UBehaviorTreeComponent* BehaviorTreeComponent = Cast<UBehaviorTreeComponent>(BrainComponent);
	if (IsValid(BehaviorTreeComponent) == true)
	{
		BehaviorTreeComponent->StopTree();
	}
}

void APetAIController::SetCurrentStateAsIdle()
{
	if (Blackboard)
	{
		Blackboard->SetValueAsEnum(CurrentCharacterStateKey, static_cast<uint8>(ECharacterState::ECS_Idle));
	}
}

void APetAIController::SetCurrentStateAsAttacking(TSet<AEnemyBase*> DetectedEnemies)
{

	AEnemyBase* ClosestEnemy = nullptr;
	float ClosestDistance = FLT_MAX;

	for (AEnemyBase* Enemy : DetectedEnemies)
	{
		float Distance = FVector::Dist(OwnerCharacter->GetActorLocation(), Enemy->GetActorLocation());
		if (Distance < ClosestDistance)
		{
			ClosestDistance = Distance;
			ClosestEnemy = Enemy;
		}
	}
	if (Blackboard)
	{
		Blackboard->SetValueAsEnum(CurrentCharacterStateKey, static_cast<uint8>(ECharacterState::ECS_Attacking));
		Blackboard->SetValueAsObject(DetectedActorKey, ClosestEnemy);
	}
}

void APetAIController::SetCurrentStateAsGathering(TSet<AResourceBase*> DetectedResources)
{
	AResourceBase* ClosestResource = nullptr;
	float ClosestDistance = FLT_MAX;

	for (AResourceBase* Resource : DetectedResources)
	{
		float Distance = FVector::Dist(OwnerCharacter->GetActorLocation(), Resource->GetActorLocation());
		if (Distance < ClosestDistance)
		{
			ClosestDistance = Distance;
			ClosestResource = Resource;
		}
	}
	if (Blackboard)
	{
		Blackboard->SetValueAsEnum(CurrentCharacterStateKey, static_cast<uint8>(ECharacterState::ECS_Gathering));
		Blackboard->SetValueAsObject(DetectedActorKey, ClosestResource);
	}
}

void APetAIController::SetCurrentStateAsMoving()
{
	if (Blackboard)
	{
		Blackboard->SetValueAsEnum(CurrentCharacterStateKey, static_cast<uint8>(ECharacterState::ECS_Moving));
	}
}

void APetAIController::SetCurrentStateAsDead()
{
	if (Blackboard)
	{
		Blackboard->SetValueAsEnum(CurrentCharacterStateKey, static_cast<uint8>(ECharacterState::ECS_Dead));
	}
}

