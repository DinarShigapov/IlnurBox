// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterState.h"
#include "InteractInterface.h"
#include "Engine/Console.h"
#include "Engine/World.h"
#include "Sound/SoundBase.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Engine/TimerHandle.h"
#include "InputMappingContext.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "MainCharacter.generated.h"

class AKeyActor;

UCLASS()
class ILNURBOX_API AMainCharacter : public ACharacter, public IInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* RunAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CrouchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DamageSelfAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ActivateAbilityAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* InteractAction;

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float CurrentStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float MaxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float CurrentMana;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float MaxMana;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float RunSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float FootstepInterval;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float FootstepIntervalWalk;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float FootstepIntervalRun;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float FootstepIntervalCrouch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	bool bIsRunning;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	bool bIsJumping;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float AddMana;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float AddHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float AddStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float ReduceMana;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float ReduceHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float ReduceStamina;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	USoundBase* FootstepSFX;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	USoundBase* FootstepGround;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	USoundBase* FootstepGrass;


	bool bUpdateState;
	EChatacterState ECurrentState;
	EChatacterState EPreviousState;

public:
	// Sets default values for this character's properties
	AMainCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	bool bIsAlive;

	bool bIsStaminaProtected;

	bool bIsBlockedRun;
	bool bIsBlockedJump;

	TArray<AKeyActor*> KeyActorArray;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PrevCustomMode) override;

	UFUNCTION(BlueprintCallable, Category = "MovementBP")
	void Move(const FInputActionValue& Value);

	void StopMove(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "MovementBP")
	void Run();

	UFUNCTION(BlueprintCallable, Category = "MovementBP")
	void StopRun();

	void FootstepPlaySound();

	void CheckPhysicMaterial();
private:

	void StartCrouch(const FInputActionValue& Value);
	void StopCrouch(const FInputActionValue& Value);

	void Jump(const FInputActionValue& Value);
	void StopJump(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void DamageSelf(const FInputActionValue& Value);
	void ActivateAbility(const FInputActionValue& Value);

	UFUNCTION()
	void SpawnObject(FVector Loc, FRotator Rot);

	UFUNCTION(BlueprintCallable, Category = "Interacts")
	void InteractWithActor();

public:

	void RegenerationHealth();
	FTimerHandle RegenerationHealthHandle;

	void RegenerationTick();
	FTimerHandle RegenerationTickHandle;

	void DecreaseStamina();
	FTimerHandle DecreaseStaminaHandle;

	void StopStaminaProtection();
	FTimerHandle StaminaEffectTimerHandle;

	void IncreaseStamina();
	FTimerHandle IncreaseStaminaHandle;

	void IncreaseStaminaTick();
	FTimerHandle IncreaseStaminaTickHandle;

	void DecreaseMana();

	void IncreaseMana();
	FTimerHandle IncreaseManaHandle;

	void IncreaseManaTick();
	FTimerHandle IncreaseManaTickHandle;

	void DelaySoundPlay();
	FTimerHandle DelaySoundPlayHandle;
};