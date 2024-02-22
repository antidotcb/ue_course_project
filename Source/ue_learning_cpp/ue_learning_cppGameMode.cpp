// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue_learning_cppGameMode.h"
#include "ue_learning_cppCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue_learning_cppGameMode::Aue_learning_cppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
