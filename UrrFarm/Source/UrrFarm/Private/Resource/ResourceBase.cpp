

#include "Resource/ResourceBase.h"

AResourceBase::AResourceBase()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AResourceBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AResourceBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

