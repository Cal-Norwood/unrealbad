// Fill out your copyright notice in the Description page of Project Settings.


#include "Ship.h"


// Sets default values
AShip::AShip()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AShip::BeginPlay()
{
	Super::BeginPlay();

	for(int i = 0; i < amountOfFuelTypes; i++)
	{
		int randomNum = FMath::RandRange(0, fuelTypes.Num() - 1);

		selectedFuels.Add(fuelTypes[randomNum]);

		float randomfloat = FMath::RandRange(40, 100);

		requiredFuelAmounts.Add(randomfloat);
	}
}

// Called every frame
void AShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(isMoving)
	{
		FVector CurrentLocation = GetActorLocation();
		FVector NewLocation = FMath::VInterpTo(CurrentLocation, DockPosition, DeltaTime, ShipSpeed);

		SetActorLocation(NewLocation);

		if (FVector::Dist(CurrentLocation, DockPosition) <= 75.0f) // Threshold to stop
		{
			isMoving = false;
		}
	}
}

