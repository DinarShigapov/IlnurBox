// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/Lock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLock() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_ALock();
ILNURBOX_API UClass* Z_Construct_UClass_ALock_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ALock
void ALock::StaticRegisterNativesALock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALock);
UClass* Z_Construct_UClass_ALock_NoRegister()
{
	return ALock::StaticClass();
}
struct Z_Construct_UClass_ALock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lock.h" },
		{ "ModuleRelativePath", "Public/Lock.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALock_Statics::ClassParams = {
	&ALock::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::Class_MetaDataParams), Z_Construct_UClass_ALock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALock()
{
	if (!Z_Registration_Info_UClass_ALock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALock.OuterSingleton, Z_Construct_UClass_ALock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALock.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ALock>()
{
	return ALock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALock);
ALock::~ALock() {}
// End Class ALock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Lock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALock, ALock::StaticClass, TEXT("ALock"), &Z_Registration_Info_UClass_ALock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALock), 1590774080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Lock_h_881254425(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Lock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Lock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
