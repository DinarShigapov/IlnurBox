// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IlnurBox/CharacterState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterState() {}

// Begin Cross Module References
ILNURBOX_API UEnum* Z_Construct_UEnum_IlnurBox_EChatacterState();
UPackage* Z_Construct_UPackage__Script_IlnurBox();
// End Cross Module References

// Begin Enum EChatacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChatacterState;
static UEnum* EChatacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChatacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChatacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IlnurBox_EChatacterState, (UObject*)Z_Construct_UPackage__Script_IlnurBox(), TEXT("EChatacterState"));
	}
	return Z_Registration_Info_UEnum_EChatacterState.OuterSingleton;
}
template<> ILNURBOX_API UEnum* StaticEnum<EChatacterState>()
{
	return EChatacterState_StaticEnum();
}
struct Z_Construct_UEnum_IlnurBox_EChatacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CharacterState.h" },
		{ "STAT_Crouch.Comment", "/**\n * \n */" },
		{ "STAT_Crouch.DisplayName", "Crouch" },
		{ "STAT_Crouch.Name", "STAT_Crouch" },
		{ "STAT_CrouchWalk.Comment", "/**\n * \n */" },
		{ "STAT_CrouchWalk.DisplayName", "CrouchWalk" },
		{ "STAT_CrouchWalk.Name", "STAT_CrouchWalk" },
		{ "STAT_Idle.Comment", "/**\n * \n */" },
		{ "STAT_Idle.DisplayName", "Idle" },
		{ "STAT_Idle.Name", "STAT_Idle" },
		{ "STAT_Jump.Comment", "/**\n * \n */" },
		{ "STAT_Jump.DisplayName", "Jump" },
		{ "STAT_Jump.Name", "STAT_Jump" },
		{ "STAT_Run.Comment", "/**\n * \n */" },
		{ "STAT_Run.DisplayName", "Run" },
		{ "STAT_Run.Name", "STAT_Run" },
		{ "STAT_Walk.Comment", "/**\n * \n */" },
		{ "STAT_Walk.DisplayName", "Walk" },
		{ "STAT_Walk.Name", "STAT_Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "STAT_Idle", (int64)STAT_Idle },
		{ "STAT_Walk", (int64)STAT_Walk },
		{ "STAT_Run", (int64)STAT_Run },
		{ "STAT_Crouch", (int64)STAT_Crouch },
		{ "STAT_CrouchWalk", (int64)STAT_CrouchWalk },
		{ "STAT_Jump", (int64)STAT_Jump },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IlnurBox_EChatacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_IlnurBox,
	nullptr,
	"EChatacterState",
	"EChatacterState",
	Z_Construct_UEnum_IlnurBox_EChatacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_IlnurBox_EChatacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IlnurBox_EChatacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IlnurBox_EChatacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_IlnurBox_EChatacterState()
{
	if (!Z_Registration_Info_UEnum_EChatacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChatacterState.InnerSingleton, Z_Construct_UEnum_IlnurBox_EChatacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChatacterState.InnerSingleton;
}
// End Enum EChatacterState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_CharacterState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChatacterState_StaticEnum, TEXT("EChatacterState"), &Z_Registration_Info_UEnum_EChatacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 557789258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_CharacterState_h_759846602(TEXT("/Script/IlnurBox"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_CharacterState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_CharacterState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
