// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InteractInterface.h"
#include "LightSwitch.generated.h"


class ALightBulb;

UCLASS()
class ILNURBOX_API ALightSwitch : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	ALightSwitch();


	virtual void OnInteract(AActor* Caller) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Light", meta = (AllowPrivateAccess = "true"))
	ALightBulb* LightBulb;


};
