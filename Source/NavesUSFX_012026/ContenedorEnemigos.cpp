// Fill out your copyright notice in the Description page of Project Settings.


#include "ContenedorEnemigos.h"
#include "Enemigo.h"
// Sets default values
AContenedorEnemigos::AContenedorEnemigos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CantidadEnemigos = 5;

}

// Called when the game starts or when spawned
void AContenedorEnemigos::BeginPlay()
{
	Super::BeginPlay();
	
	for (int i = 0; i < CantidadEnemigos; i++)
	{
		FVector Posicion = GetActorLocation() + FVector(i * 400, 0, 200);

		GetWorld()->SpawnActor<AEnemigo>(
			AEnemigo::StaticClass(),
			Posicion,
			FRotator::ZeroRotator
		);
	}
}

// Called every frame
void AContenedorEnemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

