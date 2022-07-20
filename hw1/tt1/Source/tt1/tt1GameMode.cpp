// Copyright Epic Games, Inc. All Rights Reserved.

#include "tt1GameMode.h"
#include "tt1Character.h"
#include "UObject/ConstructorHelpers.h"

Att1GameMode::Att1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
