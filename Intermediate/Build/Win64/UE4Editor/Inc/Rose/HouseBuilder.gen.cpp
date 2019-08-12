// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/House/HouseBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouseBuilder() {}
// Cross Module References
	ROSE_API UScriptStruct* Z_Construct_UScriptStruct_FTileData();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UClass* Z_Construct_UClass_AHouseBuilder_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AHouseBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ROSE_API UFunction* Z_Construct_UFunction_AHouseBuilder_GetTile();
	ROSE_API UFunction* Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh();
	ROSE_API UFunction* Z_Construct_UFunction_AHouseBuilder_SetTile();
	ROSE_API UFunction* Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FTileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROSE_API uint32 Get_Z_Construct_UScriptStruct_FTileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileData, Z_Construct_UPackage__Script_Rose(), TEXT("TileData"), sizeof(FTileData), Get_Z_Construct_UScriptStruct_FTileData_Hash());
	}
	return Singleton;
}
template<> ROSE_API UScriptStruct* StaticStruct<FTileData>()
{
	return FTileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTileData(FTileData::StaticStruct, TEXT("/Script/Rose"), TEXT("TileData"), false, nullptr, nullptr);
static struct FScriptStruct_Rose_StaticRegisterNativesFTileData
{
	FScriptStruct_Rose_StaticRegisterNativesFTileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TileData")),new UScriptStruct::TCppStructOps<FTileData>);
	}
} ScriptStruct_Rose_StaticRegisterNativesFTileData;
	struct Z_Construct_UScriptStruct_FTileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWall_MetaData[];
#endif
		static void NewProp_bIsWall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[];
#endif
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWall_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWall_SetBit(void* Obj)
	{
		((FTileData*)Obj)->bIsWall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWall = { "bIsWall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTileData), &Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWall_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsOpen_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((FTileData*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTileData), &Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsOpen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsOpen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsWall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_bIsOpen,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
		nullptr,
		&NewStructOps,
		"TileData",
		sizeof(FTileData),
		alignof(FTileData),
		Z_Construct_UScriptStruct_FTileData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Rose();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TileData"), sizeof(FTileData), Get_Z_Construct_UScriptStruct_FTileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTileData_Hash() { return 3863688146U; }
	void AHouseBuilder::StaticRegisterNativesAHouseBuilder()
	{
		UClass* Class = AHouseBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTile", &AHouseBuilder::execGetTile },
			{ "RebuildHouseMesh", &AHouseBuilder::execRebuildHouseMesh },
			{ "SetTile", &AHouseBuilder::execSetTile },
			{ "SetTileIsOpen", &AHouseBuilder::execSetTileIsOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHouseBuilder_GetTile_Statics
	{
		struct HouseBuilder_eventGetTile_Parms
		{
			int32 X;
			int32 Y;
			FTileData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventGetTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventGetTile_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventGetTile_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HouseBuilder" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseBuilder, nullptr, "GetTile", sizeof(HouseBuilder_eventGetTile_Parms), Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouseBuilder_GetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouseBuilder_GetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "HouseBuilder" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseBuilder, nullptr, "RebuildHouseMesh", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHouseBuilder_SetTile_Statics
	{
		struct HouseBuilder_eventSetTile_Parms
		{
			int32 X;
			int32 Y;
			FTileData NewTile;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTile;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_NewTile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_NewTile = { "NewTile", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventSetTile_Parms, NewTile), Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_NewTile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_NewTile_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventSetTile_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventSetTile_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_NewTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HouseBuilder" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseBuilder, nullptr, "SetTile", sizeof(HouseBuilder_eventSetTile_Parms), Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouseBuilder_SetTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouseBuilder_SetTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics
	{
		struct HouseBuilder_eventSetTileIsOpen_Parms
		{
			int32 X;
			int32 Y;
			bool bIsOpen;
		};
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((HouseBuilder_eventSetTileIsOpen_Parms*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HouseBuilder_eventSetTileIsOpen_Parms), &Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventSetTileIsOpen_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HouseBuilder_eventSetTileIsOpen_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_bIsOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "HouseBuilder" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouseBuilder, nullptr, "SetTileIsOpen", sizeof(HouseBuilder_eventSetTileIsOpen_Parms), Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHouseBuilder_NoRegister()
	{
		return AHouseBuilder::StaticClass();
	}
	struct Z_Construct_UClass_AHouseBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesPerUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TilesPerUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildingMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHouseBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHouseBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHouseBuilder_GetTile, "GetTile" }, // 1241030022
		{ &Z_Construct_UFunction_AHouseBuilder_RebuildHouseMesh, "RebuildHouseMesh" }, // 3506031576
		{ &Z_Construct_UFunction_AHouseBuilder_SetTile, "SetTile" }, // 2714955476
		{ &Z_Construct_UFunction_AHouseBuilder_SetTileIsOpen, "SetTileIsOpen" }, // 407303048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHouseBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "House/HouseBuilder.h" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHouseBuilder_Statics::NewProp_TilesPerUV_MetaData[] = {
		{ "Category", "HouseBuilder" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHouseBuilder_Statics::NewProp_TilesPerUV = { "TilesPerUV", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHouseBuilder, TilesPerUV), METADATA_PARAMS(Z_Construct_UClass_AHouseBuilder_Statics::NewProp_TilesPerUV_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHouseBuilder_Statics::NewProp_TilesPerUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHouseBuilder_Statics::NewProp_BuildingMesh_MetaData[] = {
		{ "Category", "HouseBuilder" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "House/HouseBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouseBuilder_Statics::NewProp_BuildingMesh = { "BuildingMesh", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHouseBuilder, BuildingMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHouseBuilder_Statics::NewProp_BuildingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHouseBuilder_Statics::NewProp_BuildingMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHouseBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseBuilder_Statics::NewProp_TilesPerUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouseBuilder_Statics::NewProp_BuildingMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHouseBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHouseBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHouseBuilder_Statics::ClassParams = {
		&AHouseBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHouseBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AHouseBuilder_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHouseBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHouseBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHouseBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHouseBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHouseBuilder, 1409422157);
	template<> ROSE_API UClass* StaticClass<AHouseBuilder>()
	{
		return AHouseBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHouseBuilder(Z_Construct_UClass_AHouseBuilder, &AHouseBuilder::StaticClass, TEXT("/Script/Rose"), TEXT("AHouseBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHouseBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
