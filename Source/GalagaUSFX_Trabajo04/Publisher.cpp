// Fill out your copyright notice in the Description page of Project Settings.


#include "Publisher.h"
#include "Subscriber.h"

// Sets default values
APublisher::APublisher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Subscribers = TArray<AActor*>();

}

// Called when the game starts or when spawned
void APublisher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublisher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublisher::AddSubscriber(AActor* _Subscriber)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Publicador: agrego un nuevo suscriptor."));
	Subscribers.Add(_Subscriber);
}

void APublisher::RemoveSubscriber(AActor* _Subscriber)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Cyan, TEXT("Publicador: removio un suscriptor."));
	Subscribers.Remove(_Subscriber);
}

void APublisher::NotifySubscribers()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Publicador: Notificando a todos los suscriptores de escapar e ir a curarse."));

	for (AActor* sub : Subscribers)
	{
		ISubscriber* Subcriber = Cast<ISubscriber>(sub);
		if (Subcriber)
		{
			Subcriber->Actualizar(this); 
		}
	}
}

