// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/LightBulb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightBulb() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_ALightBulb();
ILNURBOX_API UClass* Z_Construct_UClass_ALightBulb_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ALightBulb
void ALightBulb::StaticRegisterNativesALightBulb()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightBulb);
UClass* Z_Construct_UClass_ALightBulb_NoRegister()
{
	return ALightBulb::StaticClass();
}
struct Z_Construct_UClass_ALightBulb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LightBulb.h" },
		{ "ModuleRelativePath", "Public/LightBulb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightBulb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightBulb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightBulb_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightBulb, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLight_MetaData), NewProp_PointLight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightBulb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightBulb_Statics::NewProp_PointLight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALightBulb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightBulb_Statics::ClassParams = {
	&ALightBulb::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALightBulb_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightBulb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALightBulb()
{
	if (!Z_Registration_Info_UClass_ALightBulb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightBulb.OuterSingleton, Z_Construct_UClass_ALightBulb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALightBulb.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ALightBulb>()
{
	return ALightBulb::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALightBulb);
ALightBulb::~ALightBulb() {}
// End Class ALightBulb

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightBulb_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALightBulb, ALightBulb::StaticClass, TEXT("ALightBulb"), &Z_Registration_Info_UClass_ALightBulb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightBulb), 3370442528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightBulb_h_3320284579(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightBulb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightBulb_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
