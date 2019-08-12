// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSE_RoseAnimatedSpriteComponent_generated_h
#error "RoseAnimatedSpriteComponent.generated.h already included, missing '#pragma once' in RoseAnimatedSpriteComponent.h"
#endif
#define ROSE_RoseAnimatedSpriteComponent_generated_h

#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFrame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrame(Z_Param_NewFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFPS) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFPS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFPS(Z_Param_NewFPS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFrameCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameCount(Z_Param_NewFrameCount); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFrame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFrame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrame(Z_Param_NewFrame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFPS) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFPS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFPS(Z_Param_NewFPS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFrameCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameCount(Z_Param_NewFrameCount); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoseAnimatedSpriteComponent(); \
	friend struct Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(URoseAnimatedSpriteComponent, URoseSpriteComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(URoseAnimatedSpriteComponent)


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURoseAnimatedSpriteComponent(); \
	friend struct Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(URoseAnimatedSpriteComponent, URoseSpriteComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(URoseAnimatedSpriteComponent)


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoseAnimatedSpriteComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoseAnimatedSpriteComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoseAnimatedSpriteComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoseAnimatedSpriteComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoseAnimatedSpriteComponent(URoseAnimatedSpriteComponent&&); \
	NO_API URoseAnimatedSpriteComponent(const URoseAnimatedSpriteComponent&); \
public:


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoseAnimatedSpriteComponent(URoseAnimatedSpriteComponent&&); \
	NO_API URoseAnimatedSpriteComponent(const URoseAnimatedSpriteComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoseAnimatedSpriteComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoseAnimatedSpriteComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoseAnimatedSpriteComponent)


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FrameCount() { return STRUCT_OFFSET(URoseAnimatedSpriteComponent, FrameCount); } \
	FORCEINLINE static uint32 __PPO__FPS() { return STRUCT_OFFSET(URoseAnimatedSpriteComponent, FPS); }


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_12_PROLOG
#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_INCLASS \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class URoseAnimatedSpriteComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Components_RoseAnimatedSpriteComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
