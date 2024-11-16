// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MainCharacter.h"
#include "Components/HealthComponent.h"
#include "Components/StaminaComponent.h"
#include "MainHUD.h"
#include "UNoteWidget.h"


// Sets default values
AMainCharacter::AMainCharacter()
{
 
	PrimaryActorTick.bCanEverTick = false;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	StaminaComponent = CreateDefaultSubobject<UStaminaComponent>(TEXT("StaminaComponent"));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	Camera->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	Camera->bUsePawnControlRotation = true;


	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	RunSpeed = 500;
	WalkSpeed = 300;
	JumpHeightDefault = 420;
	JumpHeightLow = 210;
	FootstepIntervalWalk = 0.5;
	FootstepIntervalRun = 0.3;
	FootstepIntervalCrouch = 0.7;
	FootstepInterval = FootstepIntervalWalk;

	InteractionCheckFrequency = 0.1;
	InteractionCheckDistance = 200.0f;

	BaseEyeHeight = 50.0f;

	bIsRunning = false;
	bIsJumping = false;

	bIsBlockedRun = false;
	bIsBlockedJump = false;

	bUpdateState = false;

	ECurrentState = STAT_Idle;
	EPreviousState = ECurrentState;

	bIsStaminaProtected = false;
	

}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();


	HUD = Cast<AMainHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using IlnurBox."));

	if (HealthComponent)
	{
		HealthComponent->OnDeath.AddDynamic(this, &AMainCharacter::OnDeath);
	}


}

void AMainCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetWorld()->TimeSince(InteractionData.LastInteractionCheckTime) > InteractionCheckFrequency) 
	{
		PerformInteractionCheck();
	}
}

void AMainCharacter::OnDeath()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Unlucky you died"));
	this->SetActorLocation(FVector(0,0,0));
	HealthComponent->SetCurrentHealth(100);
}

void AMainCharacter::PerformInteractionCheck()
{
	InteractionData.LastInteractionCheckTime = GetWorld()->GetTimeSeconds();

	FVector TraceStart{ GetPawnViewLocation() };
	FVector TraceEnd{ TraceStart + (GetViewRotation().Vector() * InteractionCheckDistance) };

	//DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Red, false, 1.0f, 0, 2.0f);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	FHitResult TraceHit;

	if (GetWorld()->LineTraceSingleByChannel(TraceHit, TraceStart, TraceEnd,ECC_Visibility, QueryParams))
	{

		if (TraceHit.GetActor()->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()))
		{
			const float Distance = (TraceStart - TraceHit.ImpactPoint).Size();

			if (TraceHit.GetActor() != InteractionData.CurrentInteractable && Distance <= InteractionCheckDistance)
			{
				FoundInteractable(TraceHit.GetActor());
			}

			if (TraceHit.GetActor() == InteractionData.CurrentInteractable)
			{
				return;
			}
		}
	}

	NoInteractableFound();
}

void AMainCharacter::FoundInteractable(AActor* NewInteractable)
{
	if (IsInteracting())
	{
		EndInteract();
	}

	if (InteractionData.CurrentInteractable)
	{
		TargetInteractable = InteractionData.CurrentInteractable;
		TargetInteractable->EndFocus();
	}

	InteractionData.CurrentInteractable = NewInteractable;
	TargetInteractable = NewInteractable;

	HUD->UpdateInteractionWidget(&TargetInteractable->InteractableData);

	TargetInteractable->StartFocus();
}

void AMainCharacter::NoInteractableFound()
{
	if (IsInteracting())
	{
		GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);
	}

	if (InteractionData.CurrentInteractable)
	{
		if (IsValid(TargetInteractable.GetObject()))
		{
			TargetInteractable->EndFocus();
		}

		HUD->HideInteractionWidget();

		InteractionData.CurrentInteractable = nullptr;
		TargetInteractable = nullptr;
	}
}

