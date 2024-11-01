// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "HalfHealthTrigger.generated.h"

class AMainCharacter;
class ABlockedActorTrigger;

/**
 * 
 */
UCLASS()
class ILNURBOX_API AHalfHealthTrigger : public ATriggerBox
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay();


public:
	AHalfHealthTrigger();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Trigger", meta = (AllowPrivateAccess = "true"))
	ABlockedActorTrigger* TriggerConnect;

	UFUNCTION()
	void StartEvent(class AActor* overlappedActor, class AActor* otherActor);


};
