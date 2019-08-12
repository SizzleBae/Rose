// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHouse;
#ifdef ROSE_IGGameMode_generated_h
#error "IGGameMode.generated.h already included, missing '#pragma once' in IGGameMode.h"
#endif
#define ROSE_IGGameMode_generated_h

#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHouse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHouse**)Z_Param__Result=P_THIS->GetHouse(); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHouse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHouse**)Z_Param__Result=P_THIS->GetHouse(); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIGGameMode(); \
	friend struct Z_Construct_UClass_AIGGameMode_Statics; \
public: \
	DECLARE_CLASS(AIGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AIGGameMode)


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAIGGameMode(); \
	friend struct Z_Construct_UClass_AIGGameMode_Statics; \
public: \
	DECLARE_CLASS(AIGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AIGGameMode)


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIGGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIGGameMode(AIGGameMode&&); \
	NO_API AIGGameMode(const AIGGameMode&); \
public:


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIGGameMode(AIGGameMode&&); \
	NO_API AIGGameMode(const AIGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIGGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIGGameMode)


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__House() { return STRUCT_OFFSET(AIGGameMode, House); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(AIGGameMode, PlayerController); }


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_9_PROLOG
#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_INCLASS \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Standard_IGGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class AIGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Standard_IGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
