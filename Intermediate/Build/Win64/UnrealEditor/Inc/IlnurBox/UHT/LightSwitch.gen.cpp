// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/LightSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitch() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_ALightBulb_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_ALightSwitch();
ILNURBOX_API UClass* Z_Construct_UClass_ALightSwitch_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ALightSwitch
void ALightSwitch::StaticRegisterNativesALightSwitch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightSwitch);
UClass* Z_Construct_UClass_ALightSwitch_NoRegister()
{
	return ALightSwitch::StaticClass();
}
struct Z_Construct_UClass_ALightSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LightSwitch.h" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightBulb_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Light" },
		{ "ModuleRelativePath", "LightSwitch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightBulb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightSwitch_Statics::NewProp_LightBulb = { "LightBulb", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightSwitch, LightBulb), Z_Construct_UClass_ALightBulb_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightBulb_MetaData), NewProp_LightBulb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightSwitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightSwitch_Statics::NewProp_LightBulb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALightSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALightSwitch_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ALightSwitch, IInteractInterface), false },  // 4080532227
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightSwitch_Statics::ClassParams = {
	&ALightSwitch::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALightSwitch_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightSwitch()
{
	if (!Z_Registration_Info_UClass_ALightSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightSwitch.OuterSingleton, Z_Construct_UClass_ALightSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightSwitch.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ALightSwitch>()
{
	return ALightSwitch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitch);
ALightSwitch::~ALightSwitch() {}
// End Class ALightSwitch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_LightSwitch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightSwitch, ALightSwitch::StaticClass, TEXT("ALightSwitch"), &Z_Registration_Info_UClass_ALightSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightSwitch), 1079229795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_LightSwitch_h_3948454083(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_LightSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_LightSwitch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
