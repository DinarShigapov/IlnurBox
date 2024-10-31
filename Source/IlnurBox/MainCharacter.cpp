// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"


// Sets default values
AMainCharacter::AMainCharacter()
{
 
	PrimaryActorTick.bCanEverTick = false;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	Camera->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	Camera->bUsePawnControlRotation = true;


	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	RunSpeed = 500;
	WalkSpeed = 300;
	FootstepIntervalWalk = 0.5;
	FootstepIntervalRun = 0.3;
	FootstepIntervalCrouch = 0.7;
	FootstepInterval = FootstepIntervalWalk;

	MaxHealth = 1;
	MaxStamina = 1;
	MaxMana = 1;

	AddHealth = 0.075;
	AddMana = 0.05;
	AddStamina = 0.1; 
	ReduceHealth = 0.1;
	ReduceMana = 0.1;
	ReduceStamina = 0.1;

	CurrentHealth = MaxHealth;
	CurrentStamina = MaxStamina;
	CurrentMana = MaxMana;

	bIsAlive = true;
	bIsRunning = false;
	bIsJumping = false;

	bUpdateState = false;

	ECurrentState = STAT_Idle;
	EPreviousState = ECurrentState;

	bIsStaminaProtected = false;

}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using IlnurBox."));

	GetWorldTimerManager().SetTimer(RegenerationHealthHandle, this, &AMainCharacter::RegenerationHealth, 1, false, 2.0f);
	GetWorldTimerManager().SetTimer(IncreaseStaminaHandle, this, &AMainCharacter::IncreaseStamina, 1, false, 2.0f);
	GetWorldTimerManager().SetTimer(IncreaseManaHandle, this, &AMainCharacter::IncreaseMana, 1, false, 2.0f);

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
		EnhancedInputComponent->BindAction(DamageSelfAction, ETriggerEvent::Triggered, this, &AMainCharacter::DamageSelf);
		EnhancedInputComponent->BindAction(ActivateAbilityAction, ETriggerEvent::Triggered, this, &AMainCharacter::ActivateAbility);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AMainCharacter::InteractWithActor);
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

	if (bIsRunning && !GetWorldTimerManager().IsTimerActive(DecreaseStaminaHandle))
	{
		GetWorldTimerManager().SetTimer(DecreaseStaminaHandle, this, &AMainCharacter::DecreaseStamina, 1, true, 0.0f);
	}
}

void AMainCharacter::StopMove(const FInputActionValue& Value)
{
	if (bIsRunning && GetWorldTimerManager().IsTimerActive(DecreaseStaminaHandle))
	{
		GetWorldTimerManager().ClearTimer(DecreaseStaminaHandle);
	}
}

void AMainCharacter::Run()
{
	if (CurrentStamina > 0 && !bIsCrouched)
	{
		if (!GetVelocity().IsNearlyZero())
		{
			GetWorldTimerManager().SetTimer(DecreaseStaminaHandle, this, &AMainCharacter::DecreaseStamina, 1, true, 0.0f);
		}

		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		ECurrentState = STAT_Run;
		bIsRunning = true;
	}

}

