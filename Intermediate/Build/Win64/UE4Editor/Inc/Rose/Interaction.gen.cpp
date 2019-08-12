// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Interaction/Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteraction() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_UInteraction_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_UInteraction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Rose();
// End Cross Module References
	void UInteraction::StaticRegisterNativesUInteraction()
	{
	}
	UClass* Z_Construct_UClass_UInteraction_NoRegister()
	{
		return UInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/Interaction.h" },
		{ "ModuleRelativePath", "Interaction/Interaction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteraction_Statics::ClassParams = {
		&UInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteraction, 2399520210);
	template<> ROSE_API UClass* StaticClass<UInteraction>()
	{
		return UInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteraction(Z_Construct_UClass_UInteraction, &UInteraction::StaticClass, TEXT("/Script/Rose"), TEXT("UInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
