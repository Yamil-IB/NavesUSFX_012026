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

private:
	float Tiempo; //movimiento en eje y

	void MoverEnemigo(float DeltaTime);
	void MoverEnemigoAleatorio(float DeltaTime);

	// Movimiento aleatorio
	FVector Direccion;
	float Velocidad;
	float LimiteMundoX;
	float LimiteMundoY;
	float TiempoCambioEstado;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
