// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstKit.h"

AFirstKit::AFirstKit()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AFirstKit::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFirstKit::OnInteract(AActor* Caller)
{
	if (Caller)
	{
		AMainCharacter* InteractCaller = Cast<AMainCharacter>(Caller);

		if (InteractCaller->bIsAlive)
		{
			InteractCaller->CurrentHealth += InteractCaller->MaxHealth * 0.25;
		}
	}
}


