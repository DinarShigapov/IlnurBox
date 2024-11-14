// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InteractInterface.h"
#include "Player/MainCharacter.h"
#include "FirstKit.generated.h"


UCLASS()
class ILNURBOX_API AFirstKit : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	

	float AddPercentageHealth;

public:	
	// Sets default values for this actor's properties
	AFirstKit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void OnInteract(AActor* Caller) override;

};
