// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InteractInterface.h"
#include "Components/InputComponent.h"
#include "NotePaper.generated.h"

class UUNoteWidget;
class AMainCharacter;

UCLASS()
class ILNURBOX_API ANotePaper : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANotePaper();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	virtual void OnInteract(AActor* Caller) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> NoteWidgetClass;

};
