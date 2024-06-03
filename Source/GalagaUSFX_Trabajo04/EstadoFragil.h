// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstados.h"
#include "EstadoFragil.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API AEstadoFragil : public AActor, public IIEstados
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoFragil();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

protected:
	class ANaveJefe* NaveJefe;

	float velocidad;

	void SetNaveJefe(class ANaveJefe* _NaveJefe) override;
	void EjecutarMovimiento(float DeltaTime) override;

	//FString ObtenerEstado() override;

private:
	void EjecutarDisparo() override{};
	void EjecutarCreacionEscudoJefe() override {};
};
