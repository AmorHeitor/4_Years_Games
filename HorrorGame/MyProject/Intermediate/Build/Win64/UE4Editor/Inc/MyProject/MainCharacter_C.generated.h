// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MainCharacter_C_generated_h
#error "MainCharacter_C.generated.h already included, missing '#pragma once' in MainCharacter_C.h"
#endif
#define MYPROJECT_MainCharacter_C_generated_h

#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_SPARSE_DATA
#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter_C(); \
	friend struct Z_Construct_UClass_AMainCharacter_C_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter_C, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter_C)


#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter_C(); \
	friend struct Z_Construct_UClass_AMainCharacter_C_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter_C, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter_C)


#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter_C(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter_C(AMainCharacter_C&&); \
	NO_API AMainCharacter_C(const AMainCharacter_C&); \
public:


#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter_C(AMainCharacter_C&&); \
	NO_API AMainCharacter_C(const AMainCharacter_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter_C); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter_C)


#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AMainCharacter_C, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringComp() { return STRUCT_OFFSET(AMainCharacter_C, SpringComp); }


#define MyProject_Source_MyProject_Public_MainCharacter_C_h_9_PROLOG
#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_INCLASS \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Public_MainCharacter_C_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_SPARSE_DATA \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_MainCharacter_C_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMainCharacter_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Public_MainCharacter_C_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
