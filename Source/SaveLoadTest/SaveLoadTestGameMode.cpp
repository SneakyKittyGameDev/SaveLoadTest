// Copyright Epic Games, Inc. All Rights Reserved.

#include "SaveLoadTestGameMode.h"
#include "SaveLoadTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASaveLoadTestGameMode::ASaveLoadTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
