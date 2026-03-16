// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

class UStaticMeshComponent;

UCLASS()
class NAVESUSFX_012026_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();
	UStaticMeshComponent* MallaEnemigo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	float Velocidad;
	//float TiempoPersecucion;
	//float TiempoActual;
	//bool bPerseguirJugador= false;
	FVector DireccionAleatoria;

	// Jugador
	class APawn* Jugador;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
