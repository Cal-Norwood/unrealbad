// Fill out your copyright notice in the Description page of Project Settings.


#include "john_Diesel/Public/GameManager.h"

#include "Ship.h"


// Sets default values
AGameManager::AGameManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
	SpawnShip();
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGameManager::SpawnShip()
{
	FVector SpawnLocation = FVector(-10000, 2000, 0); // Example location
	FRotator SpawnRotation = FRotator(0.0f, -90.0f, 0.0f);

	// Spawn parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	AShip* Ship = GetWorld()->SpawnActor<AShip>(ShipClass, SpawnLocation, SpawnRotation, SpawnParams);
}

