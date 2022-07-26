// Copyright Epic Games, Inc. All Rights Reserved.

#include "script3GameMode.h"
#include "script3Character.h"
#include "UObject/ConstructorHelpers.h"

Ascript3GameMode::Ascript3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
