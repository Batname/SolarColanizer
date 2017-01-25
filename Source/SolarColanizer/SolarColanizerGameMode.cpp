// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SolarColanizer.h"
#include "SolarColanizerGameMode.h"
#include "SolarColanizerPawn.h"

ASolarColanizerGameMode::ASolarColanizerGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASolarColanizerPawn::StaticClass();
}

