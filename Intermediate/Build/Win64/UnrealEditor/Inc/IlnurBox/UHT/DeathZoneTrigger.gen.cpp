// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/DeathZoneTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathZoneTrigger() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ILNURBOX_API UClass* Z_Construct_UClass_ADeathZoneTrigger();
ILNURBOX_API UClass* Z_Construct_UClass_ADeathZoneTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ADeathZoneTrigger Function EndEventTimer
struct Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics
{
	struct DeathZoneTrigger_eventEndEventTimer_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DeathZoneTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathZoneTrigger_eventEndEventTimer_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathZoneTrigger_eventEndEventTimer_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathZoneTrigger, nullptr, "EndEventTimer", nullptr, nullptr, Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::DeathZoneTrigger_eventEndEventTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::DeathZoneTrigger_eventEndEventTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADeathZoneTrigger::execEndEventTimer)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndEventTimer(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ADeathZoneTrigger Function EndEventTimer

// Begin Class ADeathZoneTrigger Function Event
struct Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics
{
	struct DeathZoneTrigger_eventEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DeathZoneTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathZoneTrigger_eventEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathZoneTrigger_eventEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathZoneTrigger, nullptr, "Event", nullptr, nullptr, Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::DeathZoneTrigger_eventEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::DeathZoneTrigger_eventEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADeathZoneTrigger_Event()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeathZoneTrigger_Event_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADeathZoneTrigger::execEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Event(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ADeathZoneTrigger Function Event

// Begin Class ADeathZoneTrigger
void ADeathZoneTrigger::StaticRegisterNativesADeathZoneTrigger()
{
	UClass* Class = ADeathZoneTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndEventTimer", &ADeathZoneTrigger::execEndEventTimer },
		{ "Event", &ADeathZoneTrigger::execEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeathZoneTrigger);
UClass* Z_Construct_UClass_ADeathZoneTrigger_NoRegister()
{
	return ADeathZoneTrigger::StaticClass();
}
struct Z_Construct_UClass_ADeathZoneTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DeathZoneTrigger.h" },
		{ "ModuleRelativePath", "DeathZoneTrigger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeathZoneTrigger_EndEventTimer, "EndEventTimer" }, // 725930801
		{ &Z_Construct_UFunction_ADeathZoneTrigger_Event, "Event" }, // 17005140
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathZoneTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADeathZoneTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeathZoneTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeathZoneTrigger_Statics::ClassParams = {
	&ADeathZoneTrigger::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeathZoneTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeathZoneTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeathZoneTrigger()
{
	if (!Z_Registration_Info_UClass_ADeathZoneTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeathZoneTrigger.OuterSingleton, Z_Construct_UClass_ADeathZoneTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeathZoneTrigger.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ADeathZoneTrigger>()
{
	return ADeathZoneTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathZoneTrigger);
ADeathZoneTrigger::~ADeathZoneTrigger() {}
// End Class ADeathZoneTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeathZoneTrigger, ADeathZoneTrigger::StaticClass, TEXT("ADeathZoneTrigger"), &Z_Registration_Info_UClass_ADeathZoneTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeathZoneTrigger), 3938864354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_882960524(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
