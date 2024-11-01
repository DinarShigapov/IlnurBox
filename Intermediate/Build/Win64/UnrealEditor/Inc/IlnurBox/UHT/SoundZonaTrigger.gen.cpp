// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/SoundZonaTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundZonaTrigger() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_ASoundZonaTrigger();
ILNURBOX_API UClass* Z_Construct_UClass_ASoundZonaTrigger_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ASoundZonaTrigger Function StartEvent
struct Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics
{
	struct SoundZonaTrigger_eventStartEvent_Parms
	{
		AActor* overlappedActor;
		AActor* otherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SoundZonaTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundZonaTrigger_eventStartEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SoundZonaTrigger_eventStartEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::NewProp_overlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::NewProp_otherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASoundZonaTrigger, nullptr, "StartEvent", nullptr, nullptr, Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::SoundZonaTrigger_eventStartEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::SoundZonaTrigger_eventStartEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASoundZonaTrigger_StartEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASoundZonaTrigger_StartEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASoundZonaTrigger::execStartEvent)
{
	P_GET_OBJECT(AActor,Z_Param_overlappedActor);
	P_GET_OBJECT(AActor,Z_Param_otherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEvent(Z_Param_overlappedActor,Z_Param_otherActor);
	P_NATIVE_END;
}
// End Class ASoundZonaTrigger Function StartEvent

// Begin Class ASoundZonaTrigger
void ASoundZonaTrigger::StaticRegisterNativesASoundZonaTrigger()
{
	UClass* Class = ASoundZonaTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartEvent", &ASoundZonaTrigger::execStartEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoundZonaTrigger);
UClass* Z_Construct_UClass_ASoundZonaTrigger_NoRegister()
{
	return ASoundZonaTrigger::StaticClass();
}
struct Z_Construct_UClass_ASoundZonaTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SoundZonaTrigger.h" },
		{ "ModuleRelativePath", "SoundZonaTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "SoundZonaTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASoundZonaTrigger_StartEvent, "StartEvent" }, // 3048962880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoundZonaTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoundZonaTrigger_Statics::NewProp_SoundTrigger = { "SoundTrigger", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoundZonaTrigger, SoundTrigger), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundTrigger_MetaData), NewProp_SoundTrigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoundZonaTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoundZonaTrigger_Statics::NewProp_SoundTrigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoundZonaTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoundZonaTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoundZonaTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoundZonaTrigger_Statics::ClassParams = {
	&ASoundZonaTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASoundZonaTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoundZonaTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoundZonaTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoundZonaTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoundZonaTrigger()
{
	if (!Z_Registration_Info_UClass_ASoundZonaTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoundZonaTrigger.OuterSingleton, Z_Construct_UClass_ASoundZonaTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoundZonaTrigger.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ASoundZonaTrigger>()
{
	return ASoundZonaTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoundZonaTrigger);
ASoundZonaTrigger::~ASoundZonaTrigger() {}
// End Class ASoundZonaTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoundZonaTrigger, ASoundZonaTrigger::StaticClass, TEXT("ASoundZonaTrigger"), &Z_Registration_Info_UClass_ASoundZonaTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoundZonaTrigger), 394699769U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_237976011(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
