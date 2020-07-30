// Fill out your copyright notice in the Description page of Project Settings.


#include "LearningPawn.h"

// Sets default values
ALearningPawn::ALearningPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	// bind the jump button being pressed to the action of jumping for the learning pawn
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ALearningPawn::Jump);

}

void ALearningPawn::Jump()
{
	UE_LOG(LogTemp, Warning, TEXT("Jumped!"));
}

