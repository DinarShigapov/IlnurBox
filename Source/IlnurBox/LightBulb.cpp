// Fill out your copyright notice in the Description page of Project Settings.


#include "LightBulb.h"

// Sets default values
ALightBulb::ALightBulb()
{
	PrimaryActorTick.bCanEverTick = false;


}

void ALightBulb::ToggleLight()
{
	bIsLightOn = !bIsLightOn;
	PointLight->SetVisibility(bIsLightOn);
}

void ALightBulb::BeginPlay()
{
	Super::BeginPlay();

    PointLight = FindComponentByClass<UPointLightComponent>();

    if (PointLight)
    {
        PointLight->SetVisibility(false);
        bIsLightOn = false;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Point Light not found in BP_LightBulb!"));
    }
	
}

