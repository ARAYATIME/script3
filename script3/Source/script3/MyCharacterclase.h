// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Camera/CameraComponent.h"
#include"Components/CapsuleComponent.h"
#include"Components/StaticMeshComponent.h"
#include"Components/InputComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "script3/Components/BuffComponent.h"

#include "Blueprint/UserWidget.h" 
#include "MyCharacterclase.generated.h"

UCLASS()
class SCRIPT3_API AMyCharacterclase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacterclase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		UCameraComponent* FollowCamera;

	void MoveForward(float Axis);
	void MoveRight(float Axis);

	bool bDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float health;
	UPROPERTY(EditAnywhere)
		float healthThreshold;


	UFUNCTION()
        void OnBeginOverlap(class UPrimitiveComponent* HitComp, class AActor* otherActor, class UPrimitiveComponent* otherComp,
			int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UPROPERTY(EditAnywhere, Category = "UI HUD")
		TSubclassOf<UUserWidget> Player_Health_Widget_Class;
	UUserWidget* Player_Health_Widget;

	void RestartGame();
	// function that gets called when character is fully initialized
	virtual void PostInitializeComponents() override;

	FORCEINLINE UBuffComponent* GetBuff() const { return Buff; }
	FORCEINLINE void SetHealth(float Amount) { health = Amount; }
	FORCEINLINE float GetHealth() const { return health; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
	class UBuffComponent* Buff;
};
