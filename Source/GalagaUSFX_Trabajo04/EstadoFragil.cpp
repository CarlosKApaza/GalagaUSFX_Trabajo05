// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoFragil.h"
#include "NaveJefe.h"

// Sets default values
AEstadoFragil::AEstadoFragil()
{
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 1.0f;
}

void AEstadoFragil::BeginPlay()
{
	Super::BeginPlay();	
}

void AEstadoFragil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoFragil::SetNaveJefe(ANaveJefe* _NaveJefe)
{
	NaveJefe = Cast<ANaveJefe>(_NaveJefe);
	NaveJefe->EstablecerEstados(NaveJefe->ObtenerEstadoFragil());
}

void AEstadoFragil::EjecutarMovimiento(float DeltaTime)
{
	float Amplitud = 2.0f;
	float Frecuencia = 1.0f;
	float Tiempo = GetWorld()->GetTimeSeconds();

	FVector Coordenada = NaveJefe->GetActorLocation();

	float MovimientoZigZag = FMath::Sin(Tiempo * Frecuencia ) * Amplitud;

	FVector NuevaPosicion = FVector(Coordenada.X - velocidad + MovimientoZigZag * DeltaTime, Coordenada.Y + MovimientoZigZag, Coordenada.Z);
	NaveJefe->SetActorLocation(NuevaPosicion);
}

//FString AEstadoFragil::ObtenerEstado()
//{
//	return FString();
//}

