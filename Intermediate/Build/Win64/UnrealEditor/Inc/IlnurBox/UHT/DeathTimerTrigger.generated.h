// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeathTimerTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ILNURBOX_DeathTimerTrigger_generated_h
#error "DeathTimerTrigger.generated.h already included, missing '#pragma once' in DeathTimerTrigger.h"
#endif
#define ILNURBOX_DeathTimerTrigger_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndEvent); \
	DECLARE_FUNCTION(execStartEvent);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathTimerTrigger(); \
	friend struct Z_Construct_UClass_ADeathTimerTrigger_Statics; \
public: \
	DECLARE_CLASS(ADeathTimerTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(ADeathTimerTrigger)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeathTimerTrigger(ADeathTimerTrigger&&); \
	ADeathTimerTrigger(const ADeathTimerTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathTimerTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathTimerTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathTimerTrigger) \
	NO_API virtual ~ADeathTimerTrigger();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_16_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class ADeathTimerTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_DeathTimerTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
