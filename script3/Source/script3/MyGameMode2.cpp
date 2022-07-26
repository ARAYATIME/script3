// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode2.h"
#include "GameFramework/Actor.h"


AMyGameMode2::AMyGameMode2()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyGameMode2::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UHandle;
	GetWorldTimerManager().SetTimer(UHandle, this, &AMyGameMode2::SpawnHealth, FMath::RandRange(2, 8), true);

	
}

void AMyGameMode2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyGameMode2::SpawnHealth()
{
	float RandX = FMath::RandRange(spawnX_MIN, spawnX_MAX);
	float RandY = FMath::RandRange(spawnY_MIN, spawnY_MAX);

	FVector SpawnPosition = FVector(RandX, RandY, spawnZ);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(SpawnbleHealth, &SpawnPosition, &SpawnRotation);
}

