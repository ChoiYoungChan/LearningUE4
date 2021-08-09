// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningCPP/chair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodechair() {}
// Cross Module References
	LEARNINGCPP_API UClass* Z_Construct_UClass_Achair_NoRegister();
	LEARNINGCPP_API UClass* Z_Construct_UClass_Achair();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearningCPP();
// End Cross Module References
	void Achair::StaticRegisterNativesAchair()
	{
	}
	UClass* Z_Construct_UClass_Achair_NoRegister()
	{
		return Achair::StaticClass();
	}
	struct Z_Construct_UClass_Achair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static void NewProp_Trigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Achair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Achair_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "chair.h" },
		{ "ModuleRelativePath", "chair.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Achair_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "chair.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Achair_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Achair, ID), METADATA_PARAMS(Z_Construct_UClass_Achair_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Achair_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Achair_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "chair.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Achair_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Achair, Speed), METADATA_PARAMS(Z_Construct_UClass_Achair_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Achair_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Achair_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "chair" },
		{ "ModuleRelativePath", "chair.h" },
	};
#endif
	void Z_Construct_UClass_Achair_Statics::NewProp_Trigger_SetBit(void* Obj)
	{
		((Achair*)Obj)->Trigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Achair_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Achair), &Z_Construct_UClass_Achair_Statics::NewProp_Trigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_Achair_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Achair_Statics::NewProp_Trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Achair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Achair_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Achair_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Achair_Statics::NewProp_Trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Achair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Achair>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Achair_Statics::ClassParams = {
		&Achair::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Achair_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Achair_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Achair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Achair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Achair()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Achair_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Achair, 1561185055);
	template<> LEARNINGCPP_API UClass* StaticClass<Achair>()
	{
		return Achair::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Achair(Z_Construct_UClass_Achair, &Achair::StaticClass, TEXT("/Script/LearningCPP"), TEXT("Achair"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Achair);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
