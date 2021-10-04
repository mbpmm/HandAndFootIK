// Copyright Epic Games, Inc. All Rights Reserved.

#include "IKWorkshopGameMode.h"
#include "IKWorkshopCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIKWorkshopGameMode::AIKWorkshopGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
