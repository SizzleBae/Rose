// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSE_IGPlayerCharacter_generated_h
#error "IGPlayerCharacter.generated.h already included, missing '#pragma once' in IGPlayerCharacter.h"
#endif
#define ROSE_IGPlayerCharacter_generated_h

#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_RPC_WRAPPERS
#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIGPlayerCharacter(); \
	friend struct Z_Construct_UClass_AIGPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AIGPlayerCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AIGPlayerCharacter)


#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAIGPlayerCharacter(); \
	friend struct Z_Construct_UClass_AIGPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AIGPlayerCharacter, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AIGPlayerCharacter)


#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIGPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIGPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIGPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIGPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIGPlayerCharacter(AIGPlayerCharacter&&); \
	NO_API AIGPlayerCharacter(const AIGPlayerCharacter&); \
public:


#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIGPlayerCharacter(AIGPlayerCharacter&&); \
	NO_API AIGPlayerCharacter(const AIGPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIGPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIGPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIGPlayerCharacter)


#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileTrackerComponent() { return STRUCT_OFFSET(AIGPlayerCharacter, TileTrackerComponent); } \
	FORCEINLINE static uint32 __PPO__PawnMovement() { return STRUCT_OFFSET(AIGPlayerCharacter, PawnMovement); } \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(AIGPlayerCharacter, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__SpriteComponent() { return STRUCT_OFFSET(AIGPlayerCharacter, SpriteComponent); }


#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_9_PROLOG
#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_INCLASS \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class AIGPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Standard_IGPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
