// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterManagementComponent.generated.h"

class AEnemyBase;
class AResourceBase;
class APetBase;
class AMainCharacter;
class ACharacter;
class AAIController;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class URRFARM_API UCharacterManagementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCharacterManagementComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void HandleEnemiesAndResources(TSet<AEnemyBase*>& Enemies, TSet<AResourceBase*>& Resources);



	UPROPERTY(EditAnywhere)
	TObjectPtr<ACharacter> ComponentOwner;

	UPROPERTY(EditAnywhere)
	TObjectPtr<AAIController> AIController;

	FORCEINLINE float GetCharacterCurrentHealth() { return CurrentHealth; }

	bool IsDetectedIsNearBy = false;
protected:
	virtual void BeginPlay() override;

private:



	UPROPERTY(EditAnywhere, Category = "Character Stats")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
	float MaxHealth;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
	float AttackRange;

	TSet<AEnemyBase*> DetectedEnemies;
	TSet<AResourceBase*> DetectedResources;

		
};
