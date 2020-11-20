// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterAssetPack/KillEmAllGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillEmAllGameMode() {}
// Cross Module References
	SHOOTERASSETPACK_API UClass* Z_Construct_UClass_AKillEmAllGameMode_NoRegister();
	SHOOTERASSETPACK_API UClass* Z_Construct_UClass_AKillEmAllGameMode();
	SHOOTERASSETPACK_API UClass* Z_Construct_UClass_AShooterGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShooterAssetPack();
// End Cross Module References
	void AKillEmAllGameMode::StaticRegisterNativesAKillEmAllGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKillEmAllGameMode_NoRegister()
	{
		return AKillEmAllGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKillEmAllGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillEmAllGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterAssetPack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KillEmAllGameMode.h" },
		{ "ModuleRelativePath", "KillEmAllGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillEmAllGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillEmAllGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKillEmAllGameMode_Statics::ClassParams = {
		&AKillEmAllGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKillEmAllGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillEmAllGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKillEmAllGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKillEmAllGameMode, 833231924);
	template<> SHOOTERASSETPACK_API UClass* StaticClass<AKillEmAllGameMode>()
	{
		return AKillEmAllGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKillEmAllGameMode(Z_Construct_UClass_AKillEmAllGameMode, &AKillEmAllGameMode::StaticClass, TEXT("/Script/ShooterAssetPack"), TEXT("AKillEmAllGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillEmAllGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
