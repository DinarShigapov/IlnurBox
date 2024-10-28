// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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



UCLASS()
class ILNURBOX_API AMainCharacter : public ACharacter
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

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> ActorToSpawn;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float CurrentStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float MaxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float CurrentMana;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float MaxMana;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	bool bIsAlive;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float RunSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float bIsRunning;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Characteristic, meta = (AllowPrivateAccess = "true"))
	float bIsJumping;

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


public:
	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



private:
	void Move(const FInputActionValue& Value);
	void Run(const FInputActionValue& Value);
	void StopRun();

	void StartCrouch(const FInputActionValue& Value);
	void StopCrouch(const FInputActionValue& Value);

	void Jump(const FInputActionValue& Value);
	void StopJump(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void DamageSelf(const FInputActionValue& Value);
	void ActivateAbility(const FInputActionValue& Value);

	UFUNCTION()
	void SpawnObject(FVector Loc, FRotator Rot);

public:

	void RegenerationHealth();
	FTimerHandle RegenerationHealthHandle;

	void RegenerationTick();
	FTimerHandle RegenerationTickHandle;

	void DecreaseStamina();
	FTimerHandle DecreaseStaminaHandle;

	void IncreaseStamina();
	FTimerHandle IncreaseStaminaHandle;

	void IncreaseStaminaTick();
	FTimerHandle IncreaseStaminaTickHandle;

	void DecreaseMana();

	void IncreaseMana();
	FTimerHandle IncreaseManaHandle;

	void IncreaseManaTick();
	FTimerHandle IncreaseManaTickHandle;
};