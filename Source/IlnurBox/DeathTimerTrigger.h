// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "DeathTimerTrigger.generated.h"

class AMainCharacter;

/**
 * 
 */
UCLASS()
class ILNURBOX_API ADeathTimerTrigger : public ATriggerBox
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay();
	
private:
	AMainCharacter* CallerActor;

public:
	ADeathTimerTrigger();

	UFUNCTION()
	void StartEvent(class AActor* overlappedActor, class AActor* otherActor);

	UFUNCTION()
	void EndEvent(class AActor* overlappedActor, class AActor* otherActor);

	void DeathTimerTick();
	FTimerHandle DeathTimerTickHandle;
};