void AMainCharacter::StopRun()
{
	if (bIsRunning)
	{
		GetWorldTimerManager().ClearTimer(DecreaseStaminaHandle);
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
	if (!GetMovementComponent()->IsFalling())
	{
		bIsJumping = true;
		bPressedJump = true;
		JumpKeyHoldTime = 0.0f;
		DecreaseStamina();
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

void AMainCharacter::DamageSelf(const FInputActionValue& Value)
{

	if (ReduceHealth >= CurrentHealth)
	{
		CurrentHealth = 0;
		bIsAlive = false;
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("You're dead."));
	}
	else
	{
		CurrentHealth -= ReduceHealth;
	}


	GetWorldTimerManager().ClearTimer(RegenerationTickHandle);
	GetWorldTimerManager().SetTimer(RegenerationHealthHandle, this, &AMainCharacter::RegenerationHealth, 1, false, 2.0f);
}

void AMainCharacter::DecreaseStamina()
{
	if (bIsCrouched || GetMovementComponent()->IsFalling() || bIsStaminaProtected)
		return;

	if (GetWorldTimerManager().IsTimerActive(IncreaseStaminaTickHandle))
		GetWorldTimerManager().ClearTimer(IncreaseStaminaTickHandle);


	if (bIsRunning || bIsJumping)
	{
		
		if (ReduceStamina > CurrentStamina)
		{
			CurrentStamina = 0;
			StopRun();
		}
		else
		{
			CurrentStamina -= ReduceStamina;
		}
		

		GetWorldTimerManager().SetTimer(IncreaseStaminaHandle, this, &AMainCharacter::IncreaseStamina, 1, false, 1.5f);
	}

}

void AMainCharacter::StopStaminaProtection() 
{
	bIsStaminaProtected = false;
};


void AMainCharacter::IncreaseStamina()
{
	GetWorldTimerManager().SetTimer(IncreaseStaminaTickHandle, this, &AMainCharacter::IncreaseStaminaTick, 0.1, true, 0.0f);
}

void AMainCharacter::IncreaseStaminaTick()
{
	if (CurrentStamina + AddStamina > MaxStamina)
	{
		CurrentStamina = MaxStamina;
	}
	else
	{
		CurrentStamina += AddStamina;
	}

	if (CurrentStamina == MaxStamina)
	{
		GetWorldTimerManager().ClearTimer(IncreaseStaminaTickHandle);
	}
}

void AMainCharacter::RegenerationHealth() 
{
	GetWorldTimerManager().SetTimer(RegenerationTickHandle, this, &AMainCharacter::RegenerationTick, 0.1, true, 0.0f);
}

void AMainCharacter::RegenerationTick()
{

	if (CurrentHealth + AddHealth > MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
	else if (bIsAlive == false)
	{
		GetWorldTimerManager().ClearTimer(RegenerationTickHandle);
	}
	else
	{
		CurrentHealth += AddHealth;
	}

	if (CurrentHealth == MaxHealth)
	{
		GetWorldTimerManager().ClearTimer(RegenerationTickHandle);
	}
}

void AMainCharacter::ActivateAbility(const FInputActionValue& Value)
{
	FVector Loc;
	FRotator Rot;

	GetController()->GetPlayerViewPoint(Loc, Rot);
	
	FVector SpawnLocation = Loc + (Rot.Vector() * 300.0f);

	if (CurrentMana >= 0.5)
	{
		SpawnObject(SpawnLocation, Rot);
	}

	DecreaseMana();
	GetWorldTimerManager().SetTimer(IncreaseManaHandle, this, &AMainCharacter::IncreaseMana, 1, false, 2.0f);
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
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("HIT AN ACTOR"));
		if (IInteractInterface* InteractInterface = Cast<IInteractInterface>(HitResult.GetActor()))
		{
			InteractInterface->OnInteract(this);
		}
	}

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 3.0f, 0, 2.0f);
}

void AMainCharacter::IncreaseMana()
{
	GetWorldTimerManager().SetTimer(IncreaseManaTickHandle, this, &AMainCharacter::IncreaseManaTick, 0.1, true, 0.0f);
}

void AMainCharacter::IncreaseManaTick()
{
	if (CurrentMana + AddMana > MaxMana)
	{
		CurrentMana = MaxMana;
	}
	else
	{
		CurrentMana += AddMana;
	}

	if (CurrentMana == MaxMana)
	{
		GetWorldTimerManager().ClearTimer(IncreaseManaTickHandle);
	}
}


void AMainCharacter::DecreaseMana()
{

	if (GetWorldTimerManager().IsTimerActive(IncreaseManaTickHandle))
		GetWorldTimerManager().ClearTimer(IncreaseManaTickHandle);


	if (ReduceMana >= CurrentMana)
	{
		CurrentMana = 0;
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("The mana is over."));
	}
	else
	{
		CurrentMana -= ReduceMana;
	}

	GetWorldTimerManager().SetTimer(IncreaseManaHandle, this, &AMainCharacter::IncreaseMana, 1, false, 2.0f);
}