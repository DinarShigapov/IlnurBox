// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitch.h"
#include "LightBulb.h"

// Sets default values
ALightSwitch::ALightSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ALightSwitch::BeginPlay()
{
	Super::BeginPlay();
	
}



void ALightSwitch::OnInteract(AActor* Caller)
{
    if (LightBulb)
    {
        LightBulb->ToggleLight();
    }
}