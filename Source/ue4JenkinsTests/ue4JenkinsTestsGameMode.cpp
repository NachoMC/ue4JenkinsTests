// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue4JenkinsTestsGameMode.h"
#include "ue4JenkinsTestsPlayerController.h"
#include "ue4JenkinsTestsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue4JenkinsTestsGameMode::Aue4JenkinsTestsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Aue4JenkinsTestsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}