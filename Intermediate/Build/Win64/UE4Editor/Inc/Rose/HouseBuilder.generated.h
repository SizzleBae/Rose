// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTileData;
#ifdef ROSE_HouseBuilder_generated_h
#error "HouseBuilder.generated.h already included, missing '#pragma once' in HouseBuilder.h"
#endif
#define ROSE_HouseBuilder_generated_h

#define Rose_4_22_Source_Rose_House_HouseBuilder_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ROSE_API UScriptStruct* StaticStruct<struct FTileData>();

#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRebuildHouseMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildHouseMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTileData*)Z_Param__Result=P_THIS->GetTile(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileIsOpen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_UBOOL(Z_Param_bIsOpen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTileIsOpen(Z_Param_X,Z_Param_Y,Z_Param_bIsOpen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_STRUCT_REF(FTileData,Z_Param_Out_NewTile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTile(Z_Param_X,Z_Param_Y,Z_Param_Out_NewTile); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRebuildHouseMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildHouseMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTileData*)Z_Param__Result=P_THIS->GetTile(Z_Param_X,Z_Param_Y); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileIsOpen) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_UBOOL(Z_Param_bIsOpen); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTileIsOpen(Z_Param_X,Z_Param_Y,Z_Param_bIsOpen); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_STRUCT_REF(FTileData,Z_Param_Out_NewTile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTile(Z_Param_X,Z_Param_Y,Z_Param_Out_NewTile); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHouseBuilder(); \
	friend struct Z_Construct_UClass_AHouseBuilder_Statics; \
public: \
	DECLARE_CLASS(AHouseBuilder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AHouseBuilder)


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAHouseBuilder(); \
	friend struct Z_Construct_UClass_AHouseBuilder_Statics; \
public: \
	DECLARE_CLASS(AHouseBuilder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AHouseBuilder)


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHouseBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHouseBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouseBuilder(AHouseBuilder&&); \
	NO_API AHouseBuilder(const AHouseBuilder&); \
public:


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHouseBuilder(AHouseBuilder&&); \
	NO_API AHouseBuilder(const AHouseBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHouseBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHouseBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHouseBuilder)


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TilesPerUV() { return STRUCT_OFFSET(AHouseBuilder, TilesPerUV); }


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_22_PROLOG
#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_INCLASS \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_House_HouseBuilder_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_House_HouseBuilder_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class AHouseBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_House_HouseBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
