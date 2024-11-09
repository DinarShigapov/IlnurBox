// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaminaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_StaminaComponent_generated_h
#error "StaminaComponent.generated.h already included, missing '#pragma once' in StaminaComponent.h"
#endif
#define ILNURBOX_StaminaComponent_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetCurrentStamina);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaminaComponent(); \
	friend struct Z_Construct_UClass_UStaminaComponent_Statics; \
public: \
	DECLARE_CLASS(UStaminaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(UStaminaComponent)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStaminaComponent(UStaminaComponent&&); \
	UStaminaComponent(const UStaminaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaminaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaminaComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStaminaComponent) \
	NO_API virtual ~UStaminaComponent();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_10_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class UStaminaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_StaminaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
