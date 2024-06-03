// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_Trabajo04/EscudoJefe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoJefe() {}
// Cross Module References
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_AEscudoJefe_NoRegister();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_AEscudoJefe();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04();
// End Cross Module References
	void AEscudoJefe::StaticRegisterNativesAEscudoJefe()
	{
	}
	UClass* Z_Construct_UClass_AEscudoJefe_NoRegister()
	{
		return AEscudoJefe::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoJefe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoJefe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoJefe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscudoJefe.h" },
		{ "ModuleRelativePath", "EscudoJefe.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoJefe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoJefe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscudoJefe_Statics::ClassParams = {
		&AEscudoJefe::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscudoJefe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoJefe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoJefe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscudoJefe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscudoJefe, 669391305);
	template<> GALAGAUSFX_TRABAJO04_API UClass* StaticClass<AEscudoJefe>()
	{
		return AEscudoJefe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscudoJefe(Z_Construct_UClass_AEscudoJefe, &AEscudoJefe::StaticClass, TEXT("/Script/GalagaUSFX_Trabajo04"), TEXT("AEscudoJefe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoJefe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
