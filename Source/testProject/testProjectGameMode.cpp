// Copyright Epic Games, Inc. All Rights Reserved.

#include "testProjectGameMode.h"
#include "testProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestProjectGameMode::AtestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
