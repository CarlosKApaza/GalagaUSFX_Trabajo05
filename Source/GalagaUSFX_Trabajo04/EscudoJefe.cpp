// Fill out your copyright notice in the Description page of Project Settings.


#include "EscudoJefe.h"

AEscudoJefe::AEscudoJefe()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	// Create the mesh component	
	EscudoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Escudo"));
	EscudoMesh->SetStaticMesh(ShipMesh.Object);
	EscudoMesh->SetupAttachment(RootComponent);
	GetActorRelativeScale3D();
	SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
	RootComponent = EscudoMesh;
}

void AEscudoJefe::BeginPlay()
{
	Super::BeginPlay();	
}

void AEscudoJefe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEscudoJefe::DurabilidadEscudo()
{
	Durabilidad -= 10;
	if (Durabilidad <= 0)
	{
		Destroy();
	}
}

