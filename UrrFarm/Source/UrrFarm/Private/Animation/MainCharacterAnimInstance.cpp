// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/MainCharacterAnimInstance.h"
#include "Character/MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMainCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	Character = Cast<AMainCharacter>(TryGetPawnOwner());
}

void UMainCharacterAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (IsValid(Character) == true)
	{
		Velocity = Character->GetVelocity();
		Velocity.Z = 0.f;
		CurrentSpeed = Velocity.Size();
		bIsInAir = Character->GetCharacterMovement()->IsFalling();
		bIsAccelerating = Character->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f ? true : false;
	}
}
