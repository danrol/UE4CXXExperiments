// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Escapegame/Grabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabber() {}
// Cross Module References
	ESCAPEGAME_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	ESCAPEGAME_API UClass* Z_Construct_UClass_UGrabber();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Escapegame();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	void UGrabber::StaticRegisterNativesUGrabber()
	{
	}
	UClass* Z_Construct_UClass_UGrabber_NoRegister()
	{
		return UGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Escapegame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Grabber.h" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Grabber" },
		{ "Comment", "// define as null ptr so we will be able to check if null pointer\n" },
		{ "ModuleRelativePath", "Grabber.h" },
		{ "ToolTip", "define as null ptr so we will be able to check if null pointer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, Reach), METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_Reach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_PhysicsHandle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grabber.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_PhysicsHandle = { "PhysicsHandle", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, PhysicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_PhysicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_PhysicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabber_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Comment", "// Every variable having with type starting with \"U\" should have UPROPERTY\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grabber.h" },
		{ "ToolTip", "Every variable having with type starting with \"U\" should have UPROPERTY" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabber_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabber, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::NewProp_InputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_Reach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_PhysicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabber_Statics::NewProp_InputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabber_Statics::ClassParams = {
		&UGrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGrabber_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabber, 452827152);
	template<> ESCAPEGAME_API UClass* StaticClass<UGrabber>()
	{
		return UGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabber(Z_Construct_UClass_UGrabber, &UGrabber::StaticClass, TEXT("/Script/Escapegame"), TEXT("UGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
