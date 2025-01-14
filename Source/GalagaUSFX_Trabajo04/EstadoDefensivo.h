// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstados.h"
#include "EstadoDefensivo.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API AEstadoDefensivo : public AActor, public IIEstados
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoDefensivo();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	virtual void ResetFire();

	int MaxProjectile;
	int NumberFired;
	bool bCanFire;

	FVector ultimaPosicionJugador;

public:
	class ANaveJefe* NaveJefe;

	void SetNaveJefe(class ANaveJefe* _NaveJefe) override;

	void EjecutarDisparo() override;
	void EjecutarCreacionEscudoJefe() override;

	//FString ObtenerEstado() override;

private:
	void EjecutarMovimiento(float DeltaTime) override {};
};
