// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathZoneTrigger.h"
#include "MainCharacter.h"

ADeathZoneTrigger::ADeathZoneTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &ADeathZoneTrigger::Event);
	OnActorEndOverlap.AddDynamic(this, &ADeathZoneTrigger::EndEventTimer);
}

void ADeathZoneTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADeathZoneTrigger::Event(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		AMainCharacter* Caller = Cast<AMainCharacter>(otherActor);
		CallerActor = Caller;

		GetWorldTimerManager().SetTimer(EventTimerHandle, this, &ADeathZoneTrigger::StartEventTimer, 0.5, true, 0.0f);
	}
}

void ADeathZoneTrigger::StartEventTimer()
{
	CallerActor->CurrentHealth -= 0.01;
}

void ADeathZoneTrigger::EndEventTimer(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		GetWorldTimerManager().ClearTimer(EventTimerHandle);
		CallerActor->RegenerationHealth();
		CallerActor = nullptr;
	}
}