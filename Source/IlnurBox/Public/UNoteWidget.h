// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UNoteWidget.generated.h"


/**
 * 
 */
UCLASS()
class ILNURBOX_API UUNoteWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

protected:
    virtual void NativeConstruct() override;
};

