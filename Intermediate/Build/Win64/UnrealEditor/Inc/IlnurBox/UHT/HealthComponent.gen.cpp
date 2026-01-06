// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/Components/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UHealthComponent();
ILNURBOX_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
ILNURBOX_API UFunction* Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Delegate FOnDeath
struct Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_IlnurBox, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeath

// Begin Class UHealthComponent Function GetCurrentHealth
struct Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics
{
	struct HealthComponent_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::HealthComponent_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::HealthComponent_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class UHealthComponent Function GetCurrentHealth

// Begin Class UHealthComponent Function GetMaxHealth
struct Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics
{
	struct HealthComponent_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::HealthComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::HealthComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UHealthComponent Function GetMaxHealth

// Begin Class UHealthComponent Function IsDead
struct Z_Construct_UFunction_UHealthComponent_IsDead_Statics
{
	struct HealthComponent_eventIsDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HealthComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HealthComponent_eventIsDead_Parms), &Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::HealthComponent_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_IsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_IsDead_Statics::HealthComponent_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDead();
	P_NATIVE_END;
}
// End Class UHealthComponent Function IsDead

// Begin Class UHealthComponent Function SetCurrentHealth
struct Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics
{
	struct HealthComponent_eventSetCurrentHealth_Parms
	{
		float AmountHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::NewProp_AmountHealth = { "AmountHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventSetCurrentHealth_Parms, AmountHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::NewProp_AmountHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::HealthComponent_eventSetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::HealthComponent_eventSetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_SetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execSetCurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AmountHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentHealth(Z_Param_AmountHealth);
	P_NATIVE_END;
}
// End Class UHealthComponent Function SetCurrentHealth

// Begin Class UHealthComponent Function TakeDamage
struct Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics
{
	struct HealthComponent_eventTakeDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execTakeDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class UHealthComponent Function TakeDamage

// Begin Class UHealthComponent
void UHealthComponent::StaticRegisterNativesUHealthComponent()
{
	UClass* Class = UHealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentHealth", &UHealthComponent::execGetCurrentHealth },
		{ "GetMaxHealth", &UHealthComponent::execGetMaxHealth },
		{ "IsDead", &UHealthComponent::execIsDead },
		{ "SetCurrentHealth", &UHealthComponent::execSetCurrentHealth },
		{ "TakeDamage", &UHealthComponent::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponent);
UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
{
	return UHealthComponent::StaticClass();
}
struct Z_Construct_UClass_UHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenRate_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenInterval_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_GetCurrentHealth, "GetCurrentHealth" }, // 3660875261
		{ &Z_Construct_UFunction_UHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 2385383390
		{ &Z_Construct_UFunction_UHealthComponent_IsDead, "IsDead" }, // 2364751247
		{ &Z_Construct_UFunction_UHealthComponent_SetCurrentHealth, "SetCurrentHealth" }, // 1196266702
		{ &Z_Construct_UFunction_UHealthComponent_TakeDamage, "TakeDamage" }, // 1847889832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_RegenRate = { "RegenRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, RegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenRate_MetaData), NewProp_RegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_RegenInterval = { "RegenInterval", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, RegenInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenInterval_MetaData), NewProp_RegenInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_RegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_RegenInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
	&UHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthComponent()
{
	if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<UHealthComponent>()
{
	return UHealthComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
UHealthComponent::~UHealthComponent() {}
// End Class UHealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 4191956555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_3268015923(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
