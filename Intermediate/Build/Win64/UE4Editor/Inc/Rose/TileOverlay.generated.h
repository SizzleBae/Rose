// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSE_TileOverlay_generated_h
#error "TileOverlay.generated.h already included, missing '#pragma once' in TileOverlay.h"
#endif
#define ROSE_TileOverlay_generated_h

#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_RPC_WRAPPERS
#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileOverlay(); \
	friend struct Z_Construct_UClass_ATileOverlay_Statics; \
public: \
	DECLARE_CLASS(ATileOverlay, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ATileOverlay)


#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATileOverlay(); \
	friend struct Z_Construct_UClass_ATileOverlay_Statics; \
public: \
	DECLARE_CLASS(ATileOverlay, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ATileOverlay)


#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATileOverlay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATileOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileOverlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileOverlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileOverlay(ATileOverlay&&); \
	NO_API ATileOverlay(const ATileOverlay&); \
public:


#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileOverlay(ATileOverlay&&); \
	NO_API ATileOverlay(const ATileOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileOverlay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileOverlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATileOverlay)


#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(ATileOverlay, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__TileOverlayMaterial() { return STRUCT_OFFSET(ATileOverlay, TileOverlayMaterial); } \
	FORCEINLINE static uint32 __PPO__TileOverlayMaterialInstance() { return STRUCT_OFFSET(ATileOverlay, TileOverlayMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__TileOverlayTexture() { return STRUCT_OFFSET(ATileOverlay, TileOverlayTexture); }


#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_9_PROLOG
#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_INCLASS \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_TileOverlay_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class ATileOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Tile_TileOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
