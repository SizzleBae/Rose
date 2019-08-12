// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EPrimaryActionState : uint8;
#ifdef ROSE_IGPlayerController_generated_h
#error "IGPlayerController.generated.h already included, missing '#pragma once' in IGPlayerController.h"
#endif
#define ROSE_IGPlayerController_generated_h

#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSelectedPlaceable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewSelectedPlaceable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedPlaceable(Z_Param_NewSelectedPlaceable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrimaryActionState) \
	{ \
		P_GET_ENUM(EPrimaryActionState,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrimaryActionState(EPrimaryActionState(Z_Param_NewState)); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSelectedPlaceable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewSelectedPlaceable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedPlaceable(Z_Param_NewSelectedPlaceable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrimaryActionState) \
	{ \
		P_GET_ENUM(EPrimaryActionState,Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrimaryActionState(EPrimaryActionState(Z_Param_NewState)); \
		P_NATIVE_END; \
	}


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIGPlayerController(); \
	friend struct Z_Construct_UClass_AIGPlayerController_Statics; \
public: \
	DECLARE_CLASS(AIGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AIGPlayerController)


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAIGPlayerController(); \
	friend struct Z_Construct_UClass_AIGPlayerController_Statics; \
public: \
	DECLARE_CLASS(AIGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rose"), NO_API) \
	DECLARE_SERIALIZER(AIGPlayerController)


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIGPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIGPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIGPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIGPlayerController(AIGPlayerController&&); \
	NO_API AIGPlayerController(const AIGPlayerController&); \
public:


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIGPlayerController(AIGPlayerController&&); \
	NO_API AIGPlayerController(const AIGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIGPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIGPlayerController)


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIPlayerController() { return STRUCT_OFFSET(AIGPlayerController, AIPlayerController); } \
	FORCEINLINE static uint32 __PPO__PlayerCharacter() { return STRUCT_OFFSET(AIGPlayerController, PlayerCharacter); } \
	FORCEINLINE static uint32 __PPO__PlayerCamera() { return STRUCT_OFFSET(AIGPlayerController, PlayerCamera); } \
	FORCEINLINE static uint32 __PPO__GameMode() { return STRUCT_OFFSET(AIGPlayerController, GameMode); } \
	FORCEINLINE static uint32 __PPO__TileOverlay() { return STRUCT_OFFSET(AIGPlayerController, TileOverlay); } \
	FORCEINLINE static uint32 __PPO__BuildGhost() { return STRUCT_OFFSET(AIGPlayerController, BuildGhost); }


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_40_PROLOG
#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_RPC_WRAPPERS \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_INCLASS \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_PRIVATE_PROPERTY_OFFSET \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_INCLASS_NO_PURE_DECLS \
	Rose_4_22_Source_Rose_Standard_IGPlayerController_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSE_API UClass* StaticClass<class AIGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rose_4_22_Source_Rose_Standard_IGPlayerController_h


#define FOREACH_ENUM_EPRIMARYACTIONSTATE(op) \
	op(EPrimaryActionState::PA_None) \
	op(EPrimaryActionState::PA_Move) \
	op(EPrimaryActionState::PA_BuildRoom) \
	op(EPrimaryActionState::PA_RemoveRoom) \
	op(EPrimaryActionState::PA_Spawn) 

enum class EPrimaryActionState : uint8;
template<> ROSE_API UEnum* StaticEnum<EPrimaryActionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
