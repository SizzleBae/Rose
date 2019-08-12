// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Tile/TileBuildableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBuildableComponent() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_UTileBuildableComponent_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_UTileBuildableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UFunction* Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UTileBuildableComponent::StaticRegisterNativesUTileBuildableComponent()
	{
		UClass* Class = UTileBuildableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuildableTileActors", &UTileBuildableComponent::execGetBuildableTileActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics
	{
		struct TileBuildableComponent_eventGetBuildableTileActors_Parms
		{
			TMap<FName,UClass*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TileBuildableComponent_eventGetBuildableTileActors_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileBuild" },
		{ "ModuleRelativePath", "Tile/TileBuildableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileBuildableComponent, nullptr, "GetBuildableTileActors", sizeof(TileBuildableComponent_eventGetBuildableTileActors_Parms), Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTileBuildableComponent_NoRegister()
	{
		return UTileBuildableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTileBuildableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileBuildableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTileBuildableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileBuildableComponent_GetBuildableTileActors, "GetBuildableTileActors" }, // 4119210668
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileBuildableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Tile/TileBuildableComponent.h" },
		{ "ModuleRelativePath", "Tile/TileBuildableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileBuildableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileBuildableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileBuildableComponent_Statics::ClassParams = {
		&UTileBuildableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileBuildableComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTileBuildableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileBuildableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileBuildableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileBuildableComponent, 3430973444);
	template<> ROSE_API UClass* StaticClass<UTileBuildableComponent>()
	{
		return UTileBuildableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileBuildableComponent(Z_Construct_UClass_UTileBuildableComponent, &UTileBuildableComponent::StaticClass, TEXT("/Script/Rose"), TEXT("UTileBuildableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileBuildableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
