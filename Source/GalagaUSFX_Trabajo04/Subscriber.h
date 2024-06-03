// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Subscriber.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USubscriber : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGAUSFX_TRABAJO04_API ISubscriber
{
	GENERATED_BODY()

public:
	// Metodo Update para actualizar el estado del suscriptor
	virtual void Actualizar(class APublisher* _Publisher) = 0;

	/*virtual void Escapar() = 0;*/
};
