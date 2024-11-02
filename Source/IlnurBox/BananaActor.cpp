// Fill out your copyright notice in the Description page of Project Settings.


#include "BananaActor.h"
#include "MainCharacter.h"

// Sets default values
ABananaActor::ABananaActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABananaActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABananaActor::OnInteract(AActor* Caller)
{
	if (Caller)
	{
		AMainCharacter* InteractCaller = Cast<AMainCharacter>(Caller);

		InteractCaller->InvActorArray.Add(this);
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
		SetActorTickEnabled(false);

	}
}
