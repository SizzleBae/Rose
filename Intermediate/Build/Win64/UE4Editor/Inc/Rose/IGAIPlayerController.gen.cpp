// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Standard/IGAIPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIGAIPlayerController() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_AIGAIPlayerController_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_AIGAIPlayerController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Rose();
// End Cross Module References
	void AIGAIPlayerController::StaticRegisterNativesAIGAIPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AIGAIPlayerController_NoRegister()
	{
		return AIGAIPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AIGAIPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIGAIPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIGAIPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Standard/IGAIPlayerController.h" },
		{ "ModuleRelativePath", "Standard/IGAIPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIGAIPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIGAIPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIGAIPlayerController_Statics::ClassParams = {
		&AIGAIPlayerController::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AIGAIPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIGAIPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIGAIPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIGAIPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIGAIPlayerController, 2956661918);
	template<> ROSE_API UClass* StaticClass<AIGAIPlayerController>()
	{
		return AIGAIPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIGAIPlayerController(Z_Construct_UClass_AIGAIPlayerController, &AIGAIPlayerController::StaticClass, TEXT("/Script/Rose"), TEXT("AIGAIPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIGAIPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
