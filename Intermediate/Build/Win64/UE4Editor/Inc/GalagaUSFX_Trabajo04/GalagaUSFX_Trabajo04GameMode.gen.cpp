// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_Trabajo04/GalagaUSFX_Trabajo04GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGalagaUSFX_Trabajo04GameMode() {}
// Cross Module References
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_NoRegister();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04();
// End Cross Module References
	void AGalagaUSFX_Trabajo04GameMode::StaticRegisterNativesAGalagaUSFX_Trabajo04GameMode()
	{
	}
	UClass* Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_NoRegister()
	{
		return AGalagaUSFX_Trabajo04GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GalagaUSFX_Trabajo04GameMode.h" },
		{ "ModuleRelativePath", "GalagaUSFX_Trabajo04GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGalagaUSFX_Trabajo04GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics::ClassParams = {
		&AGalagaUSFX_Trabajo04GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGalagaUSFX_Trabajo04GameMode, 1945938689);
	template<> GALAGAUSFX_TRABAJO04_API UClass* StaticClass<AGalagaUSFX_Trabajo04GameMode>()
	{
		return AGalagaUSFX_Trabajo04GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGalagaUSFX_Trabajo04GameMode(Z_Construct_UClass_AGalagaUSFX_Trabajo04GameMode, &AGalagaUSFX_Trabajo04GameMode::StaticClass, TEXT("/Script/GalagaUSFX_Trabajo04"), TEXT("AGalagaUSFX_Trabajo04GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGalagaUSFX_Trabajo04GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
