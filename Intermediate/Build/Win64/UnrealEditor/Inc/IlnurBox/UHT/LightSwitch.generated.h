// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_LightSwitch_generated_h
#error "LightSwitch.generated.h already included, missing '#pragma once' in LightSwitch.h"
#endif
#define ILNURBOX_LightSwitch_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightSwitch_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitch(); \
	friend struct Z_Construct_UClass_ALightSwitch_Statics; \
public: \
	DECLARE_CLASS(ALightSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitch) \
	virtual UObject* _getUObject() const override { return const_cast<ALightSwitch*>(this); }


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightSwitch_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALightSwitch(ALightSwitch&&); \
	ALightSwitch(const ALightSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitch) \
	NO_API virtual ~ALightSwitch();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightSwitch_h_13_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightSwitch_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightSwitch_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightSwitch_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class ALightSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_LightSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
