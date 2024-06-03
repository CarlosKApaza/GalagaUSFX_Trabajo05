// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstados.h"
#include "NaveJefe.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API ANaveJefe : public AActor
{
	GENERATED_BODY()
	
public:	
	ANaveJefe();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UStaticMeshComponent* MeshNaveJefe;

	float energiaJefe;
	void RecibirDanio();

	FVector escalaJefe;

public:

	// Declaramos los diferentes estados para NaveJefe
	IIEstados* EstadoFragil;
	IIEstados* EstadoDefensivo;
	IIEstados* EstadoAtacante;

	// Declaramos un puntero a IIEstados para poder cambiar de estado
	FORCEINLINE void EstablecerEstados(IIEstados* _Estado);
	IIEstados* Estado; // estado actual para asignar los estados

	void InicializarEstadosNaveJefe();	

	void EjecutarMovimiento(float DeltaTime);
	void EjecutarDisparo();
	void EjecutarCreacionEscudoJefe();

	// Funciones para obtener los estados
	FORCEINLINE IIEstados* ObtenerEstado();
	FORCEINLINE IIEstados* ObtenerEstadoFragil();
	FORCEINLINE IIEstados* ObtenerEstadoDefensivo();
	FORCEINLINE IIEstados* ObtenerEstadoAtacante();

	//FORCEINLINE FString* ObtenerEstadoActual();

};
