// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Tile/TileOverlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileOverlay() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_ATileOverlay_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_ATileOverlay();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATileOverlay::StaticRegisterNativesATileOverlay()
	{
	}
	UClass* Z_Construct_UClass_ATileOverlay_NoRegister()
	{
		return ATileOverlay::StaticClass();
	}
	struct Z_Construct_UClass_ATileOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileOverlayTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileOverlayTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileOverlayMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileOverlayMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileOverlayMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileOverlayMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATileOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile/TileOverlay.h" },
		{ "ModuleRelativePath", "Tile/TileOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayTexture_MetaData[] = {
		{ "ModuleRelativePath", "Tile/TileOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayTexture = { "TileOverlayTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileOverlay, TileOverlayTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Tile/TileOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterialInstance = { "TileOverlayMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileOverlay, TileOverlayMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Tile/TileOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterial = { "TileOverlayMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileOverlay, TileOverlayMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileOverlay_Statics::NewProp_PlaneMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tile/TileOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileOverlay_Statics::NewProp_PlaneMesh = { "PlaneMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileOverlay, PlaneMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATileOverlay_Statics::NewProp_PlaneMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileOverlay_Statics::NewProp_PlaneMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileOverlay_Statics::NewProp_TileOverlayMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileOverlay_Statics::NewProp_PlaneMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATileOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileOverlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATileOverlay_Statics::ClassParams = {
		&ATileOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATileOverlay_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATileOverlay_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATileOverlay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATileOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATileOverlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATileOverlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATileOverlay, 2550838527);
	template<> ROSE_API UClass* StaticClass<ATileOverlay>()
	{
		return ATileOverlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATileOverlay(Z_Construct_UClass_ATileOverlay, &ATileOverlay::StaticClass, TEXT("/Script/Rose"), TEXT("ATileOverlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileOverlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
