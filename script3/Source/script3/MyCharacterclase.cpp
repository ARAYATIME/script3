// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterclase.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AMyCharacterclase::AMyCharacterclase()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

    bUseControllerRotationPitch = false;
    bUseControllerRotationRoll = false;
    bUseControllerRotationYaw = false;

    GetCharacterMovement()->bOrientRotationToMovement = true;
    GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
    GetCharacterMovement()->JumpZVelocity = 450.0f;
    GetCharacterMovement()->AirControl = 0.2f;
    
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->TargetArmLength = 300.0f;
    CameraBoom->bUsePawnControlRotation = true;

    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent:: SocketName);
    FollowCamera->bUsePawnControlRotation = false;
    bDead = false;
    health = 100.0f;
    
}

void AMyCharacterclase::RestartGame()
{
    UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

// Called when the game starts or when spawned
void AMyCharacterclase::BeginPlay()
{
    Super::BeginPlay();
    GetCapsuleComponent()->OnComponentBeginOverlap. AddDynamic(this, &AMyCharacterclase::OnBeginOverlap);
    if (Player_Health_Widget_Class != nullptr)
    {
        Player_Health_Widget = CreateWidget(GetWorld(), Player_Health_Widget_Class);
        Player_Health_Widget->AddToViewport();
    }
}

// Called every frame
void AMyCharacterclase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    health -= DeltaTime * healthThreshold;

    if (health <= 0)
    {
        if (!bDead) 
        {
            bDead = true;
            GetMesh()->SetSimulatePhysics(true);

            FTimerHandle UHandle;
            GetWorldTimerManager().SetTimer(UHandle, this, &AMyCharacterclase::RestartGame, 5.0f, false);
        }
    }
}

// Called to bind functionality to input
void AMyCharacterclase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
    PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn:: AddControllerPitchInput);

    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

    PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AMyCharacterclase:: MoveForward);
    PlayerInputComponent->BindAxis("Move Right / Left",this, &AMyCharacterclase::MoveRight);
}


void AMyCharacterclase::MoveForward(float Axis)
{
    if (!bDead)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Direcction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        AddMovementInput(Direcction, Axis);
    }
    
}

void AMyCharacterclase::MoveRight(float Axis)
{
    if (!bDead)
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector Direcction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Direcction, Axis);
    }
}

void AMyCharacterclase::OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
    if (otherActor->ActorHasTag("PV"))
    {
        //UE_LOG(LogTemp, Warning, TEXT ("Health"));
        health += 10.0f;
        if (health > 100.0f) health = 100.0f;
        otherActor->Destroy();
    }
}


