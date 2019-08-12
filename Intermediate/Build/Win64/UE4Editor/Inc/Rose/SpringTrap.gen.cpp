// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Tile/Actor/SpringTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringTrap() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_ASpringTrap_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_ASpringTrap();
	ROSE_API UClass* Z_Construct_UClass_ATileActor();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UClass* Z_Construct_UClass_UTileBuildableComponent_NoRegister();
// End Cross Module References
	void ASpringTrap::StaticRegisterNativesASpringTrap()
	{
	}
	UClass* Z_Construct_UClass_ASpringTrap_NoRegister()
	{
		return ASpringTrap::StaticClass();
	}
	struct Z_Construct_UClass_ASpringTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileBuildableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileBuildableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpringTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATileActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile/Actor/SpringTrap.h" },
		{ "ModuleRelativePath", "Tile/Actor/SpringTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpringTrap_Statics::NewProp_TileBuildableComponent_MetaData[] = {
		{ "Category", "SpringTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tile/Actor/SpringTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpringTrap_Statics::NewProp_TileBuildableComponent = { "TileBuildableComponent", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpringTrap, TileBuildableComponent), Z_Construct_UClass_UTileBuildableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpringTrap_Statics::NewProp_TileBuildableComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpringTrap_Statics::NewProp_TileBuildableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpringTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpringTrap_Statics::NewProp_TileBuildableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpringTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpringTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpringTrap_Statics::ClassParams = {
		&ASpringTrap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpringTrap_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASpringTrap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpringTrap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpringTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpringTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpringTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpringTrap, 3641856991);
	template<> ROSE_API UClass* StaticClass<ASpringTrap>()
	{
		return ASpringTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpringTrap(Z_Construct_UClass_ASpringTrap, &ASpringTrap::StaticClass, TEXT("/Script/Rose"), TEXT("ASpringTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpringTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
