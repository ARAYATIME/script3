// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode2.generated.h"

/**
 * 
 */
UCLASS()
class SCRIPT3_API AMyGameMode2 : public AGameMode
{
	GENERATED_BODY()

	AMyGameMode2();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> SpawnbleHealth;

	

	float spawnZ = 500.0f;

	UPROPERTY(EditAnywhere)
		float spawnX_MIN;
	UPROPERTY(EditAnywhere)
		float spawnX_MAX;
	UPROPERTY(EditAnywhere)
		float spawnY_MIN;
	UPROPERTY(EditAnywhere)
		float spawnY_MAX;

	void SpawnHealth();

	

};
