// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/BananaActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBananaActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_ABananaActor();
ILNURBOX_API UClass* Z_Construct_UClass_ABananaActor_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ABananaActor
void ABananaActor::StaticRegisterNativesABananaActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABananaActor);
UClass* Z_Construct_UClass_ABananaActor_NoRegister()
{
	return ABananaActor::StaticClass();
}
struct Z_Construct_UClass_ABananaActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BananaActor.h" },
		{ "ModuleRelativePath", "BananaActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABananaActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABananaActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABananaActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABananaActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ABananaActor, IInteractInterface), false },  // 4080532227
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABananaActor_Statics::ClassParams = {
	&ABananaActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABananaActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABananaActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABananaActor()
{
	if (!Z_Registration_Info_UClass_ABananaActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABananaActor.OuterSingleton, Z_Construct_UClass_ABananaActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABananaActor.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ABananaActor>()
{
	return ABananaActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABananaActor);
ABananaActor::~ABananaActor() {}
// End Class ABananaActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BananaActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABananaActor, ABananaActor::StaticClass, TEXT("ABananaActor"), &Z_Registration_Info_UClass_ABananaActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABananaActor), 1356619036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BananaActor_h_474194310(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BananaActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_BananaActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
