// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Tile/TileTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileTrackerComponent() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_UTileTrackerComponent_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_UTileTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Rose();
// End Cross Module References
	void UTileTrackerComponent::StaticRegisterNativesUTileTrackerComponent()
	{
	}
	UClass* Z_Construct_UClass_UTileTrackerComponent_NoRegister()
	{
		return UTileTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTileTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Tile/TileTrackerComponent.h" },
		{ "ModuleRelativePath", "Tile/TileTrackerComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileTrackerComponent_Statics::ClassParams = {
		&UTileTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileTrackerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTileTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileTrackerComponent, 4271527178);
	template<> ROSE_API UClass* StaticClass<UTileTrackerComponent>()
	{
		return UTileTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileTrackerComponent(Z_Construct_UClass_UTileTrackerComponent, &UTileTrackerComponent::StaticClass, TEXT("/Script/Rose"), TEXT("UTileTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
