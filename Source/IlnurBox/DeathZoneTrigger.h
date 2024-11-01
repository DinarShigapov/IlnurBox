// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Engine/TimerHandle.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "DeathZoneTrigger.generated.h"


class AMainCharacter;
/**
 * 
 */
UCLASS()
class ILNURBOX_API ADeathZoneTrigger : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay();

private:
	AMainCharacter* CallerActor;

public:
	ADeathZoneTrigger();

	UFUNCTION()
	void Event(class AActor* overlappedActor, class AActor* otherActor);
	
	void StartEventTimer();
	FTimerHandle EventTimerHandle;
	
	UFUNCTION()
	void EndEventTimer(AActor* overlappedActor, AActor* otherActor);
};
