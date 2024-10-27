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
	WalkSpeed = 200;
	bIsAlive = true;
	MaxHealth = 1;
	Health = 0.5f;
	MaxStamina = 1;
	Stamina = 0.5f;
	Mana = 1;
	MaxMana = 1;

	bIsRunning = false;
	bIsJumping = false;

}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	check(GEngine != nullptr);

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using Ilnur."));

	GetWorldTimerManager().SetTimer(RegenerationHealthHandle, this, &AMainCharacter::RegenerationHealth, 1, false, 2.0f);
	GetWorldTimerManager().SetTimer(IncreaseStaminaHandle, this, &AMainCharacter::IncreaseStamina, 1, true, 3.0f);
}


// Called to bind functionality to input
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
	if (Stamina > 0)
	{
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		GetWorldTimerManager().SetTimer(DecreaseStaminaHandle, this, &AMainCharacter::DecreaseStamina, 1, true, 0.0f);
		bIsRunning = true;
	}
}

void AMainCharacter::StopRun(const FInputActionValue& Value)
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
	if (Stamina > 0)
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

	GetWorldTimerManager().SetTimer(IncreaseStaminaHandle, this, &AMainCharacter::IncreaseStamina, 1, true, 3.0f);
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
	float DamageDone = 0.5;

	if (DamageDone >= Health)
	{
		Health = 0;
		bIsAlive = false;
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("You're dead."));
	}
	else
	{
		Health -= DamageDone;
	}


	GetWorldTimerManager().ClearTimer(RegenerationTickHandle);
	GetWorldTimerManager().SetTimer(RegenerationHealthHandle, this, &AMainCharacter::RegenerationHealth, 1, false, 2.0f);
}

void AMainCharacter::DecreaseStamina()
{
	if (bIsCrouched)
		return;

	if (GetWorldTimerManager().IsTimerActive(IncreaseStaminaHandle))
		GetWorldTimerManager().ClearTimer(IncreaseStaminaHandle);

	if (bIsRunning || bIsJumping)
	{
		
		Stamina -= 0.01;

		GetWorldTimerManager().SetTimer(IncreaseStaminaHandle, this, &AMainCharacter::IncreaseStamina, 1, true, 3.0f);
	}

}

void AMainCharacter::IncreaseStamina()
{
	float AddingStamina = 0.1;

	if (Stamina + AddingStamina > MaxStamina)
	{
		Stamina = MaxStamina;
	}
	else
	{
		Stamina += AddingStamina;
	}

	if (Stamina == MaxStamina)
	{
		GetWorldTimerManager().ClearTimer(IncreaseStaminaHandle);
	}
}

void AMainCharacter::RegenerationHealth() 
{
	GetWorldTimerManager().SetTimer(RegenerationTickHandle, this, &AMainCharacter::RegenerationTick, 1, true, 0.1f);
}

void AMainCharacter::RegenerationTick()
{
	float AddingHealth = 0.05;

	if (Health + AddingHealth > MaxHealth)
	{
		Health = MaxHealth;
	}
	else if (bIsAlive == false)
	{
		GetWorldTimerManager().ClearTimer(RegenerationTickHandle);
	}
	else
	{
		Health += AddingHealth;
	}

	if (Health == MaxHealth)
	{
		GetWorldTimerManager().ClearTimer(RegenerationTickHandle);
	}
}


void AMainCharacter::ActivateAbility(const FInputActionValue& Value)
{
	FVector Loc;
	FRotator Rot;

	GetController()->GetPlayerViewPoint(Loc, Rot);

	if (Mana >= 0.5)
	{
		SpawnObject(Loc, Rot);
	}

	DecreaseMana();
	GetWorldTimerManager().SetTimer(IncreaseManaHandle, this, &AMainCharacter::IncreaseMana, 1, true, 2.0f);
}

void AMainCharacter::SpawnObject(FVector Loc, FRotator Rot)
{
	Loc.X += 50;
	
	FActorSpawnParameters SpawnParams;
	AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn, Loc, Rot, SpawnParams);
}

void AMainCharacter::IncreaseMana()
{
	float AddingMana = 0.1;

	if (Mana + AddingMana > MaxMana)
	{
		Mana = MaxMana;
	}
	else
	{
		Mana += AddingMana;
	}

	if (Mana == MaxMana)
	{
		GetWorldTimerManager().ClearTimer(IncreaseManaHandle);
	}
}

void AMainCharacter::DecreaseMana()
{

	if (GetWorldTimerManager().IsTimerActive(IncreaseManaHandle))
		GetWorldTimerManager().ClearTimer(IncreaseManaHandle);

	float AmountOfManaReceived = 0.5;

	if (AmountOfManaReceived >= Mana)
	{
		Mana = 0;
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("The mana is over."));
	}
	else
	{
		Mana -= AmountOfManaReceived;
	}

	GetWorldTimerManager().SetTimer(IncreaseManaHandle, this, &AMainCharacter::IncreaseMana, 1, true, 2.0f);
}