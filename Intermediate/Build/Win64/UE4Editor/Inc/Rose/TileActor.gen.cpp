// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Tile/TileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileActor() {}
// Cross Module References
	ROSE_API UEnum* Z_Construct_UEnum_Rose_ETileOrientation();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UClass* Z_Construct_UClass_ATileActor_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_ATileActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ROSE_API UFunction* Z_Construct_UFunction_ATileActor_AddTileToModel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ROSE_API UFunction* Z_Construct_UFunction_ATileActor_GetContainedActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ROSE_API UFunction* Z_Construct_UFunction_ATileActor_GetTiledModel();
	ROSE_API UFunction* Z_Construct_UFunction_ATileActor_GetTilePos();
	ROSE_API UFunction* Z_Construct_UFunction_ATileActor_OnActorEntered();
	ROSE_API UFunction* Z_Construct_UFunction_ATileActor_OnActorLeave();
	ROSE_API UFunction* Z_Construct_UFunction_ATileActor_OnGhostModeChanged();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	static UEnum* ETileOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Rose_ETileOrientation, Z_Construct_UPackage__Script_Rose(), TEXT("ETileOrientation"));
		}
		return Singleton;
	}
	template<> ROSE_API UEnum* StaticEnum<ETileOrientation>()
	{
		return ETileOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETileOrientation(ETileOrientation_StaticEnum, TEXT("/Script/Rose"), TEXT("ETileOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Rose_ETileOrientation_Hash() { return 469776743U; }
	UEnum* Z_Construct_UEnum_Rose_ETileOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Rose();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETileOrientation"), 0, Get_Z_Construct_UEnum_Rose_ETileOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETileOrientation::North", (int64)ETileOrientation::North },
				{ "ETileOrientation::East", (int64)ETileOrientation::East },
				{ "ETileOrientation::South", (int64)ETileOrientation::South },
				{ "ETileOrientation::West", (int64)ETileOrientation::West },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "East.DisplayName", "East" },
				{ "ModuleRelativePath", "Tile/TileActor.h" },
				{ "North.DisplayName", "North" },
				{ "South.DisplayName", "South" },
				{ "West.DisplayName", "West" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Rose,
				nullptr,
				"ETileOrientation",
				"ETileOrientation",
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
	static FName NAME_ATileActor_OnActorEntered = FName(TEXT("OnActorEntered"));
	void ATileActor::OnActorEntered(AActor* EnteringActor, FIntPoint const& FromTile)
	{
		TileActor_eventOnActorEntered_Parms Parms;
		Parms.EnteringActor=EnteringActor;
		Parms.FromTile=FromTile;
		ProcessEvent(FindFunctionChecked(NAME_ATileActor_OnActorEntered),&Parms);
	}
	static FName NAME_ATileActor_OnActorLeave = FName(TEXT("OnActorLeave"));
	void ATileActor::OnActorLeave(AActor* LeavingActor, FIntPoint const& ToTile)
	{
		TileActor_eventOnActorLeave_Parms Parms;
		Parms.LeavingActor=LeavingActor;
		Parms.ToTile=ToTile;
		ProcessEvent(FindFunctionChecked(NAME_ATileActor_OnActorLeave),&Parms);
	}
	static FName NAME_ATileActor_OnGhostModeChanged = FName(TEXT("OnGhostModeChanged"));
	void ATileActor::OnGhostModeChanged(bool bNewMode)
	{
		TileActor_eventOnGhostModeChanged_Parms Parms;
		Parms.bNewMode=bNewMode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATileActor_OnGhostModeChanged),&Parms);
	}
	void ATileActor::StaticRegisterNativesATileActor()
	{
		UClass* Class = ATileActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTileToModel", &ATileActor::execAddTileToModel },
			{ "GetContainedActors", &ATileActor::execGetContainedActors },
			{ "GetTiledModel", &ATileActor::execGetTiledModel },
			{ "GetTilePos", &ATileActor::execGetTilePos },
			{ "OnActorEntered", &ATileActor::execOnActorEntered },
			{ "OnActorLeave", &ATileActor::execOnActorLeave },
			{ "OnGhostModeChanged", &ATileActor::execOnGhostModeChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATileActor_AddTileToModel_Statics
	{
		struct TileActor_eventAddTileToModel_Parms
		{
			FIntPoint Tile;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventAddTileToModel_Parms, Tile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::NewProp_Tile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::NewProp_Tile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileActor, nullptr, "AddTileToModel", sizeof(TileActor_eventAddTileToModel_Parms), Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATileActor_AddTileToModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATileActor_AddTileToModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATileActor_GetContainedActors_Statics
	{
		struct TileActor_eventGetContainedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventGetContainedActors_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileActor, nullptr, "GetContainedActors", sizeof(TileActor_eventGetContainedActors_Parms), Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATileActor_GetContainedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATileActor_GetContainedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATileActor_GetTiledModel_Statics
	{
		struct TileActor_eventGetTiledModel_Parms
		{
			TArray<FIntPoint> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventGetTiledModel_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileActor, nullptr, "GetTiledModel", sizeof(TileActor_eventGetTiledModel_Parms), Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATileActor_GetTiledModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATileActor_GetTiledModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATileActor_GetTilePos_Statics
	{
		struct TileActor_eventGetTilePos_Parms
		{
			FIntPoint ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_GetTilePos_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileActor_GetTilePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventGetTilePos_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_GetTilePos_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetTilePos_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileActor_GetTilePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_GetTilePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_GetTilePos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileActor_GetTilePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileActor, nullptr, "GetTilePos", sizeof(TileActor_eventGetTilePos_Parms), Z_Construct_UFunction_ATileActor_GetTilePos_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetTilePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_GetTilePos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_GetTilePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATileActor_GetTilePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATileActor_GetTilePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATileActor_OnActorEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromTile;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnteringActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::NewProp_FromTile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::NewProp_FromTile = { "FromTile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventOnActorEntered_Parms, FromTile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::NewProp_FromTile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::NewProp_FromTile_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::NewProp_EnteringActor = { "EnteringActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventOnActorEntered_Parms, EnteringActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::NewProp_FromTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::NewProp_EnteringActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileActor, nullptr, "OnActorEntered", sizeof(TileActor_eventOnActorEntered_Parms), Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATileActor_OnActorEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATileActor_OnActorEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATileActor_OnActorLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToTile;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeavingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::NewProp_ToTile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::NewProp_ToTile = { "ToTile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventOnActorLeave_Parms, ToTile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::NewProp_ToTile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::NewProp_ToTile_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::NewProp_LeavingActor = { "LeavingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileActor_eventOnActorLeave_Parms, LeavingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::NewProp_ToTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::NewProp_LeavingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileActor, nullptr, "OnActorLeave", sizeof(TileActor_eventOnActorLeave_Parms), Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATileActor_OnActorLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATileActor_OnActorLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics
	{
		static void NewProp_bNewMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::NewProp_bNewMode_SetBit(void* Obj)
	{
		((TileActor_eventOnGhostModeChanged_Parms*)Obj)->bNewMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::NewProp_bNewMode = { "bNewMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TileActor_eventOnGhostModeChanged_Parms), &Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::NewProp_bNewMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::NewProp_bNewMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileActor, nullptr, "OnGhostModeChanged", sizeof(TileActor_eventOnGhostModeChanged_Parms), Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATileActor_OnGhostModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATileActor_OnGhostModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATileActor_NoRegister()
	{
		return ATileActor::StaticClass();
	}
	struct Z_Construct_UClass_ATileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GhostMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATileActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATileActor_AddTileToModel, "AddTileToModel" }, // 3813382977
		{ &Z_Construct_UFunction_ATileActor_GetContainedActors, "GetContainedActors" }, // 197941821
		{ &Z_Construct_UFunction_ATileActor_GetTiledModel, "GetTiledModel" }, // 1166769599
		{ &Z_Construct_UFunction_ATileActor_GetTilePos, "GetTilePos" }, // 3315494504
		{ &Z_Construct_UFunction_ATileActor_OnActorEntered, "OnActorEntered" }, // 1631984252
		{ &Z_Construct_UFunction_ATileActor_OnActorLeave, "OnActorLeave" }, // 1107927870
		{ &Z_Construct_UFunction_ATileActor_OnGhostModeChanged, "OnGhostModeChanged" }, // 4086497096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile/TileActor.h" },
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterialInstance = { "GhostMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileActor, GhostMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Tile/TileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterial = { "GhostMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileActor, GhostMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileActor_Statics::NewProp_GhostMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATileActor_Statics::ClassParams = {
		&ATileActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATileActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATileActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATileActor, 707901442);
	template<> ROSE_API UClass* StaticClass<ATileActor>()
	{
		return ATileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATileActor(Z_Construct_UClass_ATileActor, &ATileActor::StaticClass, TEXT("/Script/Rose"), TEXT("ATileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
