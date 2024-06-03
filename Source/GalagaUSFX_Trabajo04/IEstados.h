// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstados.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEstados : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGAUSFX_TRABAJO04_API IIEstados
{
	GENERATED_BODY()
public:
	float TiempodeDisparo;

	// Establecemos la nave jefe
	virtual void SetNaveJefe(class ANaveJefe* _NaveJefe) = 0;

	// Funciones de comportamiento del estado
	virtual void EjecutarMovimiento(float DeltaTime) = 0;
	virtual void EjecutarDisparo() = 0;
	virtual void EjecutarCreacionEscudoJefe() = 0;

	// Visualizamos el estado actual de la nave jefe
	//virtual FString ObtenerEstado() = 0;
};
