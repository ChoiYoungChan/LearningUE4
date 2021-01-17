// Copyright Epic Games, Inc. All Rights Reserved.

#include "CameraControllGameMode.h"
#include "CameraControllCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACameraControllGameMode::ACameraControllGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
