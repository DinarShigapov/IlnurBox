// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstKit.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_FirstKit_generated_h
#error "FirstKit.generated.h already included, missing '#pragma once' in FirstKit.h"
#endif
#define ILNURBOX_FirstKit_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstKit(); \
	friend struct Z_Construct_UClass_AFirstKit_Statics; \
public: \
	DECLARE_CLASS(AFirstKit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(AFirstKit) \
	virtual UObject* _getUObject() const override { return const_cast<AFirstKit*>(this); }


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFirstKit(AFirstKit&&); \
	AFirstKit(const AFirstKit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstKit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstKit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstKit) \
	NO_API virtual ~AFirstKit();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_12_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class AFirstKit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_FirstKit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
