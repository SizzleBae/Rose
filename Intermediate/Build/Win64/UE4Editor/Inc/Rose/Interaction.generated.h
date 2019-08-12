// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSE_Interaction_generated_h
#error "Interaction.generated.h already included, missing '#pragma once' in Interaction.h"
#endif
#define ROSE_Interaction_generated_h

#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_RPC_WRAPPERS
#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteraction(); \
	friend struct Z_Construct_UClass_UInteraction_Statics; \
public: \
	DECLARE_CLASS(UInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UInteraction)


#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInteraction(); \
	friend struct Z_Construct_UClass_UInteraction_Statics; \
public: \
	DECLARE_CLASS(UInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UInteraction)


#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteraction(UInteraction&&); \
	NO_API UInteraction(const UInteraction&); \
public:


#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteraction(UInteraction&&); \
	NO_API UInteraction(const UInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteraction)


#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_PRIVATE_PROPERTY_OFFSET
#define Rose_4_22_Source_Rose_Interaction_Interaction_h_14_PROLOG
#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_INCLASS \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Interaction_Interaction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Interaction_Interaction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class UInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Interaction_Interaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
