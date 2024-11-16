// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/Player/MainCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
ILNURBOX_API UClass* Z_Construct_UClass_AMainCharacter();
ILNURBOX_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_AMainHUD_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
ILNURBOX_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionData();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin ScriptStruct FInteractionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionData;
class UScriptStruct* FInteractionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionData, (UObject*)Z_Construct_UPackage__Script_IlnurBox(), TEXT("InteractionData"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionData.OuterSingleton;
}
template<> ILNURBOX_API UScriptStruct* StaticStruct<FInteractionData>()
{
	return FInteractionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractionCheckTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastInteractionCheckTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, CurrentInteractable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInteractable_MetaData), NewProp_CurrentInteractable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime = { "LastInteractionCheckTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInteractionData, LastInteractionCheckTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInteractionCheckTime_MetaData), NewProp_LastInteractionCheckTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_CurrentInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionData_Statics::NewProp_LastInteractionCheckTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
	nullptr,
	&NewStructOps,
	"InteractionData",
	Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::PropPointers),
	sizeof(FInteractionData),
	alignof(FInteractionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionData()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton, Z_Construct_UScriptStruct_FInteractionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionData.InnerSingleton;
}
// End ScriptStruct FInteractionData

// Begin Class AMainCharacter Function InteractWithActor
struct Z_Construct_UFunction_AMainCharacter_InteractWithActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | Interacts" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_InteractWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "InteractWithActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_InteractWithActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_InteractWithActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_InteractWithActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_InteractWithActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execInteractWithActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractWithActor();
	P_NATIVE_END;
}
// End Class AMainCharacter Function InteractWithActor

// Begin Class AMainCharacter Function Move
struct Z_Construct_UFunction_AMainCharacter_Move_Statics
{
	struct MainCharacter_eventMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | MovementBP" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_Move_Statics::MainCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_Move_Statics::MainCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AMainCharacter Function Move

// Begin Class AMainCharacter Function OnDeath
struct Z_Construct_UFunction_AMainCharacter_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath();
	P_NATIVE_END;
}
// End Class AMainCharacter Function OnDeath

// Begin Class AMainCharacter Function Run
struct Z_Construct_UFunction_AMainCharacter_Run_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | MovementBP" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "Run", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Run_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Run_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_Run()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Run_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Run();
	P_NATIVE_END;
}
// End Class AMainCharacter Function Run

