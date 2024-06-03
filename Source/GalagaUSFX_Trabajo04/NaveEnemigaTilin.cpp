// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTilin.h"
#include "GalagaUSFX_Trabajo04Projectile.h"

ANaveEnemigaTilin::ANaveEnemigaTilin()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/TwinStick/Meshes/NaveTilin.NaveTilin'"));
	meshNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	meshNaveEnemiga->SetStaticMesh(ShipMesh.Object);

	meshNaveEnemiga->SetRelativeScale3D((escalaNaves));

	velocidad = 1.0f;
	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 1.5f;

	Energia = 150;
}

void ANaveEnemigaTilin::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ANaveEnemigaTilin::Tick(float DeltaTime)
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

void ANaveEnemigaTilin::Move(float DeltaTime)
{
	FVector Coordenada = GetActorLocation();
	float posicion = velocidad * DeltaTime;
	FVector NewLocation = FVector(Coordenada.X - velocidad, Coordenada.Y, Coordenada.Z);
	SetActorLocation(NewLocation);
}

void ANaveEnemigaTilin::Shoot(FVector FireDirection)
{
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
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveEnemigaTilin::ShotTimerExpired, FireRate);

			bCanFire = false;
		}
	}
}

void ANaveEnemigaTilin::RecibirDanio()
{
	Energia -= 5;
	if (Energia <= 0)
	{
		Destroy();
	}
}

void ANaveEnemigaTilin::Curarse()
{
	Energia = 100;
}
void ANaveEnemigaTilin::ShotTimerExpired()
{
	bCanFire = true;
}