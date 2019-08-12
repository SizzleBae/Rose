// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rose/Interaction/InteractionAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionAction() {}
// Cross Module References
	ROSE_API UClass* Z_Construct_UClass_UInteractionAction_NoRegister();
	ROSE_API UClass* Z_Construct_UClass_UInteractionAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Rose();
	ROSE_API UFunction* Z_Construct_UFunction_UInteractionAction_ExecuteAction();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UInteractionAction_ExecuteAction = FName(TEXT("ExecuteAction"));
	void UInteractionAction::ExecuteAction(AActor* TriggeringActor)
	{
		InteractionAction_eventExecuteAction_Parms Parms;
		Parms.TriggeringActor=TriggeringActor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionAction_ExecuteAction),&Parms);
	}
	void UInteractionAction::StaticRegisterNativesUInteractionAction()
	{
		UClass* Class = UInteractionAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAction", &UInteractionAction::execExecuteAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggeringActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::NewProp_TriggeringActor = { "TriggeringActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionAction_eventExecuteAction_Parms, TriggeringActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::NewProp_TriggeringActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/InteractionAction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionAction, nullptr, "ExecuteAction", sizeof(InteractionAction_eventExecuteAction_Parms), Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionAction_ExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionAction_ExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionAction_NoRegister()
	{
		return UInteractionAction::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rose,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionAction_ExecuteAction, "ExecuteAction" }, // 2533379547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interaction/InteractionAction.h" },
		{ "ModuleRelativePath", "Interaction/InteractionAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionAction_Statics::ClassParams = {
		&UInteractionAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionAction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteractionAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionAction, 24330137);
	template<> ROSE_API UClass* StaticClass<UInteractionAction>()
	{
		return UInteractionAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionAction(Z_Construct_UClass_UInteractionAction, &UInteractionAction::StaticClass, TEXT("/Script/Rose"), TEXT("UInteractionAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
