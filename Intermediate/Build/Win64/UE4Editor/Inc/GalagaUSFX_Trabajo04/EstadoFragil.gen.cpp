// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_Trabajo04/EstadoFragil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoFragil() {}
// Cross Module References
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_AEstadoFragil_NoRegister();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_AEstadoFragil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
// End Cross Module References
	void AEstadoFragil::StaticRegisterNativesAEstadoFragil()
	{
	}
	UClass* Z_Construct_UClass_AEstadoFragil_NoRegister()
	{
		return AEstadoFragil::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoFragil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoFragil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoFragil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoFragil.h" },
		{ "ModuleRelativePath", "EstadoFragil.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoFragil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoFragil, IIEstados), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoFragil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoFragil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoFragil_Statics::ClassParams = {
		&AEstadoFragil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoFragil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoFragil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoFragil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoFragil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoFragil, 578593813);
	template<> GALAGAUSFX_TRABAJO04_API UClass* StaticClass<AEstadoFragil>()
	{
		return AEstadoFragil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoFragil(Z_Construct_UClass_AEstadoFragil, &AEstadoFragil::StaticClass, TEXT("/Script/GalagaUSFX_Trabajo04"), TEXT("AEstadoFragil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoFragil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
