


#include "Components/CharacterManagementComponent.h"
#include "Character/EnemyBase.h"
#include "Character/PetBase.h"
#include "Resource/ResourceBase.h"
#include "Character/MainCharacter.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

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
}


void UCharacterManagementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UCharacterManagementComponent::HandleEnemiesAndResources(TSet<AEnemyBase*>& Enemies, TSet<AResourceBase*>& Resources)
{

    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("Handling Enemies: %d, Resources: %d"), Enemies.Num(), Resources.Num()));
    DetectedEnemies = Enemies;
    DetectedResources = Resources;

    if (DetectedEnemies.Num() > 0)
    {
        // �� ó�� ���� (���� ���� ��)
        AEnemyBase* TargetEnemy = *DetectedEnemies.CreateIterator();
        //AEnemyBase* TargetEnemy = DetectedEnemies[0];
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Handling Enemy"));

        // �� ���� ó�� �Ǵ� �̵�
    }
    // ���� ������ �ڿ� ó��
    else if (DetectedResources.Num() > 0)
    {
        // �ڿ� ä�� ����
        AResourceBase* TargetResource = *DetectedResources.CreateIterator();
        //AResourceBase* TargetResource = DetectedResources[0];
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Handling Resource"));

        // �ڿ� ä�� ó�� �Ǵ� �̵�
    }
    else GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Ang"));
}


