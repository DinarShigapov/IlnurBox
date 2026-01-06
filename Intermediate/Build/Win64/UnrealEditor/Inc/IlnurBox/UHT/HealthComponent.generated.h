// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
#ifdef ILNURBOX_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define ILNURBOX_HealthComponent_generated_h

#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_9_DELEGATE \
ILNURBOX_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth);


#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IlnurBox"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&); \
	UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_12_PROLOG
#define FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_dinar_source_repos_DinarShigapov_IlnurBox_5_5_Source_IlnurBox_Public_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
