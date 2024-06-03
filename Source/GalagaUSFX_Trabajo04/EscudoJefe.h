// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EscudoJefe.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API AEscudoJefe : public AActor
{
	GENERATED_BODY()
	
public:	
	AEscudoJefe();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UStaticMeshComponent* EscudoMesh;

	int Durabilidad = 50;
	void DurabilidadEscudo();
};
