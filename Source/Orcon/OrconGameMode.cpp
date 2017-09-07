// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "OrconGameMode.h"
#include "OrconPawn.h"

AOrconGameMode::AOrconGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AOrconPawn::StaticClass();
}
