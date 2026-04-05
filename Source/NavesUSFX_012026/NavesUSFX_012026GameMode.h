// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NavesUSFX_012026GameMode.generated.h"

UCLASS(MinimalAPI)
class ANavesUSFX_012026GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavesUSFX_012026GameMode();
private:
	// Cantidad de enemigos a generar
	int CantidadEnemigos;


protected:
	// Se ejecuta al iniciar el juego
	virtual void BeginPlay() override;

public:
	// Tick (opcional)
	virtual void Tick(float DeltaTime) override;


};



