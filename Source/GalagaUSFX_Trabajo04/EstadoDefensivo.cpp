// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDefensivo.h"
#include "NaveJefe.h"
#include "BajaJefe.h"
#include "EscudoJefe.h"
#include "Kismet/GameplayStatics.h"
#include "GalagaUSFX_Trabajo04Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"


AEstadoDefensivo::AEstadoDefensivo()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxProjectile = 8;
	NumberFired = 0;

	bCanFire = true; // Permite disparar
	TiempodeDisparo = 4.0f; // Tiempo de disparo
}

void AEstadoDefensivo::BeginPlay()
{
	Super::BeginPlay();	
}

void AEstadoDefensivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoDefensivo::ResetFire()
{
	bCanFire = true;
}

void AEstadoDefensivo::SetNaveJefe(ANaveJefe* _NaveJefe)
{
	NaveJefe = Cast<ANaveJefe>(_NaveJefe);
	NaveJefe->EstablecerEstados(NaveJefe->ObtenerEstadoDefensivo());
}

void AEstadoDefensivo::EjecutarDisparo()
{
	if (bCanFire && NumberFired < MaxProjectile)
	{
		bCanFire = false; // Prevenir nuevos disparos hasta que se complete el temporizador

		// Obtener la posición del jugador
		APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (Jugador)
		{
			ultimaPosicionJugador = Jugador->GetActorLocation(); // Obtener la posición del jugador
		}

		// Crear un proyectil
		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			FVector Location = NaveJefe->GetActorLocation(); // Posición de la nave jefe
			FRotator Rotation = NaveJefe->GetActorRotation(); // Rotación de la nave jefe
			ABajaJefe* Bala = World->SpawnActor<ABajaJefe>(Location, Rotation);
			if (Bala)
			{
				Bala->SetUltimaPosicionJugador(ultimaPosicionJugador); // Establecer la última posición del jugador
			}
			NumberFired++; // Incrementar el número de disparos

			// Establecer un temporizador para permitir un nuevo disparo
			FTimerHandle BalaHandle;
			GetWorldTimerManager().SetTimer(BalaHandle, this, &AEstadoDefensivo::ResetFire, TiempodeDisparo, false); // Temporizador de disparo
		}
	}
}

void AEstadoDefensivo::EjecutarCreacionEscudoJefe()
{
	// Crear un escudo alrededor de la nave nodriza
	UWorld* const World = GetWorld();
	if (World != NULL)
	{
		// Se crean 2 escudos derecha e izquierda
		FVector Location = NaveJefe->GetActorLocation();
		Location = Location + FVector(200.0f, 0.0f, 0.0f);
		FRotator Rotation = GetActorRotation();
		for (int i = 0; i < 2; i++)
		{
			// Crear un escudo
			AEscudoJefe* Escudo = World->SpawnActor<AEscudoJefe>(Location, Rotation);
			Location = Location + FVector(-400.0f, 0.0f, 0.0f);
		}
		// Se crean 2 escudos arriba y abajo
		Location = Location + FVector(600.0f, -300.0f, 0.0f);
		Rotation = FRotator(0.0f, 90.0f, 0.0f);
		for (int i = 0; i < 2; i++)
		{
			// Crear un escudo
			AEscudoJefe* Escudo = World->SpawnActor<AEscudoJefe>(Location, Rotation);
			Location = Location + FVector(0.0f, 600.0f, 0.0f);
		}
	}
}

//FString AEstadoDefensivo::ObtenerEstado()
//{
//	return FString();
//}
//
