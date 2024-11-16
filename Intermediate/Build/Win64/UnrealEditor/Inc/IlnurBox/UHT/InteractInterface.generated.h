// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InteractInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ILNURBOX_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define ILNURBOX_InteractInterface_generated_h

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractableData_Statics; \
	ILNURBOX_API static class UScriptStruct* StaticStruct();


template<> ILNURBOX_API UScriptStruct* StaticStruct<struct FInteractableData>();

#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ILNURBOX_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractInterface(UInteractInterface&&); \
	UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ILNURBOX_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	ILNURBOX_API virtual ~UInteractInterface();


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_51_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IlnurBox"), ILNURBOX_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_51_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_51_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_51_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_51_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_48_PROLOG
#define FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h_51_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ILNURBOX_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_IlnurBoxProject_Source_IlnurBox_Public_Interfaces_InteractInterface_h


#define FOREACH_ENUM_EINTERACTABLETYPE(op) \
	op(EInteractableType::Pickup) \
	op(EInteractableType::Device) \
	op(EInteractableType::Container) 

enum class EInteractableType : uint8;
template<> struct TIsUEnumClass<EInteractableType> { enum { Value = true }; };
template<> ILNURBOX_API UEnum* StaticEnum<EInteractableType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
