// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Potion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_Potion_generated_h
#error "Potion.generated.h already included, missing '#pragma once' in Potion.h"
#endif
#define ILNURBOX_Potion_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Potion_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPotion(); \
	friend struct Z_Construct_UClass_APotion_Statics; \
public: \
	DECLARE_CLASS(APotion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(APotion) \
	virtual UObject* _getUObject() const override { return const_cast<APotion*>(this); }


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Potion_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APotion(APotion&&); \
	APotion(const APotion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APotion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APotion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APotion) \
	NO_API virtual ~APotion();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Potion_h_11_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Potion_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Potion_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Potion_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class APotion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Potion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
