// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Radar.h"

#include "GalagaUSFX_Trabajo04GameMode.h"


// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	Escape = false;
	Retorno = false;

	escalaNaves = FVector(1.3f, 1.3f, 1.3f);
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Flee(DeltaTime);
}

void ANaveEnemiga::SetRadar(ARadar* _Radar)
{
	Radar = _Radar;
	Radar->AddSubscriber(this); // Se agrega a la lista de suscriptores del radar

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Las naves se han conectado al radar para la vigilancia"));
	
}
void ANaveEnemiga::Actualizar(APublisher* _Publisher)
{
	Escapar();
}

void ANaveEnemiga::Escapar()
{
	float EnergiaRecivida = Radar->GetEnergiaPromedio();
	if (EnergiaRecivida <= 10)
	{
		Escape = true;
		GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Cyan, TEXT("Las naves han escapado debido a la baja energia promedio detectada por el radar"));
	}
}

void ANaveEnemiga::Flee(float DeltaTime)
{
	if (Escape == true)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), FVector(1300.0f, 1670.0f, 215.0f), DeltaTime, 0.8f));
		Curarse();
	}
	if (GetActorLocation().Equals(FVector(1300.0f, 1670.0f, 215.0f), 200))
	{
		Escape = false;
		Retorno = true;
		GEngine->AddOnScreenDebugMessage(-1, 7.f, FColor::Magenta, TEXT("Las naves retornaron a la posicon incial ya con energia recuperada"));
	}
}

void ANaveEnemiga::RemoveSubscriber()
{
	if (Radar)
	{
		Radar->RemoveSubscriber(this);
	}
}