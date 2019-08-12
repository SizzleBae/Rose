// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/House/House.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHouse() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_AHouse_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AHouse();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UFunction* Z_Construct_UFunction_AHouse_GetHouseBuilder();
	ROSE_API UClass* Z_Construct_UClass_AHouseBuilder_NoRegister();
	ROSE_API UFunction* Z_Construct_UFunction_AHouse_GetMapSize();
	ROSE_API UFunction* Z_Construct_UFunction_AHouse_GetTileActorHolder();
	ROSE_API UClass* Z_Construct_UClass_UTileActorHolder_NoRegister();
	ROSE_API UFunction* Z_Construct_UFunction_AHouse_GetTileSize();
// End Cross Module References
	void AHouse::StaticRegisterNativesAHouse()
	{
		UClass* Class = AHouse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHouseBuilder", &AHouse::execGetHouseBuilder },
			{ "GetMapSize", &AHouse::execGetMapSize },
			{ "GetTileActorHolder", &AHouse::execGetTileActorHolder },
			{ "GetTileSize", &AHouse::execGetTileSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics
	{
		struct House_eventGetHouseBuilder_Parms
		{
			AHouseBuilder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(House_eventGetHouseBuilder_Parms, ReturnValue), Z_Construct_UClass_AHouseBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::Function_MetaDataParams[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "House/House.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouse, nullptr, "GetHouseBuilder", sizeof(House_eventGetHouseBuilder_Parms), Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouse_GetHouseBuilder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouse_GetHouseBuilder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHouse_GetMapSize_Statics
	{
		struct House_eventGetMapSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHouse_GetMapSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(House_eventGetMapSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouse_GetMapSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouse_GetMapSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouse_GetMapSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "House/House.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouse_GetMapSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouse, nullptr, "GetMapSize", sizeof(House_eventGetMapSize_Parms), Z_Construct_UFunction_AHouse_GetMapSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetMapSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouse_GetMapSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetMapSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouse_GetMapSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouse_GetMapSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics
	{
		struct House_eventGetTileActorHolder_Parms
		{
			UTileActorHolder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(House_eventGetTileActorHolder_Parms, ReturnValue), Z_Construct_UClass_UTileActorHolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "House/House.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouse, nullptr, "GetTileActorHolder", sizeof(House_eventGetTileActorHolder_Parms), Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouse_GetTileActorHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouse_GetTileActorHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHouse_GetTileSize_Statics
	{
		struct House_eventGetTileSize_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHouse_GetTileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(House_eventGetTileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHouse_GetTileSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHouse_GetTileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHouse_GetTileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "House/House.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHouse_GetTileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHouse, nullptr, "GetTileSize", sizeof(House_eventGetTileSize_Parms), Z_Construct_UFunction_AHouse_GetTileSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetTileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHouse_GetTileSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHouse_GetTileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHouse_GetTileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHouse_GetTileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHouse_NoRegister()
	{
		return AHouse::StaticClass();
	}
	struct Z_Construct_UClass_AHouse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileActorHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileActorHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HouseBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HouseBuilder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHouse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHouse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHouse_GetHouseBuilder, "GetHouseBuilder" }, // 3825420737
		{ &Z_Construct_UFunction_AHouse_GetMapSize, "GetMapSize" }, // 582537960
		{ &Z_Construct_UFunction_AHouse_GetTileActorHolder, "GetTileActorHolder" }, // 2448622805
		{ &Z_Construct_UFunction_AHouse_GetTileSize, "GetTileSize" }, // 3827357890
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHouse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "House/House.h" },
		{ "ModuleRelativePath", "House/House.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHouse_Statics::NewProp_TileActorHolder_MetaData[] = {
		{ "ModuleRelativePath", "House/House.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouse_Statics::NewProp_TileActorHolder = { "TileActorHolder", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHouse, TileActorHolder), Z_Construct_UClass_UTileActorHolder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHouse_Statics::NewProp_TileActorHolder_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHouse_Statics::NewProp_TileActorHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHouse_Statics::NewProp_HouseBuilder_MetaData[] = {
		{ "ModuleRelativePath", "House/House.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHouse_Statics::NewProp_HouseBuilder = { "HouseBuilder", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHouse, HouseBuilder), Z_Construct_UClass_AHouseBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHouse_Statics::NewProp_HouseBuilder_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHouse_Statics::NewProp_HouseBuilder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouse_Statics::NewProp_TileActorHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHouse_Statics::NewProp_HouseBuilder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHouse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHouse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHouse_Statics::ClassParams = {
		&AHouse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHouse_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AHouse_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHouse_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHouse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHouse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHouse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHouse, 164959955);
	template<> ROSE_API UClass* StaticClass<AHouse>()
	{
		return AHouse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHouse(Z_Construct_UClass_AHouse, &AHouse::StaticClass, TEXT("/Script/Rose"), TEXT("AHouse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHouse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
