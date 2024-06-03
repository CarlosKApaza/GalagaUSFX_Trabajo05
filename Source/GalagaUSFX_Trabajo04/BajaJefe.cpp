// Fill out your copyright notice in the Description page of Project Settings.


#include "BajaJefe.h"
#include "GalagaUSFX_Trabajo04Projectile.h"
#include "Components/StaticMeshComponent.h"

#include "Components/SphereComponent.h"

#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

//#include "NaveJefe.h"
#include "GalagaUSFX_Trabajo04Pawn.h"


// Sets default values
ABajaJefe::ABajaJefe()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BombMeshAsset(TEXT("StaticMesh'/Game/TwinStick/Meshes/BalaJefe.BalaJefe'"));
	BalaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BombMesh"));
	BalaMesh->SetStaticMesh(BombMeshAsset.Object);
	//BombMesh->SetupAttachment(RootComponent);
	RootComponent = BalaMesh;

	// Create a sphere component for collision detection
	//CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	//CollisionComponent->InitSphereRadius(15.0f);
	//CollisionComponent->SetCollisionProfileName(TEXT("Projectile"));
	//CollisionComponent->SetupAttachment(RootComponent);
	//CollisionComponent->OnComponentHit.AddDynamic(this, &ABajaJefe::OnHit);


	// Tamaño de la Bala
	BalaMesh->SetRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
	bInitialized = false;
	velocidad = 600.0f;
}

void ABajaJefe::BeginPlay()
{
	Super::BeginPlay();
}

void ABajaJefe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ABajaJefe::Mover(float DeltaTime)
{
	if (!bInitialized)
	{
		FVector StartLocation = GetActorLocation();
		FVector EndLocation = ultimaPosicionJugador;

		// Ajustar la altura en Z para mantenerla constante
		StartLocation.Z = 250.0f;
		EndLocation.Z = 250.0f;

		// Calcular la dirección normalizada desde el cañón hasta el jugador
		direccion = (EndLocation - StartLocation).GetSafeNormal();
		bInitialized = true;
	}

	// Mover el proyectil en línea recta hacia el jugador manteniendo constante la altura en Z
	FVector NewLocation = GetActorLocation() + direccion * velocidad * DeltaTime;
	NewLocation.Z = 250.0f; // mantener constante la altura en Z

	SetActorLocation(NewLocation);
}

void ABajaJefe::SetUltimaPosicionJugador(FVector _ultimaPosicionJugador)
{
	ultimaPosicionJugador = _ultimaPosicionJugador;
}

void ABajaJefe::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	Jugador = Cast<AGalagaUSFX_Trabajo04Pawn>(OtherActor);
	if (Jugador)
	{
		Jugador->RecibirDanioPawn();
	}
}

//void ABajaJefe::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
//{
//	// Only add impulse and destroy projectile if we hit a physics
//	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
//	{
//		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
//	}
//
//		// Usar la variable miembro Jugador directamente
//	Jugador = Cast<AGalagaUSFX_Trabajo04Pawn>(OtherActor);
//	if (Jugador)
//	{
//		Jugador->RecibirDanioPawn();
//		Destroy();
//	}
//}