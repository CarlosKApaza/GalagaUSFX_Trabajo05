// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoAtacante.h"
#include "NaveJefe.h"
#include "GalagaUSFX_Trabajo04Pawn.h"
#include "GalagaUSFX_Trabajo04Projectile.h"


AEstadoAtacante::AEstadoAtacante()
{
	PrimaryActorTick.bCanEverTick = true;

	GunOffset = FVector(90.f, 0.f, 0.f);
	TiempoDisparo = 0.5f;
	bCanFire = true;
}

void AEstadoAtacante::BeginPlay()
{
	Super::BeginPlay();	
}

void AEstadoAtacante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoAtacante::SetNaveJefe(ANaveJefe* _NaveJefe)
{
	NaveJefe = Cast<ANaveJefe>(_NaveJefe);
	NaveJefe->EstablecerEstados(NaveJefe->ObtenerEstadoAtacante());
}

void AEstadoAtacante::EjecutarMovimiento(float DeltaTime)
{
    // Definimos las variables necesarias
    static float TiempoTotal = 0.0f; // Variable estática para acumular el tiempo
    const float Radio = 300.0f; // Radio del círculo
    const float VelocidadAngular = 1.0f; // Velocidad angular (radianes por segundo)

    // Actualizamos el tiempo total acumulado
    TiempoTotal += DeltaTime * VelocidadAngular;

    // Calculamos la nueva posición en la circunferencia
    float NuevaPosX = Radio * FMath::Cos(TiempoTotal);
    float NuevaPosY = Radio * FMath::Sin(TiempoTotal);

    // Obtenemos la posición actual del objeto
    FVector PosicionActual = NaveJefe->GetActorLocation();

    // Actualizamos solo las coordenadas X e Y, manteniendo la Z actual
    FVector NuevaPosicion = FVector(NuevaPosX, NuevaPosY, PosicionActual.Z);

    // Establecemos la nueva posición del objeto
    NaveJefe->SetActorLocation(NuevaPosicion);

}

void AEstadoAtacante::EjecutarDisparo()
{
	// Obtener la dirección de disparo
	FVector FireDirection = NaveJefe->GetActorForwardVector();
	if (bCanFire == true) // Si podemos disparar
	{
		// Si la dirección de disparo es diferente de cero
		if (FireDirection.SizeSquared() > 0.0f)
		{
			// Disparamos 8 proyectiles en 8 direcciones diferentes
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				for (int i = 0; i < 8; i++)
				{
					// Rotamos la dirección de disparo
					float grado = 360.0f / 8; // 45 grados
					FireDirection = FireDirection.RotateAngleAxis(grado * i, FVector(0.0f, 0.0f, 1.0f));
					const FRotator FireRotation = FireDirection.Rotation();
					// Spawn del proyectil en la posición de la nave jefe
					const FVector SpawnLocation = NaveJefe->GetActorLocation() + FireRotation.RotateVector(GunOffset);

					World->SpawnActor<AGalagaUSFX_Trabajo04Projectile>(SpawnLocation, FireRotation);
					bCanFire = false;
					// Establecemos un temporizador para el siguiente disparo
					World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &AEstadoAtacante::ShotTimerExpired, TiempoDisparo);
				}
			}
			bCanFire = false;
		}
	}
}

void AEstadoAtacante::ShotTimerExpired()
{
	bCanFire = true; // Permitimos un nuevo disparo
}

//FString AEstadoAtacante::ObtenerEstado()
//{
//	return FString();
//}

