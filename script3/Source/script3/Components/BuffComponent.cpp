// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffComponent.h"
#include "script3/MyCharacterclase.h"

// Sets default values for this component's properties
UBuffComponent::UBuffComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UBuffComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}

// Called every frame
void UBuffComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HealRampUp(DeltaTime);
}

void UBuffComponent::Heal(float HealAmount, float HealingTime)
{
	bHealing = true;
	HealingRate = HealAmount / HealingTime;
	AmountToHeal += HealAmount;

}

void UBuffComponent::HealRampUp(float DeltaTime)
{
	if (!bHealing || MyCharacter == nullptr) return;

	// multiply by delta time to be frame rate independent
	const float HealThisFrame = HealingRate * DeltaTime;

	// clamp value to set 100.f as top limit
	MyCharacter->SetHealth(FMath::Clamp(MyCharacter->GetHealth() + HealThisFrame, 0.f, 100.f));
	AmountToHeal -= HealThisFrame;
	// stop healing
	if (AmountToHeal <= 0.f || MyCharacter->GetHealth() >= 100.f)
	{
		bHealing = false;
		AmountToHeal = 0.f;
	}
}




