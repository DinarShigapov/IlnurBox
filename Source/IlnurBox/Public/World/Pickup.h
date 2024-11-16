// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Interfaces/InteractInterface.h"
#include "Pickup.generated.h"

class UDataTable;
class UItemBase;

UCLASS()
class ILNURBOX_API APickup : public AActor, public IInteractInterface
{
	GENERATED_BODY()

public:

	APickup();

	void InitializePickup(const int32 InQuantity);

	void InitializeDrop(UItemBase* ItemToDrop, const int32 InQuantity);

	FORCEINLINE UItemBase* GetItemData() const { return ItemReference; };

	virtual void StartFocus() override;
	virtual void EndFocus() override;

protected:

	UPROPERTY(VisibleAnywhere, Category = "Pickup | Components")
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(VisibleAnywhere, Category = "Pickup | Item Reference")
	TObjectPtr<UItemBase> ItemReference;

	UPROPERTY(VisibleInstanceOnly, Category = "Pickup | Interaction Data")
	FInteractableData InstanceInteractableData;

	UPROPERTY(EditInstanceOnly, Category = "Pickup | Item Initialization")
	int32 ItemQuantity;

	UPROPERTY(EditInstanceOnly, Category = "Pickup | Item Initialization")
	FDataTableRowHandle ItemRowHandle;

	virtual void BeginPlay() override;

	virtual void Interact(AMainCharacter* PlayerCharacter) override;
	void UpdateInteractableData();

	void TakePickup(const AMainCharacter* Taker);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
