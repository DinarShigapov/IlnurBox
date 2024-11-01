// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/BlockedActorTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockedActorTrigger() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ILNURBOX_API UClass* Z_Construct_UClass_ABlockedActorTrigger();
ILNURBOX_API UClass* Z_Construct_UClass_ABlockedActorTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ABlockedActorTrigger Function EndEvent
struct Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics
{
	struct BlockedActorTrigger_eventEndEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlockedActorTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockedActorTrigger_eventEndEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockedActorTrigger_eventEndEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockedActorTrigger, nullptr, "EndEvent", nullptr, nullptr, Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::BlockedActorTrigger_eventEndEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::BlockedActorTrigger_eventEndEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlockedActorTrigger_EndEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockedActorTrigger_EndEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockedActorTrigger::execEndEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndEvent(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ABlockedActorTrigger Function EndEvent

// Begin Class ABlockedActorTrigger Function StartEvent
struct Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics
{
	struct BlockedActorTrigger_eventStartEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlockedActorTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockedActorTrigger_eventStartEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockedActorTrigger_eventStartEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockedActorTrigger, nullptr, "StartEvent", nullptr, nullptr, Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::BlockedActorTrigger_eventStartEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::BlockedActorTrigger_eventStartEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlockedActorTrigger_StartEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockedActorTrigger_StartEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockedActorTrigger::execStartEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEvent(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ABlockedActorTrigger Function StartEvent

// Begin Class ABlockedActorTrigger
void ABlockedActorTrigger::StaticRegisterNativesABlockedActorTrigger()
{
	UClass* Class = ABlockedActorTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndEvent", &ABlockedActorTrigger::execEndEvent },
		{ "StartEvent", &ABlockedActorTrigger::execStartEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlockedActorTrigger);
UClass* Z_Construct_UClass_ABlockedActorTrigger_NoRegister()
{
	return ABlockedActorTrigger::StaticClass();
}
struct Z_Construct_UClass_ABlockedActorTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BlockedActorTrigger.h" },
		{ "ModuleRelativePath", "BlockedActorTrigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockedActorTrigger_EndEvent, "EndEvent" }, // 4087195036
		{ &Z_Construct_UFunction_ABlockedActorTrigger_StartEvent, "StartEvent" }, // 2298819515
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockedActorTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABlockedActorTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockedActorTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlockedActorTrigger_Statics::ClassParams = {
	&ABlockedActorTrigger::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockedActorTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlockedActorTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlockedActorTrigger()
{
	if (!Z_Registration_Info_UClass_ABlockedActorTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlockedActorTrigger.OuterSingleton, Z_Construct_UClass_ABlockedActorTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlockedActorTrigger.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ABlockedActorTrigger>()
{
	return ABlockedActorTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockedActorTrigger);
ABlockedActorTrigger::~ABlockedActorTrigger() {}
// End Class ABlockedActorTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BlockedActorTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlockedActorTrigger, ABlockedActorTrigger::StaticClass, TEXT("ABlockedActorTrigger"), &Z_Registration_Info_UClass_ABlockedActorTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlockedActorTrigger), 2805485307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BlockedActorTrigger_h_3219159148(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BlockedActorTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BlockedActorTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
