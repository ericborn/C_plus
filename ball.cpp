// Fill out your copyright notice in the Description page of Project Settings.


#include "ball.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
Aball::Aball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// create sub-object that is a static mesh called BallMesh
	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>("BallMesh");


}

// Called when the game starts or when spawned
void Aball::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("hello world"));
}

// Called every frame
void Aball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

