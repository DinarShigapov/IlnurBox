// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnCubeTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ILNURBOX_SpawnCubeTrigger_generated_h
#error "SpawnCubeTrigger.generated.h already included, missing '#pragma once' in SpawnCubeTrigger.h"
#endif
#define ILNURBOX_SpawnCubeTrigger_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartEvent);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnCubeTrigger(); \
	friend struct Z_Construct_UClass_ASpawnCubeTrigger_Statics; \
public: \
	DECLARE_CLASS(ASpawnCubeTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(ASpawnCubeTrigger)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnCubeTrigger(ASpawnCubeTrigger&&); \
	ASpawnCubeTrigger(const ASpawnCubeTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnCubeTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnCubeTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnCubeTrigger) \
	NO_API virtual ~ASpawnCubeTrigger();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_16_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class ASpawnCubeTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_SpawnCubeTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
