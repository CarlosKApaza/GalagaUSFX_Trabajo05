// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstados.h"
#include "EstadoAtacante.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API AEstadoAtacante : public AActor, public IIEstados
{
	GENERATED_BODY()
	
public:	
	AEstadoAtacante();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	FVector GunOffset;

	uint32 bCanFire : 1;

	FTimerHandle TimerHandle_ShotTimerExpired;
	void ShotTimerExpired();

	float TiempoDisparo;


public:
	class ANaveJefe* NaveJefe;

	void SetNaveJefe(class ANaveJefe* _NaveJefe) override;

	void EjecutarMovimiento(float DeltaTime) override;
	void EjecutarDisparo() override;


	//FString ObtenerEstado() override;

private:
	void EjecutarCreacionEscudoJefe() override {};
};
