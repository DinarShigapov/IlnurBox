// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hammer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_Hammer_generated_h
#error "Hammer.generated.h already included, missing '#pragma once' in Hammer.h"
#endif
#define ILNURBOX_Hammer_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Hammer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHammer(); \
	friend struct Z_Construct_UClass_AHammer_Statics; \
public: \
	DECLARE_CLASS(AHammer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(AHammer) \
	virtual UObject* _getUObject() const override { return const_cast<AHammer*>(this); }


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Hammer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHammer(AHammer&&); \
	AHammer(const AHammer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHammer) \
	NO_API virtual ~AHammer();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Hammer_h_12_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Hammer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Hammer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Hammer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class AHammer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Hammer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
