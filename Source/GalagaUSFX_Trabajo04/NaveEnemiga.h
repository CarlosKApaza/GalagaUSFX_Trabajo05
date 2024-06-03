// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

//Interface Subscriber
#include "Subscriber.h"
#include "IEscape.h"

#include "NaveEnemiga.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API ANaveEnemiga : public AActor, public ISubscriber, public IIEscape
{
	GENERATED_BODY()

public:
	ANaveEnemiga();

public:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

// Inicializacion para el patron de diseño Observer
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* meshNaveEnemiga;

	float Energia;
	int velocidad;

	bool Escape;
	bool Retorno;

	float TiempoTranscurrido;

	FVector PosicionInicial;
	FVector escalaNaves;

	class AGalagaUSFX_Trabajo04GameModeBase* GameMode;

// RADAR	
	UPROPERTY(VisibleAnywhere, Category = "Radar")
	class ARadar* Radar;

	void SetRadar(class ARadar* _Radar);	// Establecer Radar


	/* Implementacion de los metodos de la Interfaz */
	virtual void Actualizar(class APublisher* _Publisher) override; // Actualizar
	virtual void Escapar() override; // Escapar

	/* Funcion de la nave enemiga */
	void RemoveSubscriber(); // quitar suscriptor
	void Flee(float DeltaTime); // huir

// Metodos virtuales
	virtual void Move(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Move, );
	virtual void Shoot(FVector FireDirection) PURE_VIRTUAL(ANaveEnemiga::Shoot, );
	virtual void RecibirDanio() PURE_VIRTUAL(ANaveEnemiga::RecibirDanio, );
	virtual void Curarse() PURE_VIRTUAL(ANaveEnemiga::Curarse, );
};
