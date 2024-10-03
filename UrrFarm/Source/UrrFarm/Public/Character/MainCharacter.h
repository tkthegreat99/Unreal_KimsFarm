// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

#define ECC_ToDetect ECollisionChannel::ECC_GameTraceChannel1

class UCameraComponent;
class USpringArmComponent;
class AEnemyBase;
class AMainGameController;
class USphereComponent;
class APetBase;
class UStaticMeshComponent;
class AResourceBase;
class UCharacterManagementComponent;

UCLASS()
class URRFARM_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

public:

	//캐릭터가 마우스로 찍은 곳에 왔는지 확인해주는 함수.
	void CheckCharaceterArrived(FVector TargetDestination);



	void CommandPetsToAttack(TArray<AEnemyBase*> Enemies);
	void StopPetAttack();

	//////////////* 컨트롤러 관련 *//////////////////

	void OnWheelRollUp(); // 줌 인
	void OnWheelRollDown(); // 줌 아웃

	TObjectPtr<AMainGameController> MainController;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	float ExpectedSpringArmLength; // 줌 정도


	
	// 탐지한 적 배열
	TSet<AEnemyBase*> DetectedEnemies;

	// 탐지한 자원 배열
	TSet<AResourceBase*> DetectedResources;

	// 가지고 있는 파티원들 배열
	TArray<APetBase*> PartyAnimals;

	int32 PartyMemberMaxNum;
	int32 PartyMembersCurrentNum;

	

protected:

	/// 레이더
	float ElapsedTime;
	float OverlapInterval = 1.f;
	void ActivateRadar(float DeltaTime);
	void DeactivateRadar();
	void PerformSphereTrace();
	void PerformRadarTick(float DeltaTime);


private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Radar, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> RadarMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Radar, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCharacterManagementComponent> Manage;

	bool bIsRadarActive = false;

public:

	FORCEINLINE UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
