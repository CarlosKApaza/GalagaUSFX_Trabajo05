// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_Trabajo04/IEstados.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEstados() {}
// Cross Module References
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_UIEstados();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04();
// End Cross Module References
	void UIEstados::StaticRegisterNativesUIEstados()
	{
	}
	UClass* Z_Construct_UClass_UIEstados_NoRegister()
	{
		return UIEstados::StaticClass();
	}
	struct Z_Construct_UClass_UIEstados_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIEstados_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEstados_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IEstados.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIEstados_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEstados>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIEstados_Statics::ClassParams = {
		&UIEstados::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIEstados_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIEstados_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIEstados()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIEstados_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIEstados, 2318421938);
	template<> GALAGAUSFX_TRABAJO04_API UClass* StaticClass<UIEstados>()
	{
		return UIEstados::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIEstados(Z_Construct_UClass_UIEstados, &UIEstados::StaticClass, TEXT("/Script/GalagaUSFX_Trabajo04"), TEXT("UIEstados"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIEstados);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
