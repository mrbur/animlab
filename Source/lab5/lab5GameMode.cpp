// Copyright Epic Games, Inc. All Rights Reserved.

#include "lab5GameMode.h"
#include "lab5Character.h"
#include "UObject/ConstructorHelpers.h"

Alab5GameMode::Alab5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
