// Fill out your copyright notice in the Description page of Project Settings.


#include "Hammer.h"
#include "MainCharacter.h"

// Sets default values
AHammer::AHammer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AHammer::BeginPlay()
{
	Super::BeginPlay();
}


void AHammer::OnInteract(AActor* Caller)
{
    if (Caller)
    {
        AMainCharacter* InteractCaller = Cast<AMainCharacter>(Caller);

        InteractCaller->ObjectInHand = this;

		FVector SpawnLocation = InteractCaller->GetActorLocation() + FRotator(0,0,0).Vector() * 100.0f;

		InteractCaller->ObjectInHand->SetActorLocation(SpawnLocation);


		InteractCaller->ObjectInHand->AttachToComponent(InteractCaller->Camera, FAttachmentTransformRules::KeepWorldTransform);

		InteractCaller->ObjectInHand->SetActorRelativeLocation(FVector(50.f, 30.f, 0.f));
		InteractCaller->ObjectInHand->SetActorRelativeRotation(FRotator(0.f, 90.f, 0.f));

		InteractCaller->ObjectInHand->SetActorEnableCollision(false);
		InteractCaller->ObjectInHand->SetActorTickEnabled(false);

    }
}

void AHammer::UseItem(AMainCharacter* Caller)
{
    if (Caller)
    {
		FVector Loc;
		FRotator Rot;
		FVector Start;
		FVector End;
		FHitResult HitResult;


		FCollisionQueryParams COQP;
		COQP.AddIgnoredActor(this);
		COQP.bReturnPhysicalMaterial = true;

		Caller->GetController()->GetPlayerViewPoint(Loc, Rot);


		Start = Loc;
		End = Start + (Rot.Vector() * 200.0f);;


		FCollisionResponseParams CollRes;
		bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, COQP, CollRes);

		if (bHit)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Break"));
			HitResult.GetActor()->Destroy();
		}
    }
}

