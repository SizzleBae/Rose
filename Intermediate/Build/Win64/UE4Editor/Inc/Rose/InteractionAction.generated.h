// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ROSE_InteractionAction_generated_h
#error "InteractionAction.generated.h already included, missing '#pragma once' in InteractionAction.h"
#endif
#define ROSE_InteractionAction_generated_h

#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_RPC_WRAPPERS \
	virtual void ExecuteAction_Implementation(AActor* TriggeringActor); \
 \
	DECLARE_FUNCTION(execExecuteAction) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TriggeringActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAction_Implementation(Z_Param_TriggeringActor); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteAction_Implementation(AActor* TriggeringActor); \
 \
	DECLARE_FUNCTION(execExecuteAction) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_TriggeringActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAction_Implementation(Z_Param_TriggeringActor); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_EVENT_PARMS \
	struct InteractionAction_eventExecuteAction_Parms \
	{ \
		AActor* TriggeringActor; \
	};


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_CALLBACK_WRAPPERS
#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionAction(); \
	friend struct Z_Construct_UClass_UInteractionAction_Statics; \
public: \
	DECLARE_CLASS(UInteractionAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UInteractionAction)


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionAction(); \
	friend struct Z_Construct_UClass_UInteractionAction_Statics; \
public: \
	DECLARE_CLASS(UInteractionAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UInteractionAction)


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionAction(UInteractionAction&&); \
	NO_API UInteractionAction(const UInteractionAction&); \
public:


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionAction(UInteractionAction&&); \
	NO_API UInteractionAction(const UInteractionAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionAction)


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_PRIVATE_PROPERTY_OFFSET
#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_12_PROLOG \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_EVENT_PARMS


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_CALLBACK_WRAPPERS \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_INCLASS \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_CALLBACK_WRAPPERS \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Interaction_InteractionAction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class UInteractionAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Interaction_InteractionAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
