// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publisher.h"
#include "Radar.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_TRABAJO04_API ARadar : public APublisher
{
	GENERATED_BODY()
public:
	ARadar();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	float EnergiaPromedio;

public:
	
	void EnergiaNave();
	void SetEnergiaPromedio(float _EnergiaPromedio);
	
	FORCEINLINE float GetEnergiaPromedio();
};
