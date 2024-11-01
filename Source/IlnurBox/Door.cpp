// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "KeyActor.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bIsOpen = false;
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

bool ADoor::IsCheckKeyForDoor(AMainCharacter* Caller)
{
	for (size_t i = 0; i < Caller->KeyActorArray.Num(); i++)
	{
		AKeyActor* key = Cast<AKeyActor>(Caller->KeyActorArray[i]);
		if (key->IdKey == IdRequiredKey)
		{
			return true;
		}
	}

	return false;
}


void ADoor::OnInteract(AActor* Caller)
{
	AMainCharacter* InteractCaller = Cast<AMainCharacter>(Caller);
	

	if (bIsOpen)
	{
		FRotator NewRotation = FRotator(0.f, 0.f, 0.f);
		SetActorRotation(NewRotation);
		bIsOpen = false;
	}
	else
	{
		if (IdRequiredKey != TEXT(""))
		{
			if (!IsCheckKeyForDoor(InteractCaller))
				return;
		}

		FRotator NewRotation = FRotator(0.f, -100.f, 0.f);
		SetActorRotation(NewRotation);
		bIsOpen = true;
	}

}