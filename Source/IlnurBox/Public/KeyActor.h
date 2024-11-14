// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InteractInterface.h"
#include "KeyActor.generated.h"

class AMainCharacter;

UCLASS()
class ILNURBOX_API AKeyActor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyActor();

	virtual void OnInteract(AActor* Caller) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ID", meta = (AllowPrivateAccess = "true"))
	FString IdKey;

};
