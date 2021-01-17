// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraControll/CameraControllGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraControllGameMode() {}
// Cross Module References
	CAMERACONTROLL_API UClass* Z_Construct_UClass_ACameraControllGameMode_NoRegister();
	CAMERACONTROLL_API UClass* Z_Construct_UClass_ACameraControllGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CameraControll();
// End Cross Module References
	void ACameraControllGameMode::StaticRegisterNativesACameraControllGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACameraControllGameMode_NoRegister()
	{
		return ACameraControllGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACameraControllGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraControllGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraControll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraControllGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CameraControllGameMode.h" },
		{ "ModuleRelativePath", "CameraControllGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraControllGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraControllGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraControllGameMode_Statics::ClassParams = {
		&ACameraControllGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACameraControllGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraControllGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraControllGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraControllGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraControllGameMode, 3940337206);
	template<> CAMERACONTROLL_API UClass* StaticClass<ACameraControllGameMode>()
	{
		return ACameraControllGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraControllGameMode(Z_Construct_UClass_ACameraControllGameMode, &ACameraControllGameMode::StaticClass, TEXT("/Script/CameraControll"), TEXT("ACameraControllGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraControllGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
