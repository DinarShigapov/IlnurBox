// Fill out your copyright notice in the Description page of Project Settings.


#include "HalfHealthTrigger.h"
#include "BlockedActorTrigger.h"
#include "MainCharacter.h"

AHalfHealthTrigger::AHalfHealthTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &AHalfHealthTrigger::StartEvent);
}

void AHalfHealthTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void AHalfHealthTrigger::StartEvent(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		if (TriggerConnect)
		{
			if (TriggerConnect->bIsVisit)
			{
				AMainCharacter* Caller = Cast<AMainCharacter>(otherActor);
				Caller->CurrentHealth -= Caller->MaxHealth * 0.5;
				Caller->RegenerationHealth();

				TriggerConnect->bIsVisit = false;
				
			}
		}
	}
}
