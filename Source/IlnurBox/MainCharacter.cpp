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

	MaxHealth = 1;
	MaxStamina = 1;
	MaxMana = 1;

	AddHealth = 0.1;
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

}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using Ilnur."));

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
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMainCharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AMainCharacter::StopJump);
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Started, this, &AMainCharacter::Run);
		EnhancedInputComponent->BindAction(RunAction, ETriggerEvent::Completed, this, &AMainCharacter::StopRun);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &AMainCharacter::StartCrouch);
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Completed, this, &AMainCharacter::StopCrouch);
		EnhancedInputComponent->BindAction(DamageSelfAction, ETriggerEvent::Triggered, this, &AMainCharacter::DamageSelf);
		EnhancedInputComponent->BindAction(ActivateAbilityAction, ETriggerEvent::Triggered, this, &AMainCharacter::ActivateAbility);
	}
}

void AMainCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AMainCharacter::Run(const FInputActionValue& Value)
{
	if (CurrentStamina > 0)
	{
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		GetWorldTimerManager().SetTimer(DecreaseStaminaHandle, this, &AMainCharacter::DecreaseStamina, 1, true, 0.0f);
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

	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}


void AMainCharacter::StartCrouch(const FInputActionValue& Value)
{
	Crouch();
}

void AMainCharacter::StopCrouch(const FInputActionValue& Value)
{
	UnCrouch();
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
	if (bIsCrouched)
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

void AMainCharacter::IncreaseStamina()
{
	GetWorldTimerManager().SetTimer(IncreaseStaminaTickHandle, this, &AMainCharacter::IncreaseStaminaTick, 1, true, 0.0f);
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
	GetWorldTimerManager().SetTimer(RegenerationTickHandle, this, &AMainCharacter::RegenerationTick, 1, true, 0.0f);
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
	
	FVector SpawnLocation = Loc + (Rot.Vector() * 500.0f);

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

void AMainCharacter::IncreaseMana()
{
	GetWorldTimerManager().SetTimer(IncreaseManaTickHandle, this, &AMainCharacter::IncreaseManaTick, 1, true, 0.0f);
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