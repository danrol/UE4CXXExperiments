// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escapegame/DoorLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorLogic() {}
// Cross Module References
	ESCAPEGAME_API UClass* Z_Construct_UClass_UDoorLogic_NoRegister();
	ESCAPEGAME_API UClass* Z_Construct_UClass_UDoorLogic();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Escapegame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UDoorLogic::StaticRegisterNativesUDoorLogic()
	{
	}
	UClass* Z_Construct_UClass_UDoorLogic_NoRegister()
	{
		return UDoorLogic::StaticClass();
	}
	struct Z_Construct_UClass_UDoorLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorThatOpens_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorThatOpens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenedDoorYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpenedDoorYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Escapegame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorLogic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorLogic.h" },
		{ "ModuleRelativePath", "DoorLogic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorLogic_Statics::NewProp_ActorThatOpens_MetaData[] = {
		{ "Category", "DoorLogic" },
		{ "ModuleRelativePath", "DoorLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorLogic_Statics::NewProp_ActorThatOpens = { "ActorThatOpens", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorLogic, ActorThatOpens), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorLogic_Statics::NewProp_ActorThatOpens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorLogic_Statics::NewProp_ActorThatOpens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorLogic_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "DoorLogic" },
		{ "ModuleRelativePath", "DoorLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorLogic_Statics::NewProp_PressurePlate = { "PressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorLogic, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorLogic_Statics::NewProp_PressurePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorLogic_Statics::NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorLogic_Statics::NewProp_OpenedDoorYaw_MetaData[] = {
		{ "Category", "DoorLogic" },
		{ "Comment", "// makes value editable from editor\n" },
		{ "ModuleRelativePath", "DoorLogic.h" },
		{ "ToolTip", "makes value editable from editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorLogic_Statics::NewProp_OpenedDoorYaw = { "OpenedDoorYaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorLogic, OpenedDoorYaw), METADATA_PARAMS(Z_Construct_UClass_UDoorLogic_Statics::NewProp_OpenedDoorYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorLogic_Statics::NewProp_OpenedDoorYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorLogic_Statics::NewProp_ActorThatOpens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorLogic_Statics::NewProp_PressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorLogic_Statics::NewProp_OpenedDoorYaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoorLogic_Statics::ClassParams = {
		&UDoorLogic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorLogic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorLogic_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoorLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoorLogic, 1981564702);
	template<> ESCAPEGAME_API UClass* StaticClass<UDoorLogic>()
	{
		return UDoorLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoorLogic(Z_Construct_UClass_UDoorLogic, &UDoorLogic::StaticClass, TEXT("/Script/Escapegame"), TEXT("UDoorLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
