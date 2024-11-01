// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnCubeTrigger.h"
#include "MainCharacter.h"

ASpawnCubeTrigger::ASpawnCubeTrigger()
{
	QuantityVisit = 0;

	OnActorBeginOverlap.AddDynamic(this, &ASpawnCubeTrigger::StartEvent);
}

void ASpawnCubeTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void ASpawnCubeTrigger::StartEvent(AActor* overlappedActor, AActor* otherActor)
{
	if (otherActor && (otherActor != this))
	{
		if (QuantityVisit == 3)
		{
			AMainCharacter* Caller = Cast<AMainCharacter>(otherActor);

			FActorSpawnParameters SpawnParams;
			GetWorld()->SpawnActor<AActor>(SpawnActor, Caller->GetActorLocation() + FVector(0, 0, 300), FRotator(0, 0, 0), SpawnParams);

			QuantityVisit = 0;
		}
		else
		{
			QuantityVisit++;
		}
	}
}
