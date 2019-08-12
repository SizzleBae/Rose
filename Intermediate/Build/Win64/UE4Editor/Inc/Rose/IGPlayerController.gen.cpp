// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Standard/IGPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIGPlayerController() {}
// Cross Module References
	ROSE_API UEnum* Z_Construct_UEnum_Rose_EPrimaryActionState();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UClass* Z_Construct_UClass_AIGPlayerController_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ROSE_API UFunction* Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState();
	ROSE_API UFunction* Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_ATileActor_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_ATileOverlay_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGGameMode_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGPlayerCamera_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGPlayerCharacter_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGAIPlayerController_NoRegister();
// End Cross Module References
	static UEnum* EPrimaryActionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Rose_EPrimaryActionState, Z_Construct_UPackage__Script_Rose(), TEXT("EPrimaryActionState"));
		}
		return Singleton;
	}
	template<> ROSE_API UEnum* StaticEnum<EPrimaryActionState>()
	{
		return EPrimaryActionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPrimaryActionState(EPrimaryActionState_StaticEnum, TEXT("/Script/Rose"), TEXT("EPrimaryActionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Rose_EPrimaryActionState_Hash() { return 1739022635U; }
	UEnum* Z_Construct_UEnum_Rose_EPrimaryActionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Rose();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPrimaryActionState"), 0, Get_Z_Construct_UEnum_Rose_EPrimaryActionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPrimaryActionState::PA_None", (int64)EPrimaryActionState::PA_None },
				{ "EPrimaryActionState::PA_Move", (int64)EPrimaryActionState::PA_Move },
				{ "EPrimaryActionState::PA_BuildRoom", (int64)EPrimaryActionState::PA_BuildRoom },
				{ "EPrimaryActionState::PA_RemoveRoom", (int64)EPrimaryActionState::PA_RemoveRoom },
				{ "EPrimaryActionState::PA_Spawn", (int64)EPrimaryActionState::PA_Spawn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
				{ "PA_BuildRoom.DisplayName", "BuildRoom" },
				{ "PA_Move.DisplayName", "Move" },
				{ "PA_None.DisplayName", "None" },
				{ "PA_RemoveRoom.DisplayName", "RemoveRoom" },
				{ "PA_Spawn.DisplayName", "Spawn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Rose,
				nullptr,
				"EPrimaryActionState",
				"EPrimaryActionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AIGPlayerController::StaticRegisterNativesAIGPlayerController()
	{
		UClass* Class = AIGPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPrimaryActionState", &AIGPlayerController::execSetPrimaryActionState },
			{ "SetSelectedPlaceable", &AIGPlayerController::execSetSelectedPlaceable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics
	{
		struct IGPlayerController_eventSetPrimaryActionState_Parms
		{
			EPrimaryActionState NewState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IGPlayerController_eventSetPrimaryActionState_Parms, NewState), Z_Construct_UEnum_Rose_EPrimaryActionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::NewProp_NewState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::NewProp_NewState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIGPlayerController, nullptr, "SetPrimaryActionState", sizeof(IGPlayerController_eventSetPrimaryActionState_Parms), Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics
	{
		struct IGPlayerController_eventSetSelectedPlaceable_Parms
		{
			UClass* NewSelectedPlaceable;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewSelectedPlaceable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::NewProp_NewSelectedPlaceable = { "NewSelectedPlaceable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IGPlayerController_eventSetSelectedPlaceable_Parms, NewSelectedPlaceable), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::NewProp_NewSelectedPlaceable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIGPlayerController, nullptr, "SetSelectedPlaceable", sizeof(IGPlayerController_eventSetSelectedPlaceable_Parms), Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIGPlayerController_NoRegister()
	{
		return AIGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AIGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildGhost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildGhost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileOverlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIGPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIGPlayerController_SetPrimaryActionState, "SetPrimaryActionState" }, // 3695671397
		{ &Z_Construct_UFunction_AIGPlayerController_SetSelectedPlaceable, "SetSelectedPlaceable" }, // 2426565516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Standard/IGPlayerController.h" },
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerController_Statics::NewProp_BuildGhost_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerController_Statics::NewProp_BuildGhost = { "BuildGhost", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerController, BuildGhost), Z_Construct_UClass_ATileActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_BuildGhost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_BuildGhost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerController_Statics::NewProp_TileOverlay_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerController_Statics::NewProp_TileOverlay = { "TileOverlay", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerController, TileOverlay), Z_Construct_UClass_ATileOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_TileOverlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_TileOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerController_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerController_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerController, GameMode), Z_Construct_UClass_AIGGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_GameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCamera_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCamera = { "PlayerCamera", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerController, PlayerCamera), Z_Construct_UClass_AIGPlayerCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerController, PlayerCharacter), Z_Construct_UClass_AIGPlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerController_Statics::NewProp_AIPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerController_Statics::NewProp_AIPlayerController = { "AIPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerController, AIPlayerController), Z_Construct_UClass_AIGAIPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_AIPlayerController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::NewProp_AIPlayerController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIGPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerController_Statics::NewProp_BuildGhost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerController_Statics::NewProp_TileOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerController_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerController_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerController_Statics::NewProp_AIPlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIGPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIGPlayerController_Statics::ClassParams = {
		&AIGPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIGPlayerController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIGPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIGPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIGPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIGPlayerController, 1986949713);
	template<> ROSE_API UClass* StaticClass<AIGPlayerController>()
	{
		return AIGPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIGPlayerController(Z_Construct_UClass_AIGPlayerController, &AIGPlayerController::StaticClass, TEXT("/Script/Rose"), TEXT("AIGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIGPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
