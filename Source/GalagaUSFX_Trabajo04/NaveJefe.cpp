// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJefe.h"
#include "IEstados.h"
#include "EstadoFragil.h"
#include "EstadoDefensivo.h"
#include "EstadoAtacante.h"

ANaveJefe::ANaveJefe()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveJefe.NaveJefe'"));
	MeshNaveJefe = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MeshNaveJefe->SetStaticMesh(ShipMesh.Object);

	escalaJefe = FVector(1.0f, 1.0f, 1.0f);
	MeshNaveJefe->SetRelativeScale3D(escalaJefe);
	GetActorRelativeScale3D();

	energiaJefe = 200;
}

void ANaveJefe::BeginPlay()
{
	Super::BeginPlay();	

	EstadoDefensivo = GetWorld()->SpawnActor<AEstadoDefensivo>(FVector::ZeroVector, FRotator::ZeroRotator);
	EstadoAtacante = GetWorld()->SpawnActor<AEstadoAtacante>(FVector::ZeroVector, FRotator::ZeroRotator);
	EstadoFragil = GetWorld()->SpawnActor<AEstadoFragil>(FVector::ZeroVector, FRotator::ZeroRotator);

	InicializarEstadosNaveJefe();
}

void ANaveJefe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	EjecutarDisparo();
	EjecutarMovimiento(DeltaTime);
}

void ANaveJefe::RecibirDanio()
{
	energiaJefe -= 25;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Vida: " + FString::SanitizeFloat(energiaJefe)));
	if (energiaJefe <= 0)
	{
		Destroy();
	}

	InicializarEstadosNaveJefe();
}

void ANaveJefe::InicializarEstadosNaveJefe()
{
	if (energiaJefe>=100)
	{
		EstadoDefensivo->SetNaveJefe(this);
		EstablecerEstados(EstadoDefensivo);
		EjecutarCreacionEscudoJefe();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Estado: Defensivo"));
	}
	else if (energiaJefe >= 50 && energiaJefe < 100)
	{
		EstadoAtacante->SetNaveJefe(this);
		EstablecerEstados(EstadoAtacante);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Estado: Atacante"));
	}
	else
	{
		EstadoFragil->SetNaveJefe(this);
		EstablecerEstados(EstadoFragil);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Estado: Fragil"));
	}
}

void ANaveJefe::EstablecerEstados(IIEstados* _Estado)
{
	Estado = _Estado;
}

void ANaveJefe::EjecutarMovimiento(float DeltaTime)
{
	Estado->EjecutarMovimiento(DeltaTime);
}

void ANaveJefe::EjecutarDisparo()
{
	Estado->EjecutarDisparo();
}

void ANaveJefe::EjecutarCreacionEscudoJefe()
{
	Estado->EjecutarCreacionEscudoJefe();
}


IIEstados* ANaveJefe::ObtenerEstado()
{
	return Estado;
}

IIEstados* ANaveJefe::ObtenerEstadoDefensivo()
{
	return EstadoDefensivo;
}

IIEstados* ANaveJefe::ObtenerEstadoAtacante()
{
	return EstadoAtacante;
}

IIEstados* ANaveJefe::ObtenerEstadoFragil()
{
	return EstadoFragil;
}

//FString* ANaveJefe::ObtenerEstadoActual()
//{
//	return " HOLA ";
//}

