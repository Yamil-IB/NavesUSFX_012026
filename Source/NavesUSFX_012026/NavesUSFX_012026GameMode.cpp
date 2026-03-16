// Copyright Epic Games, Inc. All Rights Reserved.
//Game mode cpp
#include "NavesUSFX_012026GameMode.h"
#include "NavesUSFX_012026Pawn.h"
#include "TimerManager.h"

ANavesUSFX_012026GameMode::ANavesUSFX_012026GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ANavesUSFX_012026Pawn::StaticClass();

	bPerseguirJugador = false;
	TiempoPersecucion = 15.0f;
}
void ANavesUSFX_012026GameMode::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(
		TimerPersecucion,
		this,
		&ANavesUSFX_012026GameMode::ActivarPersecucion,
		TiempoPersecucion,
		false
	);
}

void ANavesUSFX_012026GameMode::ActivarPersecucion()
{
	bPerseguirJugador = true;
}
