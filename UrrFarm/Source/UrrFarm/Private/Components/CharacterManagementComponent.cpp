


#include "Components/CharacterManagementComponent.h"
#include "Character/EnemyBase.h"
#include "Character/PetBase.h"
#include "Resource/ResourceBase.h"
#include "Character/MainCharacter.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/Character.h"
#include "AIController.h"

UCharacterManagementComponent::UCharacterManagementComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;

	CurrentHealth = 100.0f;
	MaxHealth = 100.0f;
}





void UCharacterManagementComponent::BeginPlay()
{
	Super::BeginPlay();


	CurrentHealth = MaxHealth;
    AIController = Cast<AAIController>(ComponentOwner->GetController());
}


void UCharacterManagementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UCharacterManagementComponent::HandleEnemiesAndResources(TSet<AEnemyBase*>& Enemies, TSet<AResourceBase*>& Resources)
{
    IsDetectedIsNearBy = true;
   
    //GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("Handling Enemies: %d, Resources: %d"), Enemies.Num(), Resources.Num()));
    DetectedEnemies = Enemies;
    DetectedResources = Resources;
    
   

    if (DetectedEnemies.Num() > 0)
    {
        // 적 처리 로직 (전투 시작 등)
        AEnemyBase* ClosestEnemy = nullptr;
        float ClosestDistance = FLT_MAX;

        for (AEnemyBase* Enemy : DetectedEnemies)
        {
            float Distance = FVector::Dist(ComponentOwner->GetActorLocation(), Enemy->GetActorLocation());
            if (Distance < ClosestDistance)
            {
                ClosestDistance = Distance;
                ClosestEnemy = Enemy;
            }
        }
        //AEnemyBase* TargetEnemy = DetectedEnemies[0];
        if (ClosestEnemy)
        {
            //GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, TEXT("Moving to Closest Object"));
            if (AIController)
            {
                UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, ClosestEnemy->GetActorLocation());
            }

        }

        // 적 공격 처리 또는 이동
    }
    // 적이 없으면 자원 처리
    else if (DetectedResources.Num() > 0)
    {
        // 자원 채집 로직
        AResourceBase* TargetResource = *DetectedResources.CreateIterator();
        //AResourceBase* TargetResource = DetectedResources[0];
       // GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Handling Resource"));

        // 자원 채집 처리 또는 이동
    }


}