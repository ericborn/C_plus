// Fill out your copyright notice in the Description page of Project Settings.


#include "LearningPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

// Sets default values
ALearningPawn::ALearningPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// setup player mesh variable as root component
	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>("PlayerMesh");
	SetRootComponent(PlayerMesh);

	// setup camera
	Camera = CreateDefaultSubobject<UCameraComponent>("PlayerCamera");
	Camera->SetupAttachment(PlayerMesh);
	Camera->SetRelativeLocation(FVector(-300.f, 0.f, 0.f));

	// setup player movement
	PlayerMovement = CreateDefaultSubobject<UFloatingPawnMovement>("FloatingPawnMovement");
	PlayerMovement->MaxSpeed = 500.f;

	// forces pawn to follow controllers pitch and yaw
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
}

// Called when the game starts or when spawned
void ALearningPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALearningPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALearningPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// bind the button being pressed to the specific action for the learning pawn
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ALearningPawn::Jump);

	// axis events are called on every frame
	PlayerInputComponent->BindAxis("MoveForward", this, &ALearningPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALearningPawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ALearningPawn::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ALearningPawn::LookUp);

}

void ALearningPawn::Jump()
{
	UE_LOG(LogTemp, Warning, TEXT("Jumped!"));
}

void ALearningPawn::MoveForward(float Value)
{
	// If value is not 0, player is moving
	if (Value != 0.f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ALearningPawn::MoveRight(float Value)
{
	// If value is not 0, player is moving
	if (Value != 0.f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ALearningPawn::Turn(float Value)
{
	// If value is not 0, player is turning
	if (Value != 0.f)
	{
		AddControllerYawInput(Value);
	}
}

void ALearningPawn::LookUp(float Value)
{
	// If value is not 0, player is looking
	if (Value != 0.f)
	{
		AddControllerPitchInput(Value);
	}
}
