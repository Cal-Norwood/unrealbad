// Copyright Epic Games, Inc. All Rights Reserved.

#include "john_DieselCharacter.h"

#include <Imath/Deploy/Imath-3.1.3/include/Imath/ImathFun.h>

#include "john_DieselProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"


//////////////////////////////////////////////////////////////////////////
// Ajohn_DieselCharacter

Ajohn_DieselCharacter::Ajohn_DieselCharacter()
{
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	MovementComponent = Cast<UCharacterMovementComponent>(GetCharacterMovement());
}

void Ajohn_DieselCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

}

//////////////////////////////////////////////////////////////////////////// Input

void Ajohn_DieselCharacter::Tick(float DeltaSeconds)
{
	ACharacter::Tick(DeltaSeconds);

	if(InSpace)
	{
		FirstPersonCameraComponent->AddRelativeRotation(FRotator(0, 0, rotationRate));
	}
}

void Ajohn_DieselCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &Ajohn_DieselCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &Ajohn_DieselCharacter::Look);

		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Triggered, this, &Ajohn_DieselCharacter::Roll);
	}
}


void Ajohn_DieselCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr && !InSpace)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
	else if (InSpace)
	{
		AddMovementInput(FirstPersonCameraComponent->GetForwardVector() ,MovementVector.Y);
		AddMovementInput(FirstPersonCameraComponent->GetRightVector() ,MovementVector.X);
	}
}

void Ajohn_DieselCharacter::Roll(const FInputActionValue& Value)
{
	float rotationDir = Value.Get<float>();

	if(rotationRate > -2 && rotationDir < 0)
	{
		rotationRate += rotationDir * 0.01;
	}
	else if(rotationRate < 2 && rotationDir > 0)
	{
		rotationRate += rotationDir * 0.01;
	}
}

void Ajohn_DieselCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// Get the current camera rotation (we're concerned with roll and pitch)
		FRotator CameraRotation = FirstPersonCameraComponent->GetComponentRotation();

		// Get the current roll from the camera's rotation (we want to counteract this)
		float CameraRoll = CameraRotation.Roll;

		// Adjust the look axis vector based on the camera's roll
		FVector2D AdjustedLookAxis = LookAxisVector;

		// If the camera has roll, adjust the input to account for that
		if (FMath::Abs(CameraRoll) > 0.0f)
		{
			// Calculate how much the yaw axis is affected by the roll
			// This adjusts the X (yaw) axis to compensate for the camera's roll
			float RollAdjustedYaw = LookAxisVector.X * FMath::Cos(FMath::DegreesToRadians(CameraRoll))
									- LookAxisVector.Y * FMath::Sin(FMath::DegreesToRadians(CameraRoll));
            
			// Adjust pitch similarly, but usually, pitch is less affected by roll
			float RollAdjustedPitch = LookAxisVector.X * FMath::Sin(FMath::DegreesToRadians(CameraRoll))
									  + LookAxisVector.Y * FMath::Cos(FMath::DegreesToRadians(CameraRoll));
            
			// Set the adjusted look axis values
			AdjustedLookAxis.X = RollAdjustedYaw;
			AdjustedLookAxis.Y = RollAdjustedPitch;
		}

		// Apply the corrected input to the controller
		AddControllerYawInput(AdjustedLookAxis.X);
		AddControllerPitchInput(AdjustedLookAxis.Y);
	}
}

void Ajohn_DieselCharacter::SetupSpaceMovement()
{
	InSpace = true;
	MovementComponent->GravityScale = 0;
	MovementComponent->BrakingFrictionFactor = 0;
	MovementComponent->MaxAcceleration = 100;
	MovementComponent->SetMovementMode(MOVE_Flying);
	
}

void Ajohn_DieselCharacter::SetupNormalMovement()
{
	InSpace = false;
	MovementComponent->GravityScale = 1;
	MovementComponent->SetMovementMode(MOVE_Walking);
	MovementComponent->BrakingFrictionFactor = 2;
	MovementComponent->MaxAcceleration = 2048;
	FirstPersonCameraComponent->SetRelativeRotation(FRotator(0, 0, 0));
	rotationRate = 0;
}