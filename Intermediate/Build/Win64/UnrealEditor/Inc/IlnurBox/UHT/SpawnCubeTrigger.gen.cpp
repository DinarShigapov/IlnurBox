// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/SpawnCubeTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnCubeTrigger() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ILNURBOX_API UClass* Z_Construct_UClass_ASpawnCubeTrigger();
ILNURBOX_API UClass* Z_Construct_UClass_ASpawnCubeTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ASpawnCubeTrigger Function StartEvent
struct Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics
{
	struct SpawnCubeTrigger_eventStartEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnCubeTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnCubeTrigger_eventStartEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnCubeTrigger_eventStartEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnCubeTrigger, nullptr, "StartEvent", nullptr, nullptr, Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::SpawnCubeTrigger_eventStartEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::SpawnCubeTrigger_eventStartEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnCubeTrigger::execStartEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEvent(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ASpawnCubeTrigger Function StartEvent

// Begin Class ASpawnCubeTrigger
void ASpawnCubeTrigger::StaticRegisterNativesASpawnCubeTrigger()
{
	UClass* Class = ASpawnCubeTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartEvent", &ASpawnCubeTrigger::execStartEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnCubeTrigger);
UClass* Z_Construct_UClass_ASpawnCubeTrigger_NoRegister()
{
	return ASpawnCubeTrigger::StaticClass();
}
struct Z_Construct_UClass_ASpawnCubeTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpawnCubeTrigger.h" },
		{ "ModuleRelativePath", "SpawnCubeTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "SpawnCubeTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnCubeTrigger_StartEvent, "StartEvent" }, // 3215743758
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnCubeTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnCubeTrigger_Statics::NewProp_SpawnActor = { "SpawnActor", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnCubeTrigger, SpawnActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnActor_MetaData), NewProp_SpawnActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnCubeTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnCubeTrigger_Statics::NewProp_SpawnActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnCubeTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnCubeTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnCubeTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnCubeTrigger_Statics::ClassParams = {
	&ASpawnCubeTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnCubeTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnCubeTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnCubeTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnCubeTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnCubeTrigger()
{
	if (!Z_Registration_Info_UClass_ASpawnCubeTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnCubeTrigger.OuterSingleton, Z_Construct_UClass_ASpawnCubeTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnCubeTrigger.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ASpawnCubeTrigger>()
{
	return ASpawnCubeTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnCubeTrigger);
ASpawnCubeTrigger::~ASpawnCubeTrigger() {}
// End Class ASpawnCubeTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnCubeTrigger, ASpawnCubeTrigger::StaticClass, TEXT("ASpawnCubeTrigger"), &Z_Registration_Info_UClass_ASpawnCubeTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnCubeTrigger), 1255283881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_244606803(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
