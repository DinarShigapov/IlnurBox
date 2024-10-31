// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "MainCharacter.h"
#include "Door.generated.h"

UCLASS()
class ILNURBOX_API ADoor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

	

	virtual void OnInteract(AActor* Caller) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	bool bIsOpen;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ID", meta = (AllowPrivateAccess = "true"))
	FString IdRequiredKey;

};
