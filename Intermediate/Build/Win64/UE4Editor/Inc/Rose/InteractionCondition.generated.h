// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ROSE_InteractionCondition_generated_h
#error "InteractionCondition.generated.h already included, missing '#pragma once' in InteractionCondition.h"
#endif
#define ROSE_InteractionCondition_generated_h

#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_RPC_WRAPPERS \
	virtual bool CheckCondition_Implementation(const AActor* TriggeringActor) const; \
 \
	DECLARE_FUNCTION(execCheckCondition) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TriggeringActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_TriggeringActor); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CheckCondition_Implementation(const AActor* TriggeringActor) const; \
 \
	DECLARE_FUNCTION(execCheckCondition) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TriggeringActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckCondition_Implementation(Z_Param_TriggeringActor); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_EVENT_PARMS \
	struct InteractionCondition_eventCheckCondition_Parms \
	{ \
		const AActor* TriggeringActor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionCondition_eventCheckCondition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_CALLBACK_WRAPPERS
#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionCondition(); \
	friend struct Z_Construct_UClass_UInteractionCondition_Statics; \
public: \
	DECLARE_CLASS(UInteractionCondition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UInteractionCondition)


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionCondition(); \
	friend struct Z_Construct_UClass_UInteractionCondition_Statics; \
public: \
	DECLARE_CLASS(UInteractionCondition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UInteractionCondition)


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionCondition(UInteractionCondition&&); \
	NO_API UInteractionCondition(const UInteractionCondition&); \
public:


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionCondition(UInteractionCondition&&); \
	NO_API UInteractionCondition(const UInteractionCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionCondition)


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwningActor() { return STRUCT_OFFSET(UInteractionCondition, OwningActor); }


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_12_PROLOG \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_EVENT_PARMS


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_CALLBACK_WRAPPERS \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_INCLASS \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_CALLBACK_WRAPPERS \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Interaction_InteractionCondition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class UInteractionCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Interaction_InteractionCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
