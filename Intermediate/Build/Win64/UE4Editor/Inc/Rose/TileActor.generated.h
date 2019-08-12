// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntPoint;
class AActor;
#ifdef ROSE_TileActor_generated_h
#error "TileActor.generated.h already included, missing '#pragma once' in TileActor.h"
#endif
#define ROSE_TileActor_generated_h

#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_RPC_WRAPPERS \
	virtual void OnGhostModeChanged_Implementation(bool bNewMode); \
	virtual void OnActorLeave_Implementation(AActor* LeavingActor, FIntPoint const& ToTile); \
	virtual void OnActorEntered_Implementation(AActor* EnteringActor, FIntPoint const& FromTile); \
 \
	DECLARE_FUNCTION(execOnGhostModeChanged) \
	{ \
		P_GET_UBOOL(Z_Param_bNewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGhostModeChanged_Implementation(Z_Param_bNewMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTileToModel) \
	{ \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Tile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTileToModel(Z_Param_Out_Tile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTilePos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetTilePos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContainedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetContainedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTiledModel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetTiledModel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorLeave) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_LeavingActor); \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ToTile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorLeave_Implementation(Z_Param_LeavingActor,Z_Param_Out_ToTile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorEntered) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_EnteringActor); \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_FromTile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorEntered_Implementation(Z_Param_EnteringActor,Z_Param_Out_FromTile); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnGhostModeChanged_Implementation(bool bNewMode); \
	virtual void OnActorLeave_Implementation(AActor* LeavingActor, FIntPoint const& ToTile); \
	virtual void OnActorEntered_Implementation(AActor* EnteringActor, FIntPoint const& FromTile); \
 \
	DECLARE_FUNCTION(execOnGhostModeChanged) \
	{ \
		P_GET_UBOOL(Z_Param_bNewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnGhostModeChanged_Implementation(Z_Param_bNewMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTileToModel) \
	{ \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Tile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddTileToModel(Z_Param_Out_Tile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTilePos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FIntPoint*)Z_Param__Result=P_THIS->GetTilePos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetContainedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetContainedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTiledModel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FIntPoint>*)Z_Param__Result=P_THIS->GetTiledModel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorLeave) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_LeavingActor); \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_ToTile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorLeave_Implementation(Z_Param_LeavingActor,Z_Param_Out_ToTile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnActorEntered) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_EnteringActor); \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_FromTile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnActorEntered_Implementation(Z_Param_EnteringActor,Z_Param_Out_FromTile); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_EVENT_PARMS \
	struct TileActor_eventOnActorEntered_Parms \
	{ \
		AActor* EnteringActor; \
		FIntPoint FromTile; \
	}; \
	struct TileActor_eventOnActorLeave_Parms \
	{ \
		AActor* LeavingActor; \
		FIntPoint ToTile; \
	}; \
	struct TileActor_eventOnGhostModeChanged_Parms \
	{ \
		bool bNewMode; \
	};


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_CALLBACK_WRAPPERS
#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATileActor(); \
	friend struct Z_Construct_UClass_ATileActor_Statics; \
public: \
	DECLARE_CLASS(ATileActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ATileActor)


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATileActor(); \
	friend struct Z_Construct_UClass_ATileActor_Statics; \
public: \
	DECLARE_CLASS(ATileActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(ATileActor)


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATileActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATileActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileActor(ATileActor&&); \
	NO_API ATileActor(const ATileActor&); \
public:


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATileActor(ATileActor&&); \
	NO_API ATileActor(const ATileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATileActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATileActor)


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GhostMaterial() { return STRUCT_OFFSET(ATileActor, GhostMaterial); } \
	FORCEINLINE static uint32 __PPO__GhostMaterialInstance() { return STRUCT_OFFSET(ATileActor, GhostMaterialInstance); }


#define Rose_4_22_Source_Rose_Tile_TileActor_h_18_PROLOG \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_EVENT_PARMS


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_CALLBACK_WRAPPERS \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_INCLASS \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Tile_TileActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_CALLBACK_WRAPPERS \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Tile_TileActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class ATileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Tile_TileActor_h


#define FOREACH_ENUM_ETILEORIENTATION(op) \
	op(ETileOrientation::North) \
	op(ETileOrientation::East) \
	op(ETileOrientation::South) \
	op(ETileOrientation::West) 

enum class ETileOrientation : uint8;
template<> ROSE_API UEnum* StaticEnum<ETileOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
