// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCazador.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_TRABAJO04_API ANaveEnemigaCazador : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveEnemigaCazador();
virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	
public:
	uint32 bCanFire : 1;

	FVector GunOffset;

	float FireRate;

	FTimerHandle TimerHandle_ShotTimerExpired;

	void ShotTimerExpired();
public:
	void Move(float DeltaTime) override;
	void Shoot(FVector FireDirection) override;
	void RecibirDanio() override;
	void Curarse() override;
};
