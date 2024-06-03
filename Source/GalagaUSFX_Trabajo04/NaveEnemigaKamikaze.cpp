// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaKamikaze.h"
#include "GalagaUSFX_Trabajo04Projectile.h"

ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveKamikaze.NaveKamikaze'"));
	meshNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	meshNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	meshNaveEnemiga->SetRelativeScale3D((escalaNaves));

	velocidad = 1.0f;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 1.5f;


	Energia = 100;
}

void ANaveEnemigaKamikaze::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move(DeltaTime);
	Shoot(FVector(-1.0f, 0.0f, 0.0f));
	if (Retorno == true)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), PosicionInicial, DeltaTime, 0.5));
		TiempoTranscurrido += DeltaTime;
		if (TiempoTranscurrido >= 5)
		{
			Retorno = false;
			TiempoTranscurrido = 0;
		}
	}
}

void ANaveEnemigaKamikaze::Move(float DeltaTime)
{
	float Amplitud = 2.0f;
	float Frecuencia = 1.0f;
	float Tiempo = GetWorld()->GetTimeSeconds();  // Obtener el tiempo actual del juego

	// Obtener la ubicación actual del actor
	FVector Coordenada = GetActorLocation();

	// Calcular el desplazamiento en zigzag en el eje Y
	float ZigZagY = FMath::Sin(Tiempo * Frecuencia) * Amplitud;

	// Calcular la nueva ubicación
	FVector NewLocation = FVector(Coordenada.X - velocidad + ZigZagY * DeltaTime, Coordenada.Y + ZigZagY, Coordenada.Z);

	// Establecer la nueva ubicación del actor
	SetActorLocation(NewLocation);
}

void ANaveEnemigaKamikaze::Shoot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AGalagaUSFX_Trabajo04Projectile>(SpawnLocation, FireRotation);
			}
			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaKamikaze::ShotTimerExpired, FireRate);
			bCanFire = false;
		}
	}
}

void ANaveEnemigaKamikaze::RecibirDanio()
{
	Energia -= 5;
	if (Energia <= 0)
	{
		Destroy();
	}
}

void ANaveEnemigaKamikaze::Curarse()
{
	Energia = 100;
}
void ANaveEnemigaKamikaze::ShotTimerExpired()
{
	bCanFire = true;
}
