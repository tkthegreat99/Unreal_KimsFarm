// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PetAIController.generated.h"

class UBehaviorTree;
class UBlackboardData;
class UBlackboardComponent;
class AMainCharacter;
class AEnemyBase;
class AResourceBase;
/**
 * 
 */


UCLASS()
class URRFARM_API APetAIController : public AAIController
{
	GENERATED_BODY()

	friend class APetBase;

public:
	APetAIController();
	void SetCurrentStateAsIdle();
	void SetCurrentStateAsAttacking(TSet<AEnemyBase*> DetectedEnemies);
	void SetCurrentStateAsGathering(TSet<AResourceBase*> DetectedResources);
	void SetCurrentStateAsMoving();
	void SetCurrentStateAsDead();
	
protected:
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void BeginAI(APawn* InPawn);

	void EndAI();

	


public:

	static const FName OwnerActorKey;

	static const FName DetectedActorKey;

	static const FName CurrentCharacterStateKey;


protected:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TObjectPtr<UBehaviorTree> BehaviorTree;  // Behavior Tree를 연결

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TObjectPtr<UBlackboardData> BlackboardData;  // Blackboard 데이터 연결

	TObjectPtr<AMainCharacter> OwnerCharacter;

};
