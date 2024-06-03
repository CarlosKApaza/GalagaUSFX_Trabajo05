// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTilin.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_TRABAJO04_API ANaveEnemigaTilin : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	ANaveEnemigaTilin();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
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
