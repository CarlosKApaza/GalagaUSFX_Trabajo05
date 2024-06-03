// Fill out your copyright notice in the Description page of Project Settings.


#include "Radar.h"

ARadar::ARadar()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARadar::BeginPlay()
{
	Super::BeginPlay();
}

void ARadar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARadar::EnergiaNave()
{
	NotifySubscribers();
}

void ARadar::SetEnergiaPromedio(float _EnergiaPromedio)
{
	EnergiaPromedio = _EnergiaPromedio;
	EnergiaNave();

}

float ARadar::GetEnergiaPromedio()
{
	return EnergiaPromedio;
}

