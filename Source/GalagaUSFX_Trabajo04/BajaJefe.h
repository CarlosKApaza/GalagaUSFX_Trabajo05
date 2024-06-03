// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BajaJefe.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API ABajaJefe : public AActor
{
	GENERATED_BODY()
	
public:	
	ABajaJefe();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	class AGalagaUSFX_Trabajo04Pawn* Jugador;

	UStaticMeshComponent* BalaMesh;

	// Para detectar colisiones
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USphereComponent* CollisionComponent;


	float velocidad;
	FVector ultimaPosicionJugador;
	FVector direccion;

	bool bInitialized;

	virtual void Mover(float DeltaTime);
	void SetUltimaPosicionJugador(FVector _ultimaPosicionJugador);
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