// Begin Class AMainCharacter Function SpawnObject
struct Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics
{
	struct MainCharacter_eventSpawnObject_Parms
	{
		FVector Loc;
		FRotator Rot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Loc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::NewProp_Loc = { "Loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventSpawnObject_Parms, Loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventSpawnObject_Parms, Rot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::NewProp_Loc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::NewProp_Rot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "SpawnObject", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::MainCharacter_eventSpawnObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::MainCharacter_eventSpawnObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_SpawnObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_SpawnObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execSpawnObject)
{
	P_GET_STRUCT(FVector,Z_Param_Loc);
	P_GET_STRUCT(FRotator,Z_Param_Rot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnObject(Z_Param_Loc,Z_Param_Rot);
	P_NATIVE_END;
}
// End Class AMainCharacter Function SpawnObject

// Begin Class AMainCharacter Function StopRun
struct Z_Construct_UFunction_AMainCharacter_StopRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character | MovementBP" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_StopRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "StopRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_StopRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_StopRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_StopRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_StopRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execStopRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRun();
	P_NATIVE_END;
}
// End Class AMainCharacter Function StopRun

// Begin Class AMainCharacter
void AMainCharacter::StaticRegisterNativesAMainCharacter()
{
	UClass* Class = AMainCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InteractWithActor", &AMainCharacter::execInteractWithActor },
		{ "Move", &AMainCharacter::execMove },
		{ "OnDeath", &AMainCharacter::execOnDeath },
		{ "Run", &AMainCharacter::execRun },
		{ "SpawnObject", &AMainCharacter::execSpawnObject },
		{ "StopRun", &AMainCharacter::execStopRun },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
{
	return AMainCharacter::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/MainCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateAbilityAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Input" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeightDefault_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpHeightLow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepInterval_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepIntervalWalk_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepIntervalRun_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepIntervalCrouch_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRunning_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepSFX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepGround_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootstepGrass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Characteristic" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Character | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaComponent_MetaData[] = {
		{ "Category", "Character | Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInteractable_MetaData[] = {
		{ "Category", "Character | Interaction" },
		{ "ModuleRelativePath", "Public/Player/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivateAbilityAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeightDefault;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpHeightLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepIntervalWalk;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepIntervalRun;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootstepIntervalCrouch;
	static void NewProp_bIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRunning;
	static void NewProp_bIsJumping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepSFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepGround;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FootstepGrass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainPlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TargetInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_InteractWithActor, "InteractWithActor" }, // 3355281497
		{ &Z_Construct_UFunction_AMainCharacter_Move, "Move" }, // 1687761818
		{ &Z_Construct_UFunction_AMainCharacter_OnDeath, "OnDeath" }, // 766876086
		{ &Z_Construct_UFunction_AMainCharacter_Run, "Run" }, // 3059227546
		{ &Z_Construct_UFunction_AMainCharacter_SpawnObject, "SpawnObject" }, // 3463439919
		{ &Z_Construct_UFunction_AMainCharacter_StopRun, "StopRun" }, // 2337554382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_RunAction = { "RunAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, RunAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunAction_MetaData), NewProp_RunAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_ActivateAbilityAction = { "ActivateAbilityAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, ActivateAbilityAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateAbilityAction_MetaData), NewProp_ActivateAbilityAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAction_MetaData), NewProp_CancelAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToSpawn_MetaData), NewProp_ActorToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpHeightDefault = { "JumpHeightDefault", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, JumpHeightDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeightDefault_MetaData), NewProp_JumpHeightDefault_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpHeightLow = { "JumpHeightLow", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, JumpHeightLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpHeightLow_MetaData), NewProp_JumpHeightLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepInterval = { "FootstepInterval", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepInterval_MetaData), NewProp_FootstepInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepIntervalWalk = { "FootstepIntervalWalk", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepIntervalWalk), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepIntervalWalk_MetaData), NewProp_FootstepIntervalWalk_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepIntervalRun = { "FootstepIntervalRun", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepIntervalRun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepIntervalRun_MetaData), NewProp_FootstepIntervalRun_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepIntervalCrouch = { "FootstepIntervalCrouch", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepIntervalCrouch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepIntervalCrouch_MetaData), NewProp_FootstepIntervalCrouch_MetaData) };
void Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning_SetBit(void* Obj)
{
	((AMainCharacter*)Obj)->bIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning = { "bIsRunning", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRunning_MetaData), NewProp_bIsRunning_MetaData) };
void Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsJumping_SetBit(void* Obj)
{
	((AMainCharacter*)Obj)->bIsJumping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCharacter), &Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsJumping_MetaData), NewProp_bIsJumping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepSFX = { "FootstepSFX", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepSFX_MetaData), NewProp_FootstepSFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGround = { "FootstepGround", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepGround), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepGround_MetaData), NewProp_FootstepGround_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGrass = { "FootstepGrass", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FootstepGrass), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootstepGrass_MetaData), NewProp_FootstepGrass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, HUD), Z_Construct_UClass_AMainHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUD_MetaData), NewProp_HUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MainPlayerController = { "MainPlayerController", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MainPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainPlayerController_MetaData), NewProp_MainPlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_StaminaComponent = { "StaminaComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, StaminaComponent), Z_Construct_UClass_UStaminaComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaComponent_MetaData), NewProp_StaminaComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_TargetInteractable = { "TargetInteractable", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, TargetInteractable), Z_Construct_UClass_UInteractInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInteractable_MetaData), NewProp_TargetInteractable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_RunAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_ActivateAbilityAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CancelAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_ActorToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpHeightDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpHeightLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepIntervalWalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepIntervalRun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepIntervalCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_bIsJumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepSFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FootstepGrass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_HUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MainPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_StaminaComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_TargetInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMainCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AMainCharacter, IInteractInterface), false },  // 2867701864
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
	&AMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<AMainCharacter>()
{
	return AMainCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
AMainCharacter::~AMainCharacter() {}
// End Class AMainCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Player_MainCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractionData::StaticStruct, Z_Construct_UScriptStruct_FInteractionData_Statics::NewStructOps, TEXT("InteractionData"), &Z_Registration_Info_UScriptStruct_InteractionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionData), 4166204322U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 2780245839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Player_MainCharacter_h_3412637411(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Player_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Player_MainCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Player_MainCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Player_MainCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
