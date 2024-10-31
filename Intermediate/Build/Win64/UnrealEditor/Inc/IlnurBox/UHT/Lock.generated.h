// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_Lock_generated_h
#error "Lock.generated.h already included, missing '#pragma once' in Lock.h"
#endif
#define ILNURBOX_Lock_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Lock_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALock(); \
	friend struct Z_Construct_UClass_ALock_Statics; \
public: \
	DECLARE_CLASS(ALock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(ALock)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Lock_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALock(ALock&&); \
	ALock(const ALock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALock) \
	NO_API virtual ~ALock();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Lock_h_9_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Lock_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Lock_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Lock_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class ALock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Lock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
