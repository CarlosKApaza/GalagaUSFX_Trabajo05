// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_Trabajo04/IEscape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIEscape() {}
// Cross Module References
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_UIEscape_NoRegister();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_UIEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04();
// End Cross Module References
	void UIEscape::StaticRegisterNativesUIEscape()
	{
	}
	UClass* Z_Construct_UClass_UIEscape_NoRegister()
	{
		return UIEscape::StaticClass();
	}
	struct Z_Construct_UClass_UIEscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIEscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIEscape_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IEscape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIEscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIEscape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIEscape_Statics::ClassParams = {
		&UIEscape::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIEscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIEscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIEscape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIEscape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIEscape, 2543361287);
	template<> GALAGAUSFX_TRABAJO04_API UClass* StaticClass<UIEscape>()
	{
		return UIEscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIEscape(Z_Construct_UClass_UIEscape, &UIEscape::StaticClass, TEXT("/Script/GalagaUSFX_Trabajo04"), TEXT("UIEscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIEscape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
