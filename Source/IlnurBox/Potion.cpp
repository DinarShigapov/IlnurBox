// Fill out your copyright notice in the Description page of Project Settings.


#include "Potion.h"

// Sets default values
APotion::APotion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APotion::BeginPlay()
{
	Super::BeginPlay();
	
}


void APotion::OnInteract(AActor* Caller)
{
	if (Caller)
	{
		AMainCharacter* InteractCaller = Cast<AMainCharacter>(Caller);

		InteractCaller->bIsStaminaProtected = true;

		GetWorld()->GetTimerManager().SetTimer(InteractCaller->StaminaEffectTimerHandle, InteractCaller, &AMainCharacter::StopStaminaProtection, 5.0f, false);
	}
}

