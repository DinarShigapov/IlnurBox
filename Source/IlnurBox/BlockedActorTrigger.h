// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "BlockedActorTrigger.generated.h"

class AMainCharacter;

/**
 * 
 */
UCLASS()
class ILNURBOX_API ABlockedActorTrigger : public ATriggerBox
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay();

private:
	AMainCharacter* CallerActor;

public:
	ABlockedActorTrigger();

	bool bIsVisit;

	UFUNCTION()
	void StartEvent(class AActor* overlappedActor, class AActor* otherActor);

	UFUNCTION()
	void EndEvent(AActor* overlappedActor, AActor* otherActor);
	
};
