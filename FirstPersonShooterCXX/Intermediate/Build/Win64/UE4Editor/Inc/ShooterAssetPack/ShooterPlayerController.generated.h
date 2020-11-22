// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERASSETPACK_ShooterPlayerController_generated_h
#error "ShooterPlayerController.generated.h already included, missing '#pragma once' in ShooterPlayerController.h"
#endif
#define SHOOTERASSETPACK_ShooterPlayerController_generated_h

#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_SPARSE_DATA
#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_RPC_WRAPPERS
#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterAssetPack"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController)


#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAShooterPlayerController(); \
	friend struct Z_Construct_UClass_AShooterPlayerController_Statics; \
public: \
	DECLARE_CLASS(AShooterPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterAssetPack"), NO_API) \
	DECLARE_SERIALIZER(AShooterPlayerController)


#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public:


#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterPlayerController(AShooterPlayerController&&); \
	NO_API AShooterPlayerController(const AShooterPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterPlayerController)


#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HudScreenClass() { return STRUCT_OFFSET(AShooterPlayerController, HudScreenClass); } \
	FORCEINLINE static uint32 __PPO__WinScreenClass() { return STRUCT_OFFSET(AShooterPlayerController, WinScreenClass); } \
	FORCEINLINE static uint32 __PPO__LoseScreenClass() { return STRUCT_OFFSET(AShooterPlayerController, LoseScreenClass); } \
	FORCEINLINE static uint32 __PPO__RestartDelay() { return STRUCT_OFFSET(AShooterPlayerController, RestartDelay); } \
	FORCEINLINE static uint32 __PPO__HUD() { return STRUCT_OFFSET(AShooterPlayerController, HUD); }


#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_13_PROLOG
#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_SPARSE_DATA \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_RPC_WRAPPERS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_INCLASS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_SPARSE_DATA \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERASSETPACK_API UClass* StaticClass<class AShooterPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPersonShooterCXX_Source_ShooterAssetPack_ShooterPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
