// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

class AMainCharacter;

UENUM()
enum class EInteractableType : uint8
{
	Pickup UMETA(DisplayName = "Pickup"),
	Device UMETA(DisplayName = "Device"),
	Container UMETA(DisplayName = "Container")
};


USTRUCT()
struct FInteractableData
{
	GENERATED_USTRUCT_BODY();

	FInteractableData() : 
	InteractableType(EInteractableType::Pickup),
	Name(FText::GetEmpty()),
	Action(FText::GetEmpty()),
	Quantity(0),
	InteractionDuration(0.0f){};

	UPROPERTY(EditInstanceOnly)
	EInteractableType InteractableType;

	UPROPERTY(EditInstanceOnly)
	FText Name;

	UPROPERTY(EditInstanceOnly)
	FText Action;

	UPROPERTY(EditInstanceOnly)
	int8 Quantity;

	UPROPERTY(EditInstanceOnly)
	float InteractionDuration;
};

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};


class ILNURBOX_API IInteractInterface
{
	GENERATED_BODY()
public:

	bool Lootable = false;

	virtual void Interact(AMainCharacter* Caller);
	virtual void StartFocus();
	virtual void EndFocus();
	virtual void StartInteract();
	virtual void EndInteract();

	FInteractableData InteractableData;

};
