// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ship.generated.h"

UCLASS()
class JOHN_DIESEL_API AShip : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AShip();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString shipName = "DefaultShip";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> fuelTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> selectedFuels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int amountOfFuelTypes = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> requiredFuelAmounts;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShipSpeed = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DockPosition = FVector(1100, 2300, 110);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool isMoving = true;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
