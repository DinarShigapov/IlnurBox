// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterState.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum EChatacterState
{
	STAT_Idle UMETA(DisplayName = "Idle"),
	STAT_Walk UMETA(DisplayName = "Walk"),
	STAT_Run UMETA(DisplayName = "Run"),
	STAT_Crouch UMETA(DisplayName = "Crouch"),
	STAT_CrouchWalk UMETA(DisplayName = "CrouchWalk"),
	STAT_Jump UMETA(DisplayName = "Jump")

};
