// Copyright Epic Games, Inc. All Rights Reserve

#include "GalagaUSFX_Trabajo04Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

#include "NaveJefe.h"
#include "EscudoJefe.h"


AGalagaUSFX_Trabajo04Projectile::AGalagaUSFX_Trabajo04Projectile() 
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("/Game/TwinStick/Meshes/TwinStickProjectile.TwinStickProjectile"));

	// Create mesh component for the projectile sphere
	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProjectileMesh->SetStaticMesh(ProjectileMeshAsset.Object);
	ProjectileMesh->SetupAttachment(RootComponent);
	ProjectileMesh->BodyInstance.SetCollisionProfileName("Projectile");
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AGalagaUSFX_Trabajo04Projectile::OnHit);		// set up a notification for when this component hits something
	RootComponent = ProjectileMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
	ProjectileMovement->UpdatedComponent = ProjectileMesh;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f; // No gravity

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AGalagaUSFX_Trabajo04Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}

	// El Escudo del jefe recibe daño
	AEscudoJefe* Escudo = Cast<AEscudoJefe>(OtherActor);
	if (Escudo != nullptr)
	{
		Escudo->DurabilidadEscudo();
	}

	ANaveJefe* NaveJefe = Cast<ANaveJefe>(OtherActor);
	if (NaveJefe != nullptr)
	{
		NaveJefe->RecibirDanio();
	}

	// Naves del observer
	ANaveEnemigaCazador* NaveCazador = Cast<ANaveEnemigaCazador>(OtherActor);
	if (NaveCazador != nullptr)
	{
		NaveCazador->RecibirDanio();
	}
	ANaveEnemigaKamikaze* NaveKamikaze = Cast<ANaveEnemigaKamikaze>(OtherActor);
	if (NaveKamikaze != nullptr)
	{
		NaveKamikaze->RecibirDanio();
	}
	ANaveEnemigaTilin* NaveTilin = Cast<ANaveEnemigaTilin>(OtherActor);
	if (NaveTilin != nullptr)
	{
		NaveTilin->RecibirDanio();
	}

	/*AGalagaUSFX_Trabajo04Pawn* Jugador = Cast<AGalagaUSFX_Trabajo04Pawn>(OtherActor);
	if (Jugador != nullptr)
	{
		Jugador->RecibirDanioPawn();
	}*/

	Destroy();
}