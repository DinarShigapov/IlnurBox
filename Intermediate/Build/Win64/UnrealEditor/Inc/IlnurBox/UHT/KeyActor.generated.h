// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_KeyActor_generated_h
#error "KeyActor.generated.h already included, missing '#pragma once' in KeyActor.h"
#endif
#define ILNURBOX_KeyActor_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeyActor(); \
	friend struct Z_Construct_UClass_AKeyActor_Statics; \
public: \
	DECLARE_CLASS(AKeyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(AKeyActor) \
	virtual UObject* _getUObject() const override { return const_cast<AKeyActor*>(this); }


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKeyActor(AKeyActor&&); \
	AKeyActor(const AKeyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeyActor) \
	NO_API virtual ~AKeyActor();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_12_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class AKeyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_KeyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
