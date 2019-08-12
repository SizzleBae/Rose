// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Interaction/InteractionCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionCondition() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_UInteractionCondition_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_UInteractionCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UFunction* Z_Construct_UFunction_UInteractionCondition_CheckCondition();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UInteractionCondition_CheckCondition = FName(TEXT("CheckCondition"));
	bool UInteractionCondition::CheckCondition(const AActor* TriggeringActor) const
	{
		InteractionCondition_eventCheckCondition_Parms Parms;
		Parms.TriggeringActor=TriggeringActor;
		const_cast<UInteractionCondition*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInteractionCondition_CheckCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	void UInteractionCondition::StaticRegisterNativesUInteractionCondition()
	{
		UClass* Class = UInteractionCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCondition", &UInteractionCondition::execCheckCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggeringActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggeringActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionCondition_eventCheckCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionCondition_eventCheckCondition_Parms), &Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_TriggeringActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_TriggeringActor = { "TriggeringActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionCondition_eventCheckCondition_Parms, TriggeringActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_TriggeringActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_TriggeringActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::NewProp_TriggeringActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractionCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionCondition, nullptr, "CheckCondition", sizeof(InteractionCondition_eventCheckCondition_Parms), Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionCondition_CheckCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionCondition_CheckCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionCondition_NoRegister()
	{
		return UInteractionCondition::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionCondition_CheckCondition, "CheckCondition" }, // 581283793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/InteractionCondition.h" },
		{ "ModuleRelativePath", "Interaction/InteractionCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionCondition_Statics::NewProp_OwningActor_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/InteractionCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionCondition_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionCondition, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionCondition_Statics::NewProp_OwningActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInteractionCondition_Statics::NewProp_OwningActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionCondition_Statics::NewProp_OwningActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionCondition_Statics::ClassParams = {
		&UInteractionCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionCondition_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UInteractionCondition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionCondition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteractionCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionCondition, 2745165378);
	template<> ROSE_API UClass* StaticClass<UInteractionCondition>()
	{
		return UInteractionCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionCondition(Z_Construct_UClass_UInteractionCondition, &UInteractionCondition::StaticClass, TEXT("/Script/Rose"), TEXT("UInteractionCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
