// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPEGAME_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define ESCAPEGAME_Grabber_generated_h

#define Escapegame_Source_Escapegame_Grabber_h_16_SPARSE_DATA
#define Escapegame_Source_Escapegame_Grabber_h_16_RPC_WRAPPERS
#define Escapegame_Source_Escapegame_Grabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Escapegame_Source_Escapegame_Grabber_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escapegame"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define Escapegame_Source_Escapegame_Grabber_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escapegame"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define Escapegame_Source_Escapegame_Grabber_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define Escapegame_Source_Escapegame_Grabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define Escapegame_Source_Escapegame_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(UGrabber, InputComponent); } \
	FORCEINLINE static uint32 __PPO__PhysicsHandle() { return STRUCT_OFFSET(UGrabber, PhysicsHandle); } \
	FORCEINLINE static uint32 __PPO__Reach() { return STRUCT_OFFSET(UGrabber, Reach); }


#define Escapegame_Source_Escapegame_Grabber_h_13_PROLOG
#define Escapegame_Source_Escapegame_Grabber_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Escapegame_Source_Escapegame_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	Escapegame_Source_Escapegame_Grabber_h_16_SPARSE_DATA \
	Escapegame_Source_Escapegame_Grabber_h_16_RPC_WRAPPERS \
	Escapegame_Source_Escapegame_Grabber_h_16_INCLASS \
	Escapegame_Source_Escapegame_Grabber_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Escapegame_Source_Escapegame_Grabber_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Escapegame_Source_Escapegame_Grabber_h_16_PRIVATE_PROPERTY_OFFSET \
	Escapegame_Source_Escapegame_Grabber_h_16_SPARSE_DATA \
	Escapegame_Source_Escapegame_Grabber_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Escapegame_Source_Escapegame_Grabber_h_16_INCLASS_NO_PURE_DECLS \
	Escapegame_Source_Escapegame_Grabber_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPEGAME_API UClass* StaticClass<class UGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Escapegame_Source_Escapegame_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
