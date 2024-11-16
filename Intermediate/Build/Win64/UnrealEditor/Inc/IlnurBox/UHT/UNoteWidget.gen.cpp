// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/Public/UNoteWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNoteWidget() {}

// Begin Cross Module References
ILNURBOX_API UClass* Z_Construct_UClass_UUNoteWidget();
ILNURBOX_API UClass* Z_Construct_UClass_UUNoteWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Class UUNoteWidget
void UUNoteWidget::StaticRegisterNativesUUNoteWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUNoteWidget);
UClass* Z_Construct_UClass_UUNoteWidget_NoRegister()
{
	return UUNoteWidget::StaticClass();
}
struct Z_Construct_UClass_UUNoteWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UNoteWidget.h" },
		{ "ModuleRelativePath", "Public/UNoteWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUNoteWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUNoteWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_IlnurBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUNoteWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUNoteWidget_Statics::ClassParams = {
	&UUNoteWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUNoteWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUNoteWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUNoteWidget()
{
	if (!Z_Registration_Info_UClass_UUNoteWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUNoteWidget.OuterSingleton, Z_Construct_UClass_UUNoteWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUNoteWidget.OuterSingleton;
}
template<> ILNURBOX_API UClass* StaticClass<UUNoteWidget>()
{
	return UUNoteWidget::StaticClass();
}
UUNoteWidget::UUNoteWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUNoteWidget);
UUNoteWidget::~UUNoteWidget() {}
// End Class UUNoteWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UNoteWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUNoteWidget, UUNoteWidget::StaticClass, TEXT("UUNoteWidget"), &Z_Registration_Info_UClass_UUNoteWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUNoteWidget), 2551143853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UNoteWidget_h_883741581(TEXT("/Script/IlnurBox"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UNoteWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UNoteWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
