// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaKamikaze.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_TRABAJO04_API ANaveEnemigaKamikaze : public ANaveEnemiga
{
	GENERATED_BODY()
public:
	ANaveEnemigaKamikaze();

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
