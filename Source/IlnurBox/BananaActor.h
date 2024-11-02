// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "BananaActor.generated.h"

class AMainCharacter;

UCLASS()
class ILNURBOX_API ABananaActor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABananaActor();

protected:
	// Called when the game starts or when spawnedABananaActor
	virtual void BeginPlay() override;

public:
	virtual void OnInteract(AActor* Caller) override;


};
