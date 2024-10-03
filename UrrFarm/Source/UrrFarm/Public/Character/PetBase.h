// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PetBase.generated.h"

class AMainCharacter;
class AEnemyBase;

UCLASS()
class URRFARM_API APetBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APetBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void AttackEnemies(TArray<AEnemyBase*> DetectedEnemies);
	void StopAttacking();
	bool bEnemyNearby = false;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TObjectPtr<AMainCharacter> MainCharacter;

	float FollowDistance = 200.f;
	float PetMoveSpeed = 100.f;
	float WanderRadius = 800.0f;
	float WanderMoveDistance = 700.0f;
	float WanderDelay = 5.0f;
	FTimerHandle WanderTimerHandle;
	bool bIsWandering = false;
	
protected:

	void FollowMainCharacter();
	void WanderAround();
	void MoveToRandomLocation();
	void StopWandering();
	void MoveToLocation(FVector TargetLocation);
	void SmoothRotateToTarget(FVector TargetLocation);
	
	

	

};
