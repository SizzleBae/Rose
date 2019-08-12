// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UObject;
#ifdef ROSE_TileBuildableComponent_generated_h
#error "TileBuildableComponent.generated.h already included, missing '#pragma once' in TileBuildableComponent.h"
#endif
#define ROSE_TileBuildableComponent_generated_h

#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBuildableTileActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,UClass*>*)Z_Param__Result=UTileBuildableComponent::GetBuildableTileActors(); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBuildableTileActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,UClass*>*)Z_Param__Result=UTileBuildableComponent::GetBuildableTileActors(); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileBuildableComponent(); \
	friend struct Z_Construct_UClass_UTileBuildableComponent_Statics; \
public: \
	DECLARE_CLASS(UTileBuildableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UTileBuildableComponent)


#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTileBuildableComponent(); \
	friend struct Z_Construct_UClass_UTileBuildableComponent_Statics; \
public: \
	DECLARE_CLASS(UTileBuildableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(UTileBuildableComponent)


#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileBuildableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileBuildableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileBuildableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileBuildableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileBuildableComponent(UTileBuildableComponent&&); \
	NO_API UTileBuildableComponent(const UTileBuildableComponent&); \
public:


#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileBuildableComponent(UTileBuildableComponent&&); \
	NO_API UTileBuildableComponent(const UTileBuildableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileBuildableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileBuildableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTileBuildableComponent)


#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_10_PROLOG
#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_INCLASS \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class UTileBuildableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Tile_TileBuildableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
