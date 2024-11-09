

#include "StaminaComponent.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UStaminaComponent::UStaminaComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

	MaxStamina = 100.0f;
	CurrentStamina = MaxStamina;
	StaminaRecoverRate = 5.0f;

}

void UStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

	
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
}

void UStaminaComponent::RecoverStamina()
{
    if (CurrentStamina < MaxStamina)
    {
        CurrentStamina = FMath::Clamp(CurrentStamina + StaminaRecoverRate, 0.0f, MaxStamina);
    }
}

bool UStaminaComponent::CanPerformAction(float StaminaCost) const
{
    return CurrentStamina >= StaminaCost;
}

