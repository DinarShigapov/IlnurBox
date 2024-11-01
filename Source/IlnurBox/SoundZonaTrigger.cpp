// Fill out your copyright notice in the Description page of Project Settings.


#include "SoundZonaTrigger.h"

ASoundZonaTrigger::ASoundZonaTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &ASoundZonaTrigger::StartEvent);
}

void ASoundZonaTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void ASoundZonaTrigger::StartEvent(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		if (SoundTrigger != nullptr)
		{
			FVector LocSound = GetActorLocation() + FVector(FMath::RandRange(-100, 100), FMath::RandRange(-100, 100), 0);

			UGameplayStatics::PlaySoundAtLocation(this, SoundTrigger, LocSound);
		}
	}
}