// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/NotePaper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotePaper() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ILNURBOX_API UClass* Z_Construct_UClass_ANotePaper();
ILNURBOX_API UClass* Z_Construct_UClass_ANotePaper_NoRegister();
ILNURBOX_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class ANotePaper
void ANotePaper::StaticRegisterNativesANotePaper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANotePaper);
UClass* Z_Construct_UClass_ANotePaper_NoRegister()
{
	return ANotePaper::StaticClass();
}
struct Z_Construct_UClass_ANotePaper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NotePaper.h" },
		{ "ModuleRelativePath", "Public/NotePaper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoteWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/NotePaper.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NoteWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANotePaper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANotePaper_Statics::NewProp_NoteWidgetClass = { "NoteWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANotePaper, NoteWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoteWidgetClass_MetaData), NewProp_NoteWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANotePaper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANotePaper_Statics::NewProp_NoteWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANotePaper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANotePaper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANotePaper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANotePaper_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ANotePaper, IInteractInterface), false },  // 2867701864
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANotePaper_Statics::ClassParams = {
	&ANotePaper::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANotePaper_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANotePaper_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANotePaper_Statics::Class_MetaDataParams), Z_Construct_UClass_ANotePaper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANotePaper()
{
	if (!Z_Registration_Info_UClass_ANotePaper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANotePaper.OuterSingleton, Z_Construct_UClass_ANotePaper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANotePaper.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<ANotePaper>()
{
	return ANotePaper::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANotePaper);
ANotePaper::~ANotePaper() {}
// End Class ANotePaper

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_NotePaper_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANotePaper, ANotePaper::StaticClass, TEXT("ANotePaper"), &Z_Registration_Info_UClass_ANotePaper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANotePaper), 2984690523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_NotePaper_h_2402025777(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_NotePaper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_NotePaper_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