void AMainCharacter::BeginInteract()
{
	PerformInteractionCheck();

	if (InteractionData.CurrentInteractable)
	{
		if (IsValid(TargetInteractable.GetObject()))
		{
			TargetInteractable->StartInteract();

			if (FMath::IsNearlyZero(TargetInteractable->InteractableData.InteractionDuration, 0.1f))
			{
				Interact();
			}
			else
			{
				GetWorldTimerManager().SetTimer(TimerHandle_Interaction,
					this,
					&AMainCharacter::Interact,
					TargetInteractable->InteractableData.InteractionDuration,
					false);
			}
		}
	}
}

void AMainCharacter::EndInteract()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if (IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->EndInteract();
	}
}

void AMainCharacter::Interact()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_Interaction);

	if (IsValid(TargetInteractable.GetObject()))
	{
		TargetInteractable->Interact(this);
	}
}



void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCharacter::Move);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AMainCharacter::StopMove);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMainCharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AMainCharacter::StopJump);
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Triggered, this, &AMainCharacter::Run);
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Completed, this, &AMainCharacter::StopRun);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &AMainCharacter::StartCrouch);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &AMainCharacter::StopCrouch);
		EnhancedInputComponent->BindAction(ActivateAbilityAction, ETriggerEvent::Triggered, this, &AMainCharacter::ActivateAbility);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &AMainCharacter::BeginInteract);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &AMainCharacter::EndInteract);
		EnhancedInputComponent->BindAction(CancelAction, ETriggerEvent::Triggered, this, &AMainCharacter::Cancel);
	}
}

void AMainCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PrevCustomMode)
{
	Super::OnMovementModeChanged(PrevMovementMode, PrevCustomMode);

}

void AMainCharacter::Move(const FInputActionValue& Value)
{
	FootstepPlaySound();

	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}

}

void AMainCharacter::StopMove(const FInputActionValue& Value)
{

}

void AMainCharacter::Run()
{
	if (bIsBlockedRun)
		return;

	if (!bIsCrouched)
	{
		if (StaminaComponent->CanPerformAction(10))
		{
			GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
			ECurrentState = STAT_Run;
			bIsRunning = true;

			GetWorldTimerManager().SetTimer(RunningHandle, this, &AMainCharacter::Running, 0.1f, true);
		}
	}
}

void AMainCharacter::StopRun()
{
	if (bIsRunning)
	{
		bIsRunning = false;
	}

	if (bIsCrouched)
	{
		GetCharacterMovement()->MaxWalkSpeed = GetCharacterMovement()->MaxWalkSpeedCrouched;
		ECurrentState = STAT_CrouchWalk;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		ECurrentState = STAT_Walk;
	}

	GetWorldTimerManager().ClearTimer(RunningHandle);
}

void AMainCharacter::Running()
{
	if (GetMovementComponent()->IsFalling())
		return;

	if (StaminaComponent->CanPerformAction(0.5))
	{
		StaminaComponent->ConsumeStamina(0.5);;
	}
	else
	{
		StopRun();
	}
}

void AMainCharacter::FootstepPlaySound()
{

	if (GetMovementComponent()->IsFalling())
	{
		GetWorldTimerManager().ClearTimer(DelaySoundPlayHandle);
		return;
	}

	CheckPhysicMaterial();

	switch (ECurrentState)
	{
		case STAT_CrouchWalk:
			FootstepInterval = FootstepIntervalCrouch;
			break;
		case STAT_Run:
			FootstepInterval = FootstepIntervalRun;
			break;
		default:
			FootstepInterval = FootstepIntervalWalk;
			break;
	}


	if (!GetWorldTimerManager().IsTimerActive(DelaySoundPlayHandle) || EPreviousState != ECurrentState)
	{
		EPreviousState = ECurrentState;
		GetWorldTimerManager().SetTimer(DelaySoundPlayHandle, this, &AMainCharacter::DelaySoundPlay, FootstepInterval, true, 0.0);
	}

}

