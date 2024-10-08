// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTT_Attack.h"
#include "AI/PetAIController.h"
#include "Character/PetBase.h"

UBTT_Attack::UBTT_Attack()
{
}

EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APetAIController* PetAIController = Cast<APetAIController>(OwnerComp.GetAIOwner());
	APetBase* Pet = Cast<APetBase>(PetAIController->GetPawn());
	
	
	return EBTNodeResult::InProgress;
}
