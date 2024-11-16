// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIlnurBox_init() {}
	ILNURBOX_API UFunction* Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_IlnurBox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_IlnurBox()
	{
		if (!Z_Registration_Info_UPackage__Script_IlnurBox.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_IlnurBox_OnDeath__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/IlnurBox",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC6093937,
				0xE32A13B5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_IlnurBox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_IlnurBox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_IlnurBox(Z_Construct_UPackage__Script_IlnurBox, TEXT("/Script/IlnurBox"), Z_Registration_Info_UPackage__Script_IlnurBox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC6093937, 0xE32A13B5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
