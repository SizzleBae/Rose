// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSE_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define ROSE_Door_generated_h

#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_RPC_WRAPPERS
#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, ATileActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, ATileActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(ADoor, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__DoorBounds() { return STRUCT_OFFSET(ADoor, DoorBounds); } \
	FORCEINLINE static uint32 __PPO__DoorMesh() { return STRUCT_OFFSET(ADoor, DoorMesh); }


#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_12_PROLOG
#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_INCLASS \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_Actor_Door_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Tile_Actor_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
