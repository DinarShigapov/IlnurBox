// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef ILNURBOX_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define ILNURBOX_MainCharacter_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInteractWithActor); \
	DECLARE_FUNCTION(execSpawnObject); \
	DECLARE_FUNCTION(execStopRun); \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execMove);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMainCharacter*>(this); }


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainCharacter(AMainCharacter&&); \
	AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_27_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_30_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
