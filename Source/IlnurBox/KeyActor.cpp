// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyActor.h"
#include "MainCharacter.h"

// Sets default values
AKeyActor::AKeyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AKeyActor::BeginPlay()
{
	Super::BeginPlay();
	
}



void AKeyActor::OnInteract(AActor* Caller)
{
    if (Caller)
    {
        AMainCharacter* InteractCaller = Cast<AMainCharacter>(Caller);

        InteractCaller->KeyActorArray.Add(this);

        SetActorHiddenInGame(true);
        SetActorEnableCollision(false); 
        SetActorTickEnabled(false);
    }
}
