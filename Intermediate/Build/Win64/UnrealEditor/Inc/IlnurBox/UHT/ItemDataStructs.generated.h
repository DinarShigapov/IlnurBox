// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ItemDataStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_ItemDataStructs_generated_h
#error "ItemDataStructs.generated.h already included, missing '#pragma once' in ItemDataStructs.h"
#endif
#define ILNURBOX_ItemDataStructs_generated_h

#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Data_ItemDataStructs_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStatistics_Statics; \
	ILNURBOX_API static class UScriptStruct* StaticStruct();


template<> ILNURBOX_API UScriptStruct* StaticStruct<struct FItemStatistics>();

#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Data_ItemDataStructs_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemTextData_Statics; \
	ILNURBOX_API static class UScriptStruct* StaticStruct();


template<> ILNURBOX_API UScriptStruct* StaticStruct<struct FItemTextData>();

#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Data_ItemDataStructs_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemNumericData_Statics; \
	ILNURBOX_API static class UScriptStruct* StaticStruct();


template<> ILNURBOX_API UScriptStruct* StaticStruct<struct FItemNumericData>();

#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Data_ItemDataStructs_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAssetData_Statics; \
	ILNURBOX_API static class UScriptStruct* StaticStruct();


template<> ILNURBOX_API UScriptStruct* StaticStruct<struct FItemAssetData>();

#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Data_ItemDataStructs_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	ILNURBOX_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> ILNURBOX_API UScriptStruct* StaticStruct<struct FItemData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Data_ItemDataStructs_h


#define FOREACH_ENUM_EITEMQUALITY(op) \
	op(EItemQuality::None) \
	op(EItemQuality::Shoddy) \
	op(EItemQuality::Common) \
	op(EItemQuality::Quality) \
	op(EItemQuality::Masterwork) 

enum class EItemQuality : uint8;
template<> struct TIsUEnumClass<EItemQuality> { enum { Value = true }; };
template<> ILNURBOX_API UEnum* StaticEnum<EItemQuality>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Weapon) \
	op(EItemType::Tool) \
	op(EItemType::Spell) \
	op(EItemType::Consumable) \
	op(EItemType::Quest) \
	op(EItemType::Mundane) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> ILNURBOX_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
