// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathTimerTrigger.h"
#include "MainCharacter.h"

ADeathTimerTrigger::ADeathTimerTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &ADeathTimerTrigger::StartEvent);
	OnActorEndOverlap.AddDynamic(this, &ADeathTimerTrigger::EndEvent);
}

void ADeathTimerTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void ADeathTimerTrigger::StartEvent(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		AMainCharacter* Caller = Cast<AMainCharacter>(otherActor);
		CallerActor = Caller;

		GetWorldTimerManager().SetTimer(DeathTimerTickHandle, this, &ADeathTimerTrigger::DeathTimerTick, 1.0f, false, 5.0f);
	}
}

void ADeathTimerTrigger::EndEvent(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		GetWorldTimerManager().ClearTimer(DeathTimerTickHandle);
	}
}

void ADeathTimerTrigger::DeathTimerTick()
{
	if (CallerActor)
	{
		CallerActor->CurrentHealth = 0;
		CallerActor->bIsAlive = false;
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("You're dead."));
	}
}
