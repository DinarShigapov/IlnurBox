// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/FirstKit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstKit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_AFirstKit();
ILNURBOX_API UClass* Z_Construct_UClass_AFirstKit_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class AFirstKit
void AFirstKit::StaticRegisterNativesAFirstKit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstKit);
UClass* Z_Construct_UClass_AFirstKit_NoRegister()
{
	return AFirstKit::StaticClass();
}
struct Z_Construct_UClass_AFirstKit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FirstKit.h" },
		{ "ModuleRelativePath", "Public/FirstKit.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstKit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFirstKit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstKit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFirstKit_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AFirstKit, IInteractInterface), false },  // 2867701864
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstKit_Statics::ClassParams = {
	&AFirstKit::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstKit_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstKit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFirstKit()
{
	if (!Z_Registration_Info_UClass_AFirstKit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstKit.OuterSingleton, Z_Construct_UClass_AFirstKit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFirstKit.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<AFirstKit>()
{
	return AFirstKit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstKit);
AFirstKit::~AFirstKit() {}
// End Class AFirstKit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFirstKit, AFirstKit::StaticClass, TEXT("AFirstKit"), &Z_Registration_Info_UClass_AFirstKit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstKit), 653706551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_3330992305(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
