// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserInterface/Interaction/InteractionWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_InteractionWidget_generated_h
#error "InteractionWidget.generated.h already included, missing '#pragma once' in InteractionWidget.h"
#endif
#define ILNURBOX_InteractionWidget_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateInteractionProgress);


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionWidget(); \
	friend struct Z_Construct_UClass_UInteractionWidget_Statics; \
public: \
	DECLARE_CLASS(UInteractionWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(UInteractionWidget)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionWidget(UInteractionWidget&&); \
	UInteractionWidget(const UInteractionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionWidget) \
	NO_API virtual ~UInteractionWidget();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_17_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class UInteractionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_UserInterface_Interaction_InteractionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
