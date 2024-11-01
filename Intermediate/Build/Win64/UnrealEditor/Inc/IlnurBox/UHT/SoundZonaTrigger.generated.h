// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundZonaTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ILNURBOX_SoundZonaTrigger_generated_h
#error "SoundZonaTrigger.generated.h already included, missing '#pragma once' in SoundZonaTrigger.h"
#endif
#define ILNURBOX_SoundZonaTrigger_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartEvent);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoundZonaTrigger(); \
	friend struct Z_Construct_UClass_ASoundZonaTrigger_Statics; \
public: \
	DECLARE_CLASS(ASoundZonaTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(ASoundZonaTrigger)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASoundZonaTrigger(ASoundZonaTrigger&&); \
	ASoundZonaTrigger(const ASoundZonaTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoundZonaTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoundZonaTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoundZonaTrigger) \
	NO_API virtual ~ASoundZonaTrigger();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_18_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class ASoundZonaTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SoundZonaTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
