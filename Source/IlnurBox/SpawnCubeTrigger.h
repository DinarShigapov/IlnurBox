// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "SpawnCubeTrigger.generated.h"

class AMainCharacter;

/**
 * 
 */
UCLASS()
class ILNURBOX_API ASpawnCubeTrigger : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawn", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> SpawnActor;

private:

	int QuantityVisit;

public:
	ASpawnCubeTrigger();

	UFUNCTION()
	void StartEvent(class AActor* overlappedActor, class AActor* otherActor);

};
