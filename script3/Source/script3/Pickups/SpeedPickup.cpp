// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedPickup.h"
#include "script3/MyCharacterclase.h"
#include "script3/Components/BuffComponent.h"

void ASpeedPickup::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	AMyCharacterclase* MyCharacter = Cast <AMyCharacterclase>(OtherActor);

	if (MyCharacter)
	{
		UBuffComponent* Buff = MyCharacter->GetBuff();
		if (Buff)
		{
			Buff->BuffSpeed(BaseSpeedBuff, CrouchSpeedBuff, SpeedBuffTime);
		}
	}
	Destroy();
}
