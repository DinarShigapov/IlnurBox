// Fill out your copyright notice in the Description page of Project Settings.


#include "NotePaper.h"
#include "UNoteWidget.h"
#include "Player/MainCharacter.h"

// Sets default values
ANotePaper::ANotePaper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ANotePaper::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANotePaper::OnInteract(AActor* Caller)
{

	if (Caller)
	{
		AMainCharacter* InteractCaller = Cast<AMainCharacter>(Caller);

        UUNoteWidget* NoteWidget = CreateWidget<UUNoteWidget>(GetWorld(), NoteWidgetClass);
        if (NoteWidget)
        {
            InteractCaller->CloseWidget = NoteWidget;

            NoteWidget->AddToViewport();

			InteractCaller->GetController()->SetIgnoreLookInput(true);
			InteractCaller->GetController()->SetIgnoreMoveInput(true);

			InteractCaller->bIsBlockedJump = true;
			InteractCaller->bIsBlockedRun = true;
        }
	}
}

