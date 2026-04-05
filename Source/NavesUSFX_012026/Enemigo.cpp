// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = MallaEnemigo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MallaAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MallaAsset.Object);
	}
	Tiempo = 0.0f;
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
    Velocidad = 200.0f;

    LimiteMundoX = 1000.0f;
    LimiteMundoY = 1000.0f;

    TiempoCambioEstado = 0.0f;

    // Dirección inicial aleatoria
    Direccion = FVector(
        FMath::FRandRange(-1.0f, 1.0f),
        FMath::FRandRange(-1.0f, 1.0f),
        0.0f
    ).GetSafeNormal();
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//MoverEnemigo(DeltaTime);
    MoverEnemigoAleatorio(DeltaTime);
}

void AEnemigo::MoverEnemigo(float DeltaTime)
{
	// Acumulador de tiempo
	Tiempo += DeltaTime;

	// Obtener posición actual
	FVector Posicion = GetActorLocation();


	Posicion.X += FMath::Sin(Tiempo * 2.0f) * 2.0f; // avanza eje y
	//Posicion.Y += FMath::Sin(Tiempo * 2.0f) * 10.0f; // avanza en modo onda


	// Aplicar nueva posición
	SetActorLocation(Posicion);
}

void AEnemigo::MoverEnemigoAleatorio(float DeltaTime)
{
    // Seguridad
    if (!GetWorld()) return;

    // Tiempo acumulado
    TiempoCambioEstado += DeltaTime;

    FVector Posicion = GetActorLocation();

    // Movimiento
    Posicion += Direccion * Velocidad * DeltaTime;

    // CAMBIO DE DIRECCIÓN CADA 5 SEGUNDOS
    if (TiempoCambioEstado >= 5.0f)
    {
        Direccion = FVector(
            FMath::FRandRange(-1.0f, 1.0f),
            FMath::FRandRange(-1.0f, 1.0f),
            0.0f
        ).GetSafeNormal();

        TiempoCambioEstado = 0.0f;
    }

    // LÍMITES EN X
    if (Posicion.X > LimiteMundoX)
    {
        Posicion.X = LimiteMundoX;
        Direccion.X *= -1;
    }
    else if (Posicion.X < -LimiteMundoX)
    {
        Posicion.X = -LimiteMundoX;
        Direccion.X *= -1;
    }

    // LÍMITES EN Y
    if (Posicion.Y > LimiteMundoY)
    {
        Posicion.Y = LimiteMundoY;
        Direccion.Y *= -1;
    }
    else if (Posicion.Y < -LimiteMundoY)
    {
        Posicion.Y = -LimiteMundoY;
        Direccion.Y *= -1;
    }

    // Aplicar posición
    SetActorLocation(Posicion);
}
