// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockedActorTrigger.h"
#include "MainCharacter.h"

ABlockedActorTrigger::ABlockedActorTrigger()
{
	bIsVisit = false;

	OnActorBeginOverlap.AddDynamic(this, &ABlockedActorTrigger::StartEvent);
	OnActorEndOverlap.AddDynamic(this, &ABlockedActorTrigger::EndEvent);
}

void ABlockedActorTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void ABlockedActorTrigger::StartEvent(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		AMainCharacter* Caller = Cast<AMainCharacter>(otherActor);
		CallerActor = Caller;

		CallerActor->bIsBlockedRun = true;
		CallerActor->bIsBlockedJump = true;

		CallerActor->StopRun();
		CallerActor->StopJumping();

		bIsVisit = true;
	}
}

void ABlockedActorTrigger::EndEvent(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		CallerActor->bIsBlockedRun = false;
		CallerActor->bIsBlockedJump = false;
	}
}