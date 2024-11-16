// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterState.h"
#include "Interfaces/InteractInterface.h"
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
#include "Components/HealthComponent.h"
#include "Components/StaminaComponent.h"
#include "MainCharacter.generated.h"

class UUNoteWidget;
class AKeyActor;


USTRUCT()
struct FInteractionData 
{
	GENERATED_USTRUCT_BODY()

	FInteractionData() : 
	CurrentInteractable(nullptr),
	LastInteractionCheckTime(0.0f){};

	UPROPERTY()
	AActor* CurrentInteractable;

	UPROPERTY()
	float LastInteractionCheckTime;
};

UCLASS()
class ILNURBOX_API AMainCharacter : public ACharacter, public IInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* RunAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* CrouchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* ActivateAbilityAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* CancelAction;

	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float RunSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float WalkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float JumpHeightDefault;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float JumpHeightLow;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float FootstepInterval;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float FootstepIntervalWalk;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float FootstepIntervalRun;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	float FootstepIntervalCrouch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	bool bIsRunning;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	bool bIsJumping;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	USoundBase* FootstepSFX;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	USoundBase* FootstepGround;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character | Characteristic", meta = (AllowPrivateAccess = "true"))
	USoundBase* FootstepGrass;

	bool bUpdateState;

	EChatacterState ECurrentState;

	EChatacterState EPreviousState;

public:
	// Sets default values for this character's properties
	AMainCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	bool bIsStaminaProtected;
	bool bIsBlockedRun;
	bool bIsBlockedJump;

	TArray<AKeyActor*> KeyActorArray;
	TArray<AActor*> InvActorArray;
	UUNoteWidget* CloseWidget;

	FORCEINLINE bool IsInteracting() const { return GetWorldTimerManager().IsTimerActive(TimerHandle_Interaction); };

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PrevCustomMode) override;

	UFUNCTION(BlueprintCallable, Category = "Character | MovementBP")
	void Move(const FInputActionValue& Value);

	void StopMove(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Character | MovementBP")
	void Run();

	UFUNCTION(BlueprintCallable, Category = "Character | MovementBP")
	void StopRun();

	void FootstepPlaySound();
	void CheckPhysicMaterial();
	void DelaySoundPlay();

	FTimerHandle DelaySoundPlayHandle;
	FTimerHandle RunningHandle;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Components")
	UHealthComponent* HealthComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Components")
	UStaminaComponent* StaminaComponent;

	UPROPERTY(VisibleAnywhere, Category = "Character | Interaction")
	TScriptInterface<IInteractInterface> TargetInteractable;

	float InteractionCheckFrequency;

	float InteractionCheckDistance;

	FTimerHandle TimerHandle_Interaction;

	FInteractionData InteractionData;

	UFUNCTION()
	void OnDeath();

	void PerformInteractionCheck();
	void FoundInteractable(AActor* NewInteractable);
	void NoInteractableFound();
	void BeginInteract();
	void EndInteract();
	void Interact();

private:

	void StartCrouch(const FInputActionValue& Value);
	void StopCrouch(const FInputActionValue& Value);
	void Jump(const FInputActionValue& Value);
	void StopJump(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void ActivateAbility(const FInputActionValue& Value);

	UFUNCTION()
	void SpawnObject(FVector Loc, FRotator Rot);

	UFUNCTION(BlueprintCallable, Category = "Character | Interacts")
	void InteractWithActor();

	void Cancel();
	void Running();


};