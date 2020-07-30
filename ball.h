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

	// sets up properties for the ball actor
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BallMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
