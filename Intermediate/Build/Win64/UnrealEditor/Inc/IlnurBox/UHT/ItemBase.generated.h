// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/ItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMainCharacter;
#ifdef ILNURBOX_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define ILNURBOX_ItemBase_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execSetQuantity); \
	DECLARE_FUNCTION(execIsFullItemStack); \
	DECLARE_FUNCTION(execGetItemSingleWeight); \
	DECLARE_FUNCTION(execGetItemStackWeight);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemBase(); \
	friend struct Z_Construct_UClass_UItemBase_Statics; \
public: \
	DECLARE_CLASS(UItemBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(UItemBase)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemBase(UItemBase&&); \
	UItemBase(const UItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemBase) \
	NO_API virtual ~UItemBase();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_14_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class UItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Items_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
