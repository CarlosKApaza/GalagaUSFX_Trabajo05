// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaUSFX_Trabajo04GameMode.h"
#include "GalagaUSFX_Trabajo04Pawn.h"

#include "Radar.h"

#include "NaveEnemigaCazador.h"
#include "NaveEnemigaKamikaze.h"
#include "NaveEnemigaTilin.h"

#include "NaveJefe.h"

AGalagaUSFX_Trabajo04GameMode::AGalagaUSFX_Trabajo04GameMode()
{
	DefaultPawnClass = AGalagaUSFX_Trabajo04Pawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
	EnergiaPromedio = 0;
}

void AGalagaUSFX_Trabajo04GameMode::BeginPlay()
{
	Super::BeginPlay();

	Radar = GetWorld()->SpawnActor<ARadar>(ARadar::StaticClass());

	ubicacionInicialNaveCazador = FVector(-380.0f, -300.0f, 200.0f);
	ubicacionInicialNaveKamikaze = FVector(-120.0f, -450.0f, 200.0f);
	ubicacionInicialNaveTilin = FVector(130.0f, -150.0f, 200.0f);

	FRotator rotacionNaves = FRotator(0.0f, 180, 0.0f);

	// Genera 2 naves kamikazes
	for (int i = 0; i < 2; i++)
	{
		FVector PosicionInicial = FVector(ubicacionInicialNaveKamikaze.X, ubicacionInicialNaveKamikaze.Y + i * 900, ubicacionInicialNaveKamikaze.Z);
		NaveKamikaze = GetWorld()->SpawnActor<ANaveEnemigaKamikaze>(PosicionInicial, rotacionNaves);
		NaveKamikaze->SetRadar(Radar);
		NavesEnemigas.Add(NaveKamikaze);
	}
	// Genera 2 naves cazadoras
	for (int i = 0; i < 5; i++)
	{
		FVector PosicionInicial = FVector(ubicacionInicialNaveCazador.X, ubicacionInicialNaveCazador.Y + i * 200, ubicacionInicialNaveCazador.Z);
		NaveCazador = GetWorld()->SpawnActor<ANaveEnemigaCazador>(PosicionInicial, rotacionNaves);
		NaveCazador->SetRadar(Radar);
		NavesEnemigas.Add(NaveCazador);
	}
	// Genera 2 naves tilines
	for (int i = 0; i < 2; i++)
	{
		FVector PosicionInicial = FVector(ubicacionInicialNaveTilin.X, ubicacionInicialNaveTilin.Y + i * 520, ubicacionInicialNaveTilin.Z);
		NaveTilin = GetWorld()->SpawnActor<ANaveEnemigaTilin>(PosicionInicial, rotacionNaves);
		NaveTilin->SetRadar(Radar);
		NavesEnemigas.Add(NaveTilin);
	}

	//-------------------------------------STATE-------------------------------------//
	ubicacionInicialNaveJefe = FVector(900.0f, -500.0f, 200.0f);
	NaveJefe = GetWorld()->SpawnActor<ANaveJefe>(ubicacionInicialNaveJefe, rotacionNaves);
	NaveJefe->InicializarEstadosNaveJefe();

}


void AGalagaUSFX_Trabajo04GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (int i = 0; i < NavesEnemigas.Num(); i++)
	{
		EnergiaPromedio = (NavesEnemigas[i]->Energia + EnergiaPromedio / NavesEnemigas.Num());
		if (EnergiaPromedio < 20)
		{
			Radar->SetEnergiaPromedio(10);
		}
		if (i == NavesEnemigas.Num())
		{
			EnergiaPromedio = 0;
		}
	}	
}




