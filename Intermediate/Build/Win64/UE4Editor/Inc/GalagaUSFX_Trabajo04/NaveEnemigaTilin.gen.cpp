// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_Trabajo04/NaveEnemigaTilin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaTilin() {}
// Cross Module References
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_ANaveEnemigaTilin_NoRegister();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_ANaveEnemigaTilin();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04();
// End Cross Module References
	void ANaveEnemigaTilin::StaticRegisterNativesANaveEnemigaTilin()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaTilin_NoRegister()
	{
		return ANaveEnemigaTilin::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaTilin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaTilin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaTilin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaTilin.h" },
		{ "ModuleRelativePath", "NaveEnemigaTilin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaTilin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaTilin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaTilin_Statics::ClassParams = {
		&ANaveEnemigaTilin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaTilin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaTilin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaTilin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaTilin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaTilin, 4171171879);
	template<> GALAGAUSFX_TRABAJO04_API UClass* StaticClass<ANaveEnemigaTilin>()
	{
		return ANaveEnemigaTilin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaTilin(Z_Construct_UClass_ANaveEnemigaTilin, &ANaveEnemigaTilin::StaticClass, TEXT("/Script/GalagaUSFX_Trabajo04"), TEXT("ANaveEnemigaTilin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaTilin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
