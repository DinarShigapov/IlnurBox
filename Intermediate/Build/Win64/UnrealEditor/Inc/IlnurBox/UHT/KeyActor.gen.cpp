// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/KeyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_AKeyActor();
ILNURBOX_API UClass* Z_Construct_UClass_AKeyActor_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class AKeyActor
void AKeyActor::StaticRegisterNativesAKeyActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeyActor);
UClass* Z_Construct_UClass_AKeyActor_NoRegister()
{
	return AKeyActor::StaticClass();
}
struct Z_Construct_UClass_AKeyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "KeyActor.h" },
		{ "ModuleRelativePath", "KeyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ID" },
		{ "ModuleRelativePath", "KeyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IdKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AKeyActor_Statics::NewProp_IdKey = { "IdKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKeyActor, IdKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdKey_MetaData), NewProp_IdKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyActor_Statics::NewProp_IdKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKeyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AKeyActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AKeyActor, IInteractInterface), false },  // 4080532227
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyActor_Statics::ClassParams = {
	&AKeyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKeyActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKeyActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKeyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AKeyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKeyActor()
{
	if (!Z_Registration_Info_UClass_AKeyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyActor.OuterSingleton, Z_Construct_UClass_AKeyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKeyActor.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<AKeyActor>()
{
	return AKeyActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyActor);
AKeyActor::~AKeyActor() {}
// End Class AKeyActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKeyActor, AKeyActor::StaticClass, TEXT("AKeyActor"), &Z_Registration_Info_UClass_AKeyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyActor), 2974815845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_2981194457(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
