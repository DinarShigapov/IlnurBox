// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstKit.h"

AFirstKit::AFirstKit()
{
	PrimaryActorTick.bCanEverTick = false;

	AddPercentageHealth = 0.25;
	Lootable = true;

}

void AFirstKit::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFirstKit::OnInteract(AActor* Caller)
{

}


