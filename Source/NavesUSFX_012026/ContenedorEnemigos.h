// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ContenedorEnemigos.generated.h"

UCLASS()
class NAVESUSFX_012026_API AContenedorEnemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AContenedorEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int32 CantidadEnemigos;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
