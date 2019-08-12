// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Components/RoseDirectionalSpriteComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoseDirectionalSpriteComponent() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_URoseDirectionalSpriteComponent_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_URoseDirectionalSpriteComponent();
	ROSE_API UClass* Z_Construct_UClass_URoseAnimatedSpriteComponent();
	UPackage* Z_Construct_UPackage__Script_Rose();
// End Cross Module References
	void URoseDirectionalSpriteComponent::StaticRegisterNativesURoseDirectionalSpriteComponent()
	{
	}
	UClass* Z_Construct_UClass_URoseDirectionalSpriteComponent_NoRegister()
	{
		return URoseDirectionalSpriteComponent::StaticClass();
	}
	struct Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URoseAnimatedSpriteComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/RoseDirectionalSpriteComponent.h" },
		{ "ModuleRelativePath", "Components/RoseDirectionalSpriteComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoseDirectionalSpriteComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics::ClassParams = {
		&URoseDirectionalSpriteComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoseDirectionalSpriteComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoseDirectionalSpriteComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoseDirectionalSpriteComponent, 4283781857);
	template<> ROSE_API UClass* StaticClass<URoseDirectionalSpriteComponent>()
	{
		return URoseDirectionalSpriteComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoseDirectionalSpriteComponent(Z_Construct_UClass_URoseDirectionalSpriteComponent, &URoseDirectionalSpriteComponent::StaticClass, TEXT("/Script/Rose"), TEXT("URoseDirectionalSpriteComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoseDirectionalSpriteComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
