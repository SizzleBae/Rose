// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Components/RoseAnimatedSpriteComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoseAnimatedSpriteComponent() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_URoseAnimatedSpriteComponent_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_URoseAnimatedSpriteComponent();
	ROSE_API UClass* Z_Construct_UClass_URoseSpriteComponent();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UFunction* Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS();
	ROSE_API UFunction* Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame();
	ROSE_API UFunction* Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount();
// End Cross Module References
	void URoseAnimatedSpriteComponent::StaticRegisterNativesURoseAnimatedSpriteComponent()
	{
		UClass* Class = URoseAnimatedSpriteComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFPS", &URoseAnimatedSpriteComponent::execSetFPS },
			{ "SetFrame", &URoseAnimatedSpriteComponent::execSetFrame },
			{ "SetFrameCount", &URoseAnimatedSpriteComponent::execSetFrameCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics
	{
		struct RoseAnimatedSpriteComponent_eventSetFPS_Parms
		{
			float NewFPS;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFPS;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::NewProp_NewFPS = { "NewFPS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoseAnimatedSpriteComponent_eventSetFPS_Parms, NewFPS), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::NewProp_NewFPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Components/RoseAnimatedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoseAnimatedSpriteComponent, nullptr, "SetFPS", sizeof(RoseAnimatedSpriteComponent_eventSetFPS_Parms), Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics
	{
		struct RoseAnimatedSpriteComponent_eventSetFrame_Parms
		{
			int32 NewFrame;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::NewProp_NewFrame = { "NewFrame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoseAnimatedSpriteComponent_eventSetFrame_Parms, NewFrame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::NewProp_NewFrame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/RoseAnimatedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoseAnimatedSpriteComponent, nullptr, "SetFrame", sizeof(RoseAnimatedSpriteComponent_eventSetFrame_Parms), Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics
	{
		struct RoseAnimatedSpriteComponent_eventSetFrameCount_Parms
		{
			int32 NewFrameCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewFrameCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::NewProp_NewFrameCount = { "NewFrameCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoseAnimatedSpriteComponent_eventSetFrameCount_Parms, NewFrameCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::NewProp_NewFrameCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Components/RoseAnimatedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoseAnimatedSpriteComponent, nullptr, "SetFrameCount", sizeof(RoseAnimatedSpriteComponent_eventSetFrameCount_Parms), Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URoseAnimatedSpriteComponent_NoRegister()
	{
		return URoseAnimatedSpriteComponent::StaticClass();
	}
	struct Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URoseSpriteComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFPS, "SetFPS" }, // 3232681076
		{ &Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrame, "SetFrame" }, // 2577078989
		{ &Z_Construct_UFunction_URoseAnimatedSpriteComponent_SetFrameCount, "SetFrameCount" }, // 3189113827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/RoseAnimatedSpriteComponent.h" },
		{ "ModuleRelativePath", "Components/RoseAnimatedSpriteComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FPS_MetaData[] = {
		{ "BlueprintSetter", "SetFPS" },
		{ "Category", "RoseAnimatedSpriteComponent" },
		{ "ModuleRelativePath", "Components/RoseAnimatedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoseAnimatedSpriteComponent, FPS), METADATA_PARAMS(Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FPS_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FrameCount_MetaData[] = {
		{ "BlueprintSetter", "SetFrameCount" },
		{ "Category", "RoseAnimatedSpriteComponent" },
		{ "ModuleRelativePath", "Components/RoseAnimatedSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoseAnimatedSpriteComponent, FrameCount), METADATA_PARAMS(Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FrameCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FrameCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::NewProp_FrameCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoseAnimatedSpriteComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::ClassParams = {
		&URoseAnimatedSpriteComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoseAnimatedSpriteComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoseAnimatedSpriteComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoseAnimatedSpriteComponent, 3514557693);
	template<> ROSE_API UClass* StaticClass<URoseAnimatedSpriteComponent>()
	{
		return URoseAnimatedSpriteComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoseAnimatedSpriteComponent(Z_Construct_UClass_URoseAnimatedSpriteComponent, &URoseAnimatedSpriteComponent::StaticClass, TEXT("/Script/Rose"), TEXT("URoseAnimatedSpriteComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoseAnimatedSpriteComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
