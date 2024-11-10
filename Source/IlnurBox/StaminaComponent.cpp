// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaComponent.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UStaminaComponent::UStaminaComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

	MaxStamina = 100.0f;
	CurrentStamina = MaxStamina;
	StaminaRecoverRate = 0.1f;
    AmountInIteration = 1.5f;
    InFirstDelayRecover = 3.0f;

}

// Called when the game starts
void UStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

    AActor* Owner = GetOwner();

    StartRecover();
}


float UStaminaComponent::GetCurrentStamina() const
{
    return CurrentStamina;
}

float UStaminaComponent::GetMaxStamina() const
{
    return MaxStamina;
}

void UStaminaComponent::ConsumeStamina(float Amount)
{
    if (GetWorld()->GetTimerManager().IsTimerActive(StaminaRecoverTimer))
    {
        GetWorld()->GetTimerManager().ClearTimer(StaminaRecoverTimer);
    }

    CurrentStamina = FMath::Clamp(CurrentStamina - Amount, 0.0f, MaxStamina);

    StartRecover();
}

void UStaminaComponent::StartRecover()
{
    if (CurrentStamina < MaxStamina)
    {
        GetWorld()->GetTimerManager().SetTimer(StaminaRecoverTimer, this, &UStaminaComponent::RecoverStamina, StaminaRecoverRate, true, InFirstDelayRecover);
    }
}

void UStaminaComponent::RecoverStamina()
{
     CurrentStamina = FMath::Clamp(CurrentStamina + AmountInIteration, 0.0f, MaxStamina);

    if (CurrentStamina >= MaxStamina)
    {
        GetWorld()->GetTimerManager().ClearTimer(StaminaRecoverTimer);
    }
}

bool UStaminaComponent::CanPerformAction(float StaminaCost) const
{
    return CurrentStamina >= StaminaCost;
}

