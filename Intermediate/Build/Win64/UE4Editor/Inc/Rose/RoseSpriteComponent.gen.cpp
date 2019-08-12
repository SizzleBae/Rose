// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Components/RoseSpriteComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoseSpriteComponent() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_URoseSpriteComponent_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_URoseSpriteComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UFunction* Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ROSE_API UFunction* Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize();
	ROSE_API UFunction* Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void URoseSpriteComponent::StaticRegisterNativesURoseSpriteComponent()
	{
		UClass* Class = URoseSpriteComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSpriteSheetGridPos", &URoseSpriteComponent::execSetSpriteSheetGridPos },
			{ "SetSpriteSheetGridSize", &URoseSpriteComponent::execSetSpriteSheetGridSize },
			{ "SetSpriteTexture", &URoseSpriteComponent::execSetSpriteTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics
	{
		struct RoseSpriteComponent_eventSetSpriteSheetGridPos_Parms
		{
			FIntPoint InSpriteSheetGridPos;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSpriteSheetGridPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSpriteSheetGridPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::NewProp_InSpriteSheetGridPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::NewProp_InSpriteSheetGridPos = { "InSpriteSheetGridPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoseSpriteComponent_eventSetSpriteSheetGridPos_Parms, InSpriteSheetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::NewProp_InSpriteSheetGridPos_MetaData, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::NewProp_InSpriteSheetGridPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::NewProp_InSpriteSheetGridPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoseSpriteComponent, nullptr, "SetSpriteSheetGridPos", sizeof(RoseSpriteComponent_eventSetSpriteSheetGridPos_Parms), Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics
	{
		struct RoseSpriteComponent_eventSetSpriteSheetGridSize_Parms
		{
			FIntPoint InSpriteSheetGridSize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSpriteSheetGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSpriteSheetGridSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::NewProp_InSpriteSheetGridSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::NewProp_InSpriteSheetGridSize = { "InSpriteSheetGridSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoseSpriteComponent_eventSetSpriteSheetGridSize_Parms, InSpriteSheetGridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::NewProp_InSpriteSheetGridSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::NewProp_InSpriteSheetGridSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::NewProp_InSpriteSheetGridSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoseSpriteComponent, nullptr, "SetSpriteSheetGridSize", sizeof(RoseSpriteComponent_eventSetSpriteSheetGridSize_Parms), Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics
	{
		struct RoseSpriteComponent_eventSetSpriteTexture_Parms
		{
			UTexture2D* InSpriteTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSpriteTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::NewProp_InSpriteTexture = { "InSpriteTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoseSpriteComponent_eventSetSpriteTexture_Parms, InSpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::NewProp_InSpriteTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoseSpriteComponent, nullptr, "SetSpriteTexture", sizeof(RoseSpriteComponent_eventSetSpriteTexture_Parms), Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URoseSpriteComponent_NoRegister()
	{
		return URoseSpriteComponent::StaticClass();
	}
	struct Z_Construct_UClass_URoseSpriteComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSpriteCollision_MetaData[];
#endif
		static void NewProp_bEnableSpriteCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSpriteCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteSheetGridPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteSheetGridPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteSheetGridSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteSheetGridSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteMaterialParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteMaterialParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoseSpriteComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URoseSpriteComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridPos, "SetSpriteSheetGridPos" }, // 3876385089
		{ &Z_Construct_UFunction_URoseSpriteComponent_SetSpriteSheetGridSize, "SetSpriteSheetGridSize" }, // 590596519
		{ &Z_Construct_UFunction_URoseSpriteComponent_SetSpriteTexture, "SetSpriteTexture" }, // 3010575179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseSpriteComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/RoseSpriteComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_bEnableSpriteCollision_MetaData[] = {
		{ "Category", "RoseSpriteComponent" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	void Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_bEnableSpriteCollision_SetBit(void* Obj)
	{
		((URoseSpriteComponent*)Obj)->bEnableSpriteCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_bEnableSpriteCollision = { "bEnableSpriteCollision", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URoseSpriteComponent), &Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_bEnableSpriteCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_bEnableSpriteCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_bEnableSpriteCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridPos_MetaData[] = {
		{ "BlueprintSetter", "SetSpriteSheetGridPos" },
		{ "Category", "RoseSpriteComponent" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridPos = { "SpriteSheetGridPos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoseSpriteComponent, SpriteSheetGridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridSize_MetaData[] = {
		{ "BlueprintSetter", "SetSpriteSheetGridSize" },
		{ "Category", "RoseSpriteComponent" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridSize = { "SpriteSheetGridSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoseSpriteComponent, SpriteSheetGridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteTexture_MetaData[] = {
		{ "BlueprintSetter", "SetSpriteTexture" },
		{ "Category", "RoseSpriteComponent" },
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteTexture = { "SpriteTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoseSpriteComponent, SpriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialInstance = { "SpriteMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoseSpriteComponent, SpriteMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialParent_MetaData[] = {
		{ "ModuleRelativePath", "Components/RoseSpriteComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialParent = { "SpriteMaterialParent", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoseSpriteComponent, SpriteMaterialParent), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoseSpriteComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_bEnableSpriteCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteSheetGridSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoseSpriteComponent_Statics::NewProp_SpriteMaterialParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoseSpriteComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoseSpriteComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoseSpriteComponent_Statics::ClassParams = {
		&URoseSpriteComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URoseSpriteComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoseSpriteComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URoseSpriteComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoseSpriteComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoseSpriteComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoseSpriteComponent, 1418593631);
	template<> ROSE_API UClass* StaticClass<URoseSpriteComponent>()
	{
		return URoseSpriteComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoseSpriteComponent(Z_Construct_UClass_URoseSpriteComponent, &URoseSpriteComponent::StaticClass, TEXT("/Script/Rose"), TEXT("URoseSpriteComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoseSpriteComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
