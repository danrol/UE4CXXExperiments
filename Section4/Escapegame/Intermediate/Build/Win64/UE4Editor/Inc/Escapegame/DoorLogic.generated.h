// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPEGAME_DoorLogic_generated_h
#error "DoorLogic.generated.h already included, missing '#pragma once' in DoorLogic.h"
#endif
#define ESCAPEGAME_DoorLogic_generated_h

#define Escapegame_Source_Escapegame_DoorLogic_h_18_SPARSE_DATA
#define Escapegame_Source_Escapegame_DoorLogic_h_18_RPC_WRAPPERS
#define Escapegame_Source_Escapegame_DoorLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Escapegame_Source_Escapegame_DoorLogic_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDoorLogic(); \
	friend struct Z_Construct_UClass_UDoorLogic_Statics; \
public: \
	DECLARE_CLASS(UDoorLogic, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escapegame"), NO_API) \
	DECLARE_SERIALIZER(UDoorLogic)


#define Escapegame_Source_Escapegame_DoorLogic_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDoorLogic(); \
	friend struct Z_Construct_UClass_UDoorLogic_Statics; \
public: \
	DECLARE_CLASS(UDoorLogic, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escapegame"), NO_API) \
	DECLARE_SERIALIZER(UDoorLogic)


#define Escapegame_Source_Escapegame_DoorLogic_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDoorLogic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorLogic(UDoorLogic&&); \
	NO_API UDoorLogic(const UDoorLogic&); \
public:


#define Escapegame_Source_Escapegame_DoorLogic_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDoorLogic(UDoorLogic&&); \
	NO_API UDoorLogic(const UDoorLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDoorLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDoorLogic)


#define Escapegame_Source_Escapegame_DoorLogic_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UDoorLogic, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__OpenAngle() { return STRUCT_OFFSET(UDoorLogic, OpenAngle); } \
	FORCEINLINE static uint32 __PPO__MassToOpenDoor() { return STRUCT_OFFSET(UDoorLogic, MassToOpenDoor); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UDoorLogic, DoorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__OpenDoorSpeed() { return STRUCT_OFFSET(UDoorLogic, OpenDoorSpeed); } \
	FORCEINLINE static uint32 __PPO__CloseDoorSpeed() { return STRUCT_OFFSET(UDoorLogic, CloseDoorSpeed); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(UDoorLogic, AudioComponent); }


#define Escapegame_Source_Escapegame_DoorLogic_h_15_PROLOG
#define Escapegame_Source_Escapegame_DoorLogic_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Escapegame_Source_Escapegame_DoorLogic_h_18_PRIVATE_PROPERTY_OFFSET \
	Escapegame_Source_Escapegame_DoorLogic_h_18_SPARSE_DATA \
	Escapegame_Source_Escapegame_DoorLogic_h_18_RPC_WRAPPERS \
	Escapegame_Source_Escapegame_DoorLogic_h_18_INCLASS \
	Escapegame_Source_Escapegame_DoorLogic_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Escapegame_Source_Escapegame_DoorLogic_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Escapegame_Source_Escapegame_DoorLogic_h_18_PRIVATE_PROPERTY_OFFSET \
	Escapegame_Source_Escapegame_DoorLogic_h_18_SPARSE_DATA \
	Escapegame_Source_Escapegame_DoorLogic_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Escapegame_Source_Escapegame_DoorLogic_h_18_INCLASS_NO_PURE_DECLS \
	Escapegame_Source_Escapegame_DoorLogic_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPEGAME_API UClass* StaticClass<class UDoorLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Escapegame_Source_Escapegame_DoorLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
