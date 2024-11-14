// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/Potion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotion() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_APotion();
ILNURBOX_API UClass* Z_Construct_UClass_APotion_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class APotion
void APotion::StaticRegisterNativesAPotion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APotion);
UClass* Z_Construct_UClass_APotion_NoRegister()
{
	return APotion::StaticClass();
}
struct Z_Construct_UClass_APotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Potion.h" },
		{ "ModuleRelativePath", "Public/Potion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APotion_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(APotion, IInteractInterface), false },  // 2867701864
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APotion_Statics::ClassParams = {
	&APotion::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APotion_Statics::Class_MetaDataParams), Z_Construct_UClass_APotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APotion()
{
	if (!Z_Registration_Info_UClass_APotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APotion.OuterSingleton, Z_Construct_UClass_APotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APotion.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<APotion>()
{
	return APotion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APotion);
APotion::~APotion() {}
// End Class APotion

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Potion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APotion, APotion::StaticClass, TEXT("APotion"), &Z_Registration_Info_UClass_APotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APotion), 37589987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Potion_h_499051431(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Potion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Potion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
