// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Tile/TileActorHolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileActorHolder() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_UTileActorHolder_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_UTileActorHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Rose();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ROSE_API UClass* Z_Construct_UClass_ATileActor_NoRegister();
// End Cross Module References
	void UTileActorHolder::StaticRegisterNativesUTileActorHolder()
	{
	}
	UClass* Z_Construct_UClass_UTileActorHolder_NoRegister()
	{
		return UTileActorHolder::StaticClass();
	}
	struct Z_Construct_UClass_UTileActorHolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TileActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileActors_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileActors_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileActorHolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileActorHolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile/TileActorHolder.h" },
		{ "ModuleRelativePath", "Tile/TileActorHolder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors_MetaData[] = {
		{ "ModuleRelativePath", "Tile/TileActorHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors = { "TileActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTileActorHolder, TileActors), METADATA_PARAMS(Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors_Key_KeyProp = { "TileActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors_ValueProp = { "TileActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ATileActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileActorHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileActorHolder_Statics::NewProp_TileActors_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileActorHolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileActorHolder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileActorHolder_Statics::ClassParams = {
		&UTileActorHolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileActorHolder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTileActorHolder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileActorHolder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTileActorHolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileActorHolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileActorHolder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileActorHolder, 2859357928);
	template<> ROSE_API UClass* StaticClass<UTileActorHolder>()
	{
		return UTileActorHolder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileActorHolder(Z_Construct_UClass_UTileActorHolder, &UTileActorHolder::StaticClass, TEXT("/Script/Rose"), TEXT("UTileActorHolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileActorHolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
