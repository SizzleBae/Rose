// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Standard/IGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIGGameMode() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_AIGGameMode_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UFunction* Z_Construct_UFunction_AIGGameMode_GetHouse();
	ROSE_API UClass* Z_Construct_UClass_AHouse_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGPlayerController_NoRegister();
// End Cross Module References
	void AIGGameMode::StaticRegisterNativesAIGGameMode()
	{
		UClass* Class = AIGGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHouse", &AIGGameMode::execGetHouse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIGGameMode_GetHouse_Statics
	{
		struct IGGameMode_eventGetHouse_Parms
		{
			AHouse* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IGGameMode_eventGetHouse_Parms, ReturnValue), Z_Construct_UClass_AHouse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "IGGameMode" },
		{ "ModuleRelativePath", "Standard/IGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIGGameMode, nullptr, "GetHouse", sizeof(IGGameMode_eventGetHouse_Parms), Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIGGameMode_GetHouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIGGameMode_GetHouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIGGameMode_NoRegister()
	{
		return AIGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_House_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_House;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AIGGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIGGameMode_GetHouse, "GetHouse" }, // 3772346236
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Standard/IGGameMode.h" },
		{ "ModuleRelativePath", "Standard/IGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGGameMode_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGGameMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGGameMode, PlayerController), Z_Construct_UClass_AIGPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGGameMode_Statics::NewProp_PlayerController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGGameMode_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGGameMode_Statics::NewProp_House_MetaData[] = {
		{ "ModuleRelativePath", "Standard/IGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGGameMode_Statics::NewProp_House = { "House", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGGameMode, House), Z_Construct_UClass_AHouse_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGGameMode_Statics::NewProp_House_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGGameMode_Statics::NewProp_House_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIGGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGGameMode_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGGameMode_Statics::NewProp_House,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIGGameMode_Statics::ClassParams = {
		&AIGGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AIGGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AIGGameMode_Statics::PropPointers),
		0,
		0x008002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AIGGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIGGameMode, 4024398314);
	template<> ROSE_API UClass* StaticClass<AIGGameMode>()
	{
		return AIGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIGGameMode(Z_Construct_UClass_AIGGameMode, &AIGGameMode::StaticClass, TEXT("/Script/Rose"), TEXT("AIGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
