// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntPoint;
class UTexture2D;
#ifdef ROSE_RoseSpriteComponent_generated_h
#error "RoseSpriteComponent.generated.h already included, missing '#pragma once' in RoseSpriteComponent.h"
#endif
#define ROSE_RoseSpriteComponent_generated_h

#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSpriteSheetGridPos) \
	{ \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InSpriteSheetGridPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteSheetGridPos(Z_Param_Out_InSpriteSheetGridPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpriteSheetGridSize) \
	{ \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InSpriteSheetGridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteSheetGridSize(Z_Param_Out_InSpriteSheetGridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpriteTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_InSpriteTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteTexture(Z_Param_InSpriteTexture); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpriteSheetGridPos) \
	{ \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InSpriteSheetGridPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteSheetGridPos(Z_Param_Out_InSpriteSheetGridPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpriteSheetGridSize) \
	{ \
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InSpriteSheetGridSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteSheetGridSize(Z_Param_Out_InSpriteSheetGridSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpriteTexture) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_InSpriteTexture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteTexture(Z_Param_InSpriteTexture); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoseSpriteComponent(); \
	friend struct Z_Construct_UClass_URoseSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(URoseSpriteComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(URoseSpriteComponent)


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURoseSpriteComponent(); \
	friend struct Z_Construct_UClass_URoseSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(URoseSpriteComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(URoseSpriteComponent)


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoseSpriteComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoseSpriteComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoseSpriteComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoseSpriteComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoseSpriteComponent(URoseSpriteComponent&&); \
	NO_API URoseSpriteComponent(const URoseSpriteComponent&); \
public:


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoseSpriteComponent(URoseSpriteComponent&&); \
	NO_API URoseSpriteComponent(const URoseSpriteComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoseSpriteComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoseSpriteComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoseSpriteComponent)


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpriteMaterialParent() { return STRUCT_OFFSET(URoseSpriteComponent, SpriteMaterialParent); } \
	FORCEINLINE static uint32 __PPO__SpriteMaterialInstance() { return STRUCT_OFFSET(URoseSpriteComponent, SpriteMaterialInstance); } \
	FORCEINLINE static uint32 __PPO__SpriteTexture() { return STRUCT_OFFSET(URoseSpriteComponent, SpriteTexture); } \
	FORCEINLINE static uint32 __PPO__SpriteSheetGridSize() { return STRUCT_OFFSET(URoseSpriteComponent, SpriteSheetGridSize); } \
	FORCEINLINE static uint32 __PPO__SpriteSheetGridPos() { return STRUCT_OFFSET(URoseSpriteComponent, SpriteSheetGridPos); } \
	FORCEINLINE static uint32 __PPO__bEnableSpriteCollision() { return STRUCT_OFFSET(URoseSpriteComponent, bEnableSpriteCollision); }


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_12_PROLOG
#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_INCLASS \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class URoseSpriteComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Components_RoseSpriteComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
