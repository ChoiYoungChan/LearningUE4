// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAMERACONTROLL_CameraControllCharacter_generated_h
#error "CameraControllCharacter.generated.h already included, missing '#pragma once' in CameraControllCharacter.h"
#endif
#define CAMERACONTROLL_CameraControllCharacter_generated_h

#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_SPARSE_DATA
#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_RPC_WRAPPERS
#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraControllCharacter(); \
	friend struct Z_Construct_UClass_ACameraControllCharacter_Statics; \
public: \
	DECLARE_CLASS(ACameraControllCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CameraControll"), NO_API) \
	DECLARE_SERIALIZER(ACameraControllCharacter)


#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACameraControllCharacter(); \
	friend struct Z_Construct_UClass_ACameraControllCharacter_Statics; \
public: \
	DECLARE_CLASS(ACameraControllCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CameraControll"), NO_API) \
	DECLARE_SERIALIZER(ACameraControllCharacter)


#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraControllCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraControllCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraControllCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraControllCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraControllCharacter(ACameraControllCharacter&&); \
	NO_API ACameraControllCharacter(const ACameraControllCharacter&); \
public:


#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraControllCharacter(ACameraControllCharacter&&); \
	NO_API ACameraControllCharacter(const ACameraControllCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraControllCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraControllCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraControllCharacter)


#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACameraControllCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACameraControllCharacter, FollowCamera); }


#define CameraControll_Source_CameraControll_CameraControllCharacter_h_9_PROLOG
#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_SPARSE_DATA \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_RPC_WRAPPERS \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_INCLASS \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CameraControll_Source_CameraControll_CameraControllCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_SPARSE_DATA \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CameraControll_Source_CameraControll_CameraControllCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAMERACONTROLL_API UClass* StaticClass<class ACameraControllCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CameraControll_Source_CameraControll_CameraControllCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
