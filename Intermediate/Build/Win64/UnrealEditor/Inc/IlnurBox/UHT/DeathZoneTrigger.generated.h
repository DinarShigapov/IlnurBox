// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeathZoneTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ILNURBOX_DeathZoneTrigger_generated_h
#error "DeathZoneTrigger.generated.h already included, missing '#pragma once' in DeathZoneTrigger.h"
#endif
#define ILNURBOX_DeathZoneTrigger_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndEventTimer); \
	DECLARE_FUNCTION(execEvent);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathZoneTrigger(); \
	friend struct Z_Construct_UClass_ADeathZoneTrigger_Statics; \
public: \
	DECLARE_CLASS(ADeathZoneTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(ADeathZoneTrigger)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeathZoneTrigger(ADeathZoneTrigger&&); \
	ADeathZoneTrigger(const ADeathZoneTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathZoneTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathZoneTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathZoneTrigger) \
	NO_API virtual ~ADeathZoneTrigger();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_17_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class ADeathZoneTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathZoneTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
