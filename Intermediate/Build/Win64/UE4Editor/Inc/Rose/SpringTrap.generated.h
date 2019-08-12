// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSE_SpringTrap_generated_h
#error "SpringTrap.generated.h already included, missing '#pragma once' in SpringTrap.h"
#endif
#define ROSE_SpringTrap_generated_h

#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_RPC_WRAPPERS
#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpringTrap(); \
	friend struct Z_Construct_UClass_ASpringTrap_Statics; \
public: \
	DECLARE_CLASS(ASpringTrap, ATileActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ASpringTrap)


#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpringTrap(); \
	friend struct Z_Construct_UClass_ASpringTrap_Statics; \
public: \
	DECLARE_CLASS(ASpringTrap, ATileActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ASpringTrap)


#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpringTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpringTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpringTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpringTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpringTrap(ASpringTrap&&); \
	NO_API ASpringTrap(const ASpringTrap&); \
public:


#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpringTrap(ASpringTrap&&); \
	NO_API ASpringTrap(const ASpringTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpringTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpringTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpringTrap)


#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileBuildableComponent() { return STRUCT_OFFSET(ASpringTrap, TileBuildableComponent); }


#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_12_PROLOG
#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_INCLASS \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class ASpringTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Tile_Actor_SpringTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
