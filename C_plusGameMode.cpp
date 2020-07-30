// Copyright Epic Games, Inc. All Rights Reserved.

#include "C_plusGameMode.h"
#include "C_plusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC_plusGameMode::AC_plusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
