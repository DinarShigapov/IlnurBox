// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HalfHealthTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ILNURBOX_HalfHealthTrigger_generated_h
#error "HalfHealthTrigger.generated.h already included, missing '#pragma once' in HalfHealthTrigger.h"
#endif
#define ILNURBOX_HalfHealthTrigger_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartEvent);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHalfHealthTrigger(); \
	friend struct Z_Construct_UClass_AHalfHealthTrigger_Statics; \
public: \
	DECLARE_CLASS(AHalfHealthTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(AHalfHealthTrigger)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHalfHealthTrigger(AHalfHealthTrigger&&); \
	AHalfHealthTrigger(const AHalfHealthTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHalfHealthTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHalfHealthTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHalfHealthTrigger) \
	NO_API virtual ~AHalfHealthTrigger();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_17_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class AHalfHealthTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_HalfHealthTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
