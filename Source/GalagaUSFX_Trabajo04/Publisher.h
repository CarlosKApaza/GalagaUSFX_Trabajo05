// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publisher.generated.h"

UCLASS()
class GALAGAUSFX_TRABAJO04_API APublisher : public AActor
{
	GENERATED_BODY()
	
public:	
	APublisher();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Publisher")
	TArray<AActor*> Subscribers;

	class ISubscriber* Subscriber;

public:
	void AddSubscriber(AActor* _Subscriber);
	void RemoveSubscriber(AActor* _Subscriber);
	void NotifySubscribers();

};
