// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "Hammer.generated.h"

class AMainCharacter;

UCLASS()
class ILNURBOX_API AHammer : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHammer();

	virtual void OnInteract(AActor* Caller) override;

	void UseItem(AMainCharacter* Caller);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	


};
