// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavesUSFX_012026GameMode.h"
#include "NavesUSFX_012026Pawn.h"
#include "Enemigo.h"
#include "Engine/World.h"

ANavesUSFX_012026GameMode::ANavesUSFX_012026GameMode()
{
	// set default pawn class to our character class
	// Pawn por defecto para el jugador
	DefaultPawnClass = ANavesUSFX_012026Pawn::StaticClass();

	// Activar Tick (opcional)
	PrimaryActorTick.bCanEverTick = true;

	// Cantidad de enemigos
	CantidadEnemigos = 1;
}
// BeginPlay
void ANavesUSFX_012026GameMode::BeginPlay()
{
	Super::BeginPlay();

	if (!GetWorld()) return;

	for (int i = 0; i < CantidadEnemigos; i++)
	{
		// Posición aleatoria
		float X = FMath::RandRange(-800.0f, 800.0f);
		float Y = FMath::RandRange(-800.0f, 800.0f);
		float Z = 300.0f;

		FVector Location(X, Y, Z);
		FRotator Rotation = FRotator::ZeroRotator;

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;

		AEnemigo* Enemigo = GetWorld()->SpawnActor<AEnemigo>(
			AEnemigo::StaticClass(),
			Location,
			Rotation,
			SpawnParams
		);

		//Debug
		if (!Enemigo)
		{
			UE_LOG(LogTemp, Error, TEXT("Error al spawnear enemigo"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Enemigo creado en"), X, Y, Z);
		}
	}
}

void ANavesUSFX_012026GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//usar esto luego para oleadas
}
