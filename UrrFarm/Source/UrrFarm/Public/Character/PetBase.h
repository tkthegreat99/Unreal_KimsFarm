// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PetBase.generated.h"

class AMainCharacter;
class AEnemyBase;
class APetAIController;
class UCharacterManagementComponent;
class UAnimMontage;

UENUM(BlueprintType)
enum class EPetRarity : uint8
{
	EPR_Common UMETA(DisplayName = "Common"),  
	EPR_Rare UMETA(DisplayName = "Rare"), 
	EPR_Legend UMETA(DisplayName = "Legend") 
};

UCLASS()
class URRFARM_API APetBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APetBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;
	FORCEINLINE UCharacterManagementComponent* GetManage() { return Manage; }
	FORCEINLINE APetAIController* GetAIController() { return PetAIController; }
	bool bIsDetectedNearby = false;
	TObjectPtr<AMainCharacter> MainCharacter;
	virtual void BeginAttack();
	void EndAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

	TObjectPtr<APetAIController> PetAIController;

	TObjectPtr<UCharacterManagementComponent> Manage;
	

	float FollowDistance = 200.f;
	float PetMoveSpeed = 600.f;
	float WanderRadius = 800.0f;
	float WanderMoveDistance = 700.0f;
	float WanderDelay = 5.0f;
	FTimerHandle WanderTimerHandle;
	bool bIsWandering = false;
	bool bIsAttacking = false;
	
protected:

	void FollowMainCharacter();
	void WanderAround();
	//void MoveToRandomLocation();
	void StopWandering();
	void MoveToLocation(FVector TargetLocation);
	void SmoothRotateToTarget(FVector TargetLocation);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pet, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAnimMontage> AttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pet, meta = (AllowPrivateAccess = "true"))
	EPetRarity PetRarity;

};
