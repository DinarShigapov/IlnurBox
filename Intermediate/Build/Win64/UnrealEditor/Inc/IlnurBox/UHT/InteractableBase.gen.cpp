// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/InteractableBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_AInteractableBase();
ILNURBOX_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class AInteractableBase
void AInteractableBase::StaticRegisterNativesAInteractableBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableBase);
UClass* Z_Construct_UClass_AInteractableBase_NoRegister()
{
	return AInteractableBase::StaticClass();
}
struct Z_Construct_UClass_AInteractableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableBase.h" },
		{ "ModuleRelativePath", "InteractableBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableBase_Statics::ClassParams = {
	&AInteractableBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableBase()
{
	if (!Z_Registration_Info_UClass_AInteractableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableBase.OuterSingleton, Z_Construct_UClass_AInteractableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableBase.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<AInteractableBase>()
{
	return AInteractableBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableBase);
AInteractableBase::~AInteractableBase() {}
// End Class AInteractableBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_InteractableBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableBase, AInteractableBase::StaticClass, TEXT("AInteractableBase"), &Z_Registration_Info_UClass_AInteractableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableBase), 1753540386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_InteractableBase_h_555881365(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_InteractableBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_InteractableBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
