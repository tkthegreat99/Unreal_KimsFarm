// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterManagementComponent.generated.h"

class AEnemyBase;
class AResourceBase;
class APetBase;
class AMainCharacter;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class URRFARM_API UCharacterManagementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCharacterManagementComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void HandleEnemiesAndResources(TSet<AEnemyBase*>& Enemies, TSet<AResourceBase*>& Resources);



	FORCEINLINE void SetCharacterMaxHealth(float Health) { MaxHealth = Health; }
	FORCEINLINE float GetCharacterCurrentHealth() { return CurrentHealth; }


protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, Category = "Character Stats")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "Character Stats")
	float MaxHealth;

	TSet<AEnemyBase*> DetectedEnemies;
	TSet<AResourceBase*> DetectedResources;

		
};
