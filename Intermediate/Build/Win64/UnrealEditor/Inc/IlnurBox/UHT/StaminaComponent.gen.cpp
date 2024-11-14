// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/Components/StaminaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ILNURBOX_API UClass* Z_Construct_UClass_UStaminaComponent();
ILNURBOX_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class UStaminaComponent Function GetCurrentStamina
struct Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics
{
	struct StaminaComponent_eventGetCurrentStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaComponent_eventGetCurrentStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaComponent, nullptr, "GetCurrentStamina", nullptr, nullptr, Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::StaminaComponent_eventGetCurrentStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::StaminaComponent_eventGetCurrentStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaminaComponent::execGetCurrentStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentStamina();
	P_NATIVE_END;
}
// End Class UStaminaComponent Function GetCurrentStamina

// Begin Class UStaminaComponent Function GetMaxStamina
struct Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics
{
	struct StaminaComponent_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaminaComponent_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaComponent, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::StaminaComponent_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::StaminaComponent_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaminaComponent_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaComponent_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaminaComponent::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class UStaminaComponent Function GetMaxStamina

// Begin Class UStaminaComponent
void UStaminaComponent::StaticRegisterNativesUStaminaComponent()
{
	UClass* Class = UStaminaComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentStamina", &UStaminaComponent::execGetCurrentStamina },
		{ "GetMaxStamina", &UStaminaComponent::execGetMaxStamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaComponent);
UClass* Z_Construct_UClass_UStaminaComponent_NoRegister()
{
	return UStaminaComponent::StaticClass();
}
struct Z_Construct_UClass_UStaminaComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/StaminaComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRecoverRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountInIteration_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFirstDelayRecover_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/StaminaComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRecoverRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountInIteration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFirstDelayRecover;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaminaComponent_GetCurrentStamina, "GetCurrentStamina" }, // 288231937
		{ &Z_Construct_UFunction_UStaminaComponent_GetMaxStamina, "GetMaxStamina" }, // 3446467171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaRecoverRate = { "StaminaRecoverRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, StaminaRecoverRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRecoverRate_MetaData), NewProp_StaminaRecoverRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_AmountInIteration = { "AmountInIteration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, AmountInIteration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountInIteration_MetaData), NewProp_AmountInIteration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaminaComponent_Statics::NewProp_InFirstDelayRecover = { "InFirstDelayRecover", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaminaComponent, InFirstDelayRecover), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFirstDelayRecover_MetaData), NewProp_InFirstDelayRecover_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaminaComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_StaminaRecoverRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_AmountInIteration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaminaComponent_Statics::NewProp_InFirstDelayRecover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaComponent_Statics::ClassParams = {
	&UStaminaComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStaminaComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaminaComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaminaComponent()
{
	if (!Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton, Z_Construct_UClass_UStaminaComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaminaComponent.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<UStaminaComponent>()
{
	return UStaminaComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaComponent);
UStaminaComponent::~UStaminaComponent() {}
// End Class UStaminaComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Components_StaminaComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaComponent, UStaminaComponent::StaticClass, TEXT("UStaminaComponent"), &Z_Registration_Info_UClass_UStaminaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaComponent), 4231307963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Components_StaminaComponent_h_1785875325(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Components_StaminaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Components_StaminaComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
