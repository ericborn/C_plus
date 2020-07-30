// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ball.generated.h"

UCLASS()
class C_PLUS_API Aball : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aball();

	// allows a static mesh to be assigned to the ball
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BallMesh;
	
	// setup an editable value for the launch velocity of the ball
	UPROPERTY(EditAnywhere)
	float LaunchVelocity;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
