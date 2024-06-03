// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GalagaUSFX_Trabajo04GameMode.generated.h"

UCLASS(MinimalAPI)
class AGalagaUSFX_Trabajo04GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalagaUSFX_Trabajo04GameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
//-------------------OBSERVER--------------------------//
	TArray<class ANaveEnemiga*> NavesEnemigas;
	class ARadar* Radar;

	class ANaveEnemigaCazador* NaveCazador;
	class ANaveEnemigaKamikaze* NaveKamikaze;
	class ANaveEnemigaTilin* NaveTilin;

	FVector ubicacionInicialNaveCazador;
	FVector ubicacionInicialNaveKamikaze;
	FVector ubicacionInicialNaveTilin;

	float EnergiaPromedio;

//-------------------STATE--------------------------//
public:
	FVector ubicacionInicialNaveJefe;
	class ANaveJefe* NaveJefe;
};



