// Fill out your copyright notice in the Description page of Project Settings.


#include "Potion.h"

// Sets default values
APotion::APotion()
{
	PrimaryActorTick.bCanEverTick = false;
	Lootable = true;
}

void APotion::BeginPlay()
{
	Super::BeginPlay();
	
}

void APotion::OnInteract(AActor* Caller)
{

}
