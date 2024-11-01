// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/HalfHealthTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalfHealthTrigger() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ILNURBOX_API UClass* Z_Construct_UClass_ABlockedActorTrigger_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_AHalfHealthTrigger();
ILNURBOX_API UClass* Z_Construct_UClass_AHalfHealthTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class AHalfHealthTrigger Function StartEvent
struct Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics
{
	struct HalfHealthTrigger_eventStartEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HalfHealthTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HalfHealthTrigger_eventStartEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HalfHealthTrigger_eventStartEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHalfHealthTrigger, nullptr, "StartEvent", nullptr, nullptr, Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::HalfHealthTrigger_eventStartEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::HalfHealthTrigger_eventStartEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHalfHealthTrigger_StartEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHalfHealthTrigger_StartEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHalfHealthTrigger::execStartEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEvent(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class AHalfHealthTrigger Function StartEvent

// Begin Class AHalfHealthTrigger
void AHalfHealthTrigger::StaticRegisterNativesAHalfHealthTrigger()
{
	UClass* Class = AHalfHealthTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartEvent", &AHalfHealthTrigger::execStartEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHalfHealthTrigger);
UClass* Z_Construct_UClass_AHalfHealthTrigger_NoRegister()
{
	return AHalfHealthTrigger::StaticClass();
}
struct Z_Construct_UClass_AHalfHealthTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HalfHealthTrigger.h" },
		{ "ModuleRelativePath", "HalfHealthTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerConnect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "HalfHealthTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerConnect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHalfHealthTrigger_StartEvent, "StartEvent" }, // 4185685499
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfHealthTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfHealthTrigger_Statics::NewProp_TriggerConnect = { "TriggerConnect", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfHealthTrigger, TriggerConnect), Z_Construct_UClass_ABlockedActorTrigger_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerConnect_MetaData), NewProp_TriggerConnect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHalfHealthTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfHealthTrigger_Statics::NewProp_TriggerConnect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfHealthTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHalfHealthTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfHealthTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalfHealthTrigger_Statics::ClassParams = {
	&AHalfHealthTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHalfHealthTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHalfHealthTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfHealthTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalfHealthTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHalfHealthTrigger()
{
	if (!Z_Registration_Info_UClass_AHalfHealthTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalfHealthTrigger.OuterSingleton, Z_Construct_UClass_AHalfHealthTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalfHealthTrigger.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<AHalfHealthTrigger>()
{
	return AHalfHealthTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfHealthTrigger);
AHalfHealthTrigger::~AHalfHealthTrigger() {}
// End Class AHalfHealthTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalfHealthTrigger, AHalfHealthTrigger::StaticClass, TEXT("AHalfHealthTrigger"), &Z_Registration_Info_UClass_AHalfHealthTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalfHealthTrigger), 2031875006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_1147405277(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
