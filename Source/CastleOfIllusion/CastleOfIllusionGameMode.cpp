// Copyright Epic Games, Inc. All Rights Reserved.

#include "CastleOfIllusionGameMode.h"
#include "CastleOfIllusionPlayerController.h"
#include "CastleOfIllusionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACastleOfIllusionGameMode::ACastleOfIllusionGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACastleOfIllusionPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}