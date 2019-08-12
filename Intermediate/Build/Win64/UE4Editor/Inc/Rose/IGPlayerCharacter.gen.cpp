// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Standard/IGPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIGPlayerCharacter() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_AIGPlayerCharacter_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UClass* Z_Construct_UClass_URoseDirectionalSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_UTileTrackerComponent_NoRegister();
// End Cross Module References
	void AIGPlayerCharacter::StaticRegisterNativesAIGPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AIGPlayerCharacter_NoRegister()
	{
		return AIGPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AIGPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileTrackerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileTrackerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIGPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Standard/IGPlayerCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Standard/IGPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Category", "IGPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Standard/IGPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerCharacter, SpriteComponent), Z_Construct_UClass_URoseDirectionalSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "Category", "IGPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Standard/IGPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerCharacter, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_CapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_PawnMovement_MetaData[] = {
		{ "Category", "IGPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Standard/IGPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_PawnMovement = { "PawnMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerCharacter, PawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_PawnMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_PawnMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_TileTrackerComponent_MetaData[] = {
		{ "Category", "IGPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Standard/IGPlayerCharacter.h" },
		{ "ToolTip", "UPROPERTY()\nclass USceneComponent* SceneComponent;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_TileTrackerComponent = { "TileTrackerComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIGPlayerCharacter, TileTrackerComponent), Z_Construct_UClass_UTileTrackerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_TileTrackerComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_TileTrackerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIGPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_PawnMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIGPlayerCharacter_Statics::NewProp_TileTrackerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIGPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIGPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIGPlayerCharacter_Statics::ClassParams = {
		&AIGPlayerCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIGPlayerCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AIGPlayerCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AIGPlayerCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIGPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIGPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIGPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIGPlayerCharacter, 2894300507);
	template<> ROSE_API UClass* StaticClass<AIGPlayerCharacter>()
	{
		return AIGPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIGPlayerCharacter(Z_Construct_UClass_AIGPlayerCharacter, &AIGPlayerCharacter::StaticClass, TEXT("/Script/Rose"), TEXT("AIGPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIGPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
