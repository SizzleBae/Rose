// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTileActorHolder;
class AHouseBuilder;
#ifdef ROSE_House_generated_h
#error "House.generated.h already included, missing '#pragma once' in House.h"
#endif
#define ROSE_House_generated_h

#define Rose_4_22_Source_Rose_House_House_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTileActorHolder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTileActorHolder**)Z_Param__Result=P_THIS->GetTileActorHolder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHouseBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHouseBuilder**)Z_Param__Result=P_THIS->GetHouseBuilder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=AHouse::GetMapSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=AHouse::GetTileSize(); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_House_House_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTileActorHolder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTileActorHolder**)Z_Param__Result=P_THIS->GetTileActorHolder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHouseBuilder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AHouseBuilder**)Z_Param__Result=P_THIS->GetHouseBuilder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=AHouse::GetMapSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=AHouse::GetTileSize(); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_House_House_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouse(); \
	friend struct Z_Construct_UClass_AHouse_Statics; \
public: \
	DECLARE_CLASS(AHouse, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AHouse)


#define Rose_4_22_Source_Rose_House_House_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHouse(); \
	friend struct Z_Construct_UClass_AHouse_Statics; \
public: \
	DECLARE_CLASS(AHouse, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AHouse)


#define Rose_4_22_Source_Rose_House_House_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHouse(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHouse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouse(AHouse&&); \
	NO_API AHouse(const AHouse&); \
public:


#define Rose_4_22_Source_Rose_House_House_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouse(AHouse&&); \
	NO_API AHouse(const AHouse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouse); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouse)


#define Rose_4_22_Source_Rose_House_House_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HouseBuilder() { return STRUCT_OFFSET(AHouse, HouseBuilder); } \
	FORCEINLINE static uint32 __PPO__TileActorHolder() { return STRUCT_OFFSET(AHouse, TileActorHolder); }


#define Rose_4_22_Source_Rose_House_House_h_9_PROLOG
#define Rose_4_22_Source_Rose_House_House_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_House_House_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_House_House_h_12_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_House_House_h_12_INCLASS \
	Rose_4_22_Source_Rose_House_House_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_House_House_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_House_House_h_12_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_House_House_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_House_House_h_12_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_House_House_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class AHouse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_House_House_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
