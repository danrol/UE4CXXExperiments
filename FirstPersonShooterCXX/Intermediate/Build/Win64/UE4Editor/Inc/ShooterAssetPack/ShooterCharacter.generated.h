// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERASSETPACK_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define SHOOTERASSETPACK_ShooterCharacter_generated_h

#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_SPARSE_DATA
#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDead);


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDead);


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterAssetPack"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterAssetPack"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public:


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RotationRate() { return STRUCT_OFFSET(AShooterCharacter, RotationRate); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(AShooterCharacter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(AShooterCharacter, Gun); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AShooterCharacter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AShooterCharacter, Health); }


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_11_PROLOG
#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_SPARSE_DATA \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_RPC_WRAPPERS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_INCLASS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_SPARSE_DATA \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERASSETPACK_API UClass* StaticClass<class AShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPersonShooterCXX_Source_ShooterAssetPack_Characters_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