void AMainCharacter::DelaySoundPlay()
{
	if (GetVelocity() == FVector(0,0,0))
	{
		GetWorldTimerManager().ClearTimer(DelaySoundPlayHandle);
		return;
	}
	UGameplayStatics::PlaySoundAtLocation(this, FootstepSFX, GetActorLocation());
}

void AMainCharacter::CheckPhysicMaterial()
{
	FVector Loc;
	FVector Start;
	FVector End;
	FHitResult HitResult;
	FCollisionQueryParams COQP;
	COQP.AddIgnoredActor(this);
	COQP.bReturnPhysicalMaterial = true;

	Loc = GetActorLocation();
	Start = Loc;
	End = Start;
	End.Z -= 144;


	FCollisionResponseParams CollRes;
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, COQP, CollRes);

	if (bHit)
	{
		if (HitResult.PhysMaterial != nullptr)
		{
			switch (HitResult.PhysMaterial->SurfaceType)
			{
				case SurfaceType1:
					FootstepSFX = FootstepGround;
					break;
				case SurfaceType2:
					FootstepSFX = FootstepGrass;
					break;
				default:
					FootstepSFX = nullptr;
					break;
			}
			
		}
	}
	
}


void AMainCharacter::StartCrouch(const FInputActionValue& Value)
{
	Crouch();
	ECurrentState = STAT_CrouchWalk;
}

void AMainCharacter::StopCrouch(const FInputActionValue& Value)
{
	UnCrouch();

	if (bIsRunning)
	{
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		ECurrentState = STAT_Run;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		ECurrentState = STAT_Walk;
	}
}

void AMainCharacter::Jump(const FInputActionValue& Value)
{
	if (bIsBlockedJump)
		return;

	if (!GetMovementComponent()->IsFalling())
	{
		if (StaminaComponent->CanPerformAction(1.0))
		{
			StaminaComponent->ConsumeStamina(1.0);
			GetCharacterMovement()->JumpZVelocity = JumpHeightDefault;
		}
		else
		{
			GetCharacterMovement()->JumpZVelocity = JumpHeightLow;
		}

		bIsJumping = true;
		bPressedJump = true;
		JumpKeyHoldTime = 0.0f;
	}

}

void AMainCharacter::StopJump(const FInputActionValue& Value)
{
	bIsJumping = false;
	bPressedJump = false;
	ResetJumpState();

}

void AMainCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMainCharacter::ActivateAbility(const FInputActionValue& Value)
{
	FVector Loc;
	FRotator Rot;

	GetController()->GetPlayerViewPoint(Loc, Rot);
	
	FVector SpawnLocation = Loc + (Rot.Vector() * 300.0f);

	SpawnObject(SpawnLocation, Rot);

}

void AMainCharacter::SpawnObject(FVector Loc, FRotator Rot)
{
	FActorSpawnParameters SpawnParams;
	AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn, Loc, Rot, SpawnParams);
}

void AMainCharacter::InteractWithActor()
{
	FVector Loc;
	FRotator Rot;
	FVector Start;
	FVector End;
	FHitResult HitResult;


	FCollisionQueryParams COQP;
	COQP.AddIgnoredActor(this);
	COQP.bReturnPhysicalMaterial = true;

	GetController()->GetPlayerViewPoint(Loc, Rot);


	Start = Loc;
	End = Start + (Rot.Vector() * 200.0f);;


	FCollisionResponseParams CollRes;
	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, COQP, CollRes);

	if (bHit)
	{

	}

}

void AMainCharacter::Cancel()
{
	if (CloseWidget)
	{
		CloseWidget->RemoveFromViewport();
		CloseWidget = nullptr;

		GetController()->SetIgnoreLookInput(false);
		GetController()->SetIgnoreMoveInput(false);

		bIsBlockedJump = false;
		bIsBlockedRun = false;
	}
}

