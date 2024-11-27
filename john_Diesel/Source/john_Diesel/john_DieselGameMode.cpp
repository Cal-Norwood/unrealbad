// Copyright Epic Games, Inc. All Rights Reserved.

#include "john_DieselGameMode.h"
#include "john_DieselCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ajohn_DieselGameMode::Ajohn_DieselGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
