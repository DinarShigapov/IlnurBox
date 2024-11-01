// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundBase.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Components/StaticMeshComponent.h"
#include "SoundZonaTrigger.generated.h"

/**
 * 
 */
UCLASS()
class ILNURBOX_API ASoundZonaTrigger : public ATriggerBox
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound", meta = (AllowPrivateAccess = "true"))
	USoundBase* SoundTrigger;

protected:
	virtual void BeginPlay();


public:
	ASoundZonaTrigger();

	UFUNCTION()
	void StartEvent(class AActor* overlappedActor, class AActor* otherActor);

};
