// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "TimerManager.h"
#include "GameFramework/Actor.h"

UHealthComponent::UHealthComponent()
{
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
	RegenRate = 5.0f;
	RegenInterval = 1.0f;
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();
	if (Owner)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	}

	StartRegen();
}

float UHealthComponent::GetCurrentHealth() const
{
	return CurrentHealth;
}

float UHealthComponent::GetMaxHealth() const
{
	return MaxHealth;
}

void UHealthComponent::SetCurrentHealth(float AmountHealth)
{
	CurrentHealth = FMath::Clamp(CurrentHealth + AmountHealth, 0.0f, MaxHealth);

	if (IsDead())
	{
		OnDeath.Broadcast();
	}
	else
	{
		StartRegen();
	}
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f || IsDead()) return;

	GetWorld()->GetTimerManager().ClearTimer(RegenTimerHandle);

	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, MaxHealth);

	if (IsDead())
	{
		OnDeath.Broadcast();
	}
	else
	{
		StartRegen();
	}
}


bool UHealthComponent::IsDead() const
{
	return CurrentHealth <= 0.0f;
}

void UHealthComponent::RegenerateHealth()
{
	CurrentHealth = FMath::Clamp(CurrentHealth + RegenRate, 0.0f, MaxHealth);

	if (CurrentHealth >= MaxHealth)
	{
		GetWorld()->GetTimerManager().ClearTimer(RegenTimerHandle);
	}
}

void UHealthComponent::StartRegen()
{
	if (CurrentHealth < MaxHealth)
	{
		GetWorld()->GetTimerManager().SetTimer(RegenTimerHandle, this, &UHealthComponent::RegenerateHealth, RegenInterval, true);
	}
}