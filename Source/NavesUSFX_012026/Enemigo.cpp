// Fill out your copyright notice in the Description page of Project Settings.
#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavesUSFX_012026GameMode.h"
#include "UObject/ConstructorHelpers.h"

AEnemigo::AEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;

	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaEnemigo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(
		TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'")
	);

	if (MallaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
	}

	Velocidad = 200.f;
}

void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

	Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	DireccionAleatoria = FVector(
		FMath::RandRange(-1.f, 1.f),
		FMath::RandRange(-1.f, 1.f),
		0
	).GetSafeNormal();
}

void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Posicion = GetActorLocation();

	ANavesUSFX_012026GameMode* GM =
		Cast<ANavesUSFX_012026GameMode>(UGameplayStatics::GetGameMode(GetWorld()));

	if (GM && GM->bPerseguirJugador)
	{
		if (Jugador)
		{
			FVector Direccion = (Jugador->GetActorLocation() - Posicion).GetSafeNormal();
			Posicion += Direccion * Velocidad * DeltaTime;
		}
	}
	else
	{
		Posicion += DireccionAleatoria * Velocidad * DeltaTime;
	}

	SetActorLocation(Posicion);
}

