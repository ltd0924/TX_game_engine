// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TT1_tt1Character_generated_h
#error "tt1Character.generated.h already included, missing '#pragma once' in tt1Character.h"
#endif
#define TT1_tt1Character_generated_h

#define tt1_Source_tt1_tt1Character_h_12_SPARSE_DATA
#define tt1_Source_tt1_tt1Character_h_12_RPC_WRAPPERS
#define tt1_Source_tt1_tt1Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define tt1_Source_tt1_tt1Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtt1Character(); \
	friend struct Z_Construct_UClass_Att1Character_Statics; \
public: \
	DECLARE_CLASS(Att1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/tt1"), NO_API) \
	DECLARE_SERIALIZER(Att1Character)


#define tt1_Source_tt1_tt1Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtt1Character(); \
	friend struct Z_Construct_UClass_Att1Character_Statics; \
public: \
	DECLARE_CLASS(Att1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/tt1"), NO_API) \
	DECLARE_SERIALIZER(Att1Character)


#define tt1_Source_tt1_tt1Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Att1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Att1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Att1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Att1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Att1Character(Att1Character&&); \
	NO_API Att1Character(const Att1Character&); \
public:


#define tt1_Source_tt1_tt1Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Att1Character(Att1Character&&); \
	NO_API Att1Character(const Att1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Att1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Att1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Att1Character)


#define tt1_Source_tt1_tt1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(Att1Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(Att1Character, FollowCamera); }


#define tt1_Source_tt1_tt1Character_h_9_PROLOG
#define tt1_Source_tt1_tt1Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tt1_Source_tt1_tt1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	tt1_Source_tt1_tt1Character_h_12_SPARSE_DATA \
	tt1_Source_tt1_tt1Character_h_12_RPC_WRAPPERS \
	tt1_Source_tt1_tt1Character_h_12_INCLASS \
	tt1_Source_tt1_tt1Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define tt1_Source_tt1_tt1Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	tt1_Source_tt1_tt1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	tt1_Source_tt1_tt1Character_h_12_SPARSE_DATA \
	tt1_Source_tt1_tt1Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	tt1_Source_tt1_tt1Character_h_12_INCLASS_NO_PURE_DECLS \
	tt1_Source_tt1_tt1Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TT1_API UClass* StaticClass<class Att1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID tt1_Source_tt1_tt1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
