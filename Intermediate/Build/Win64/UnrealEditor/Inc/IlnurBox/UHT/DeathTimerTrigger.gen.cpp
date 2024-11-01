// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/DeathTimerTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathTimerTrigger() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ILNURBOX_API UClass* Z_Construct_UClass_ADeathTimerTrigger();
ILNURBOX_API UClass* Z_Construct_UClass_ADeathTimerTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ADeathTimerTrigger Function EndEvent
struct Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics
{
	struct DeathTimerTrigger_eventEndEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DeathTimerTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTimerTrigger_eventEndEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTimerTrigger_eventEndEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathTimerTrigger, nullptr, "EndEvent", nullptr, nullptr, Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::DeathTimerTrigger_eventEndEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::DeathTimerTrigger_eventEndEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADeathTimerTrigger_EndEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeathTimerTrigger_EndEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADeathTimerTrigger::execEndEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndEvent(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ADeathTimerTrigger Function EndEvent

// Begin Class ADeathTimerTrigger Function StartEvent
struct Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics
{
	struct DeathTimerTrigger_eventStartEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DeathTimerTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTimerTrigger_eventStartEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTimerTrigger_eventStartEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathTimerTrigger, nullptr, "StartEvent", nullptr, nullptr, Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::DeathTimerTrigger_eventStartEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::DeathTimerTrigger_eventStartEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADeathTimerTrigger_StartEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeathTimerTrigger_StartEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADeathTimerTrigger::execStartEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEvent(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ADeathTimerTrigger Function StartEvent

// Begin Class ADeathTimerTrigger
void ADeathTimerTrigger::StaticRegisterNativesADeathTimerTrigger()
{
	UClass* Class = ADeathTimerTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndEvent", &ADeathTimerTrigger::execEndEvent },
		{ "StartEvent", &ADeathTimerTrigger::execStartEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeathTimerTrigger);
UClass* Z_Construct_UClass_ADeathTimerTrigger_NoRegister()
{
	return ADeathTimerTrigger::StaticClass();
}
struct Z_Construct_UClass_ADeathTimerTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DeathTimerTrigger.h" },
		{ "ModuleRelativePath", "DeathTimerTrigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeathTimerTrigger_EndEvent, "EndEvent" }, // 1789727534
		{ &Z_Construct_UFunction_ADeathTimerTrigger_StartEvent, "StartEvent" }, // 3613885130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathTimerTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADeathTimerTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeathTimerTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeathTimerTrigger_Statics::ClassParams = {
	&ADeathTimerTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeathTimerTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeathTimerTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeathTimerTrigger()
{
	if (!Z_Registration_Info_UClass_ADeathTimerTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeathTimerTrigger.OuterSingleton, Z_Construct_UClass_ADeathTimerTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeathTimerTrigger.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ADeathTimerTrigger>()
{
	return ADeathTimerTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathTimerTrigger);
ADeathTimerTrigger::~ADeathTimerTrigger() {}
// End Class ADeathTimerTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeathTimerTrigger, ADeathTimerTrigger::StaticClass, TEXT("ADeathTimerTrigger"), &Z_Registration_Info_UClass_ADeathTimerTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeathTimerTrigger), 3294165050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_3662629612(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
