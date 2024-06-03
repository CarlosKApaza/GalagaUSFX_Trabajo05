// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_Trabajo04/BajaJefe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBajaJefe() {}
// Cross Module References
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_ABajaJefe_NoRegister();
	GALAGAUSFX_TRABAJO04_API UClass* Z_Construct_UClass_ABajaJefe();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ABajaJefe::StaticRegisterNativesABajaJefe()
	{
	}
	UClass* Z_Construct_UClass_ABajaJefe_NoRegister()
	{
		return ABajaJefe::StaticClass();
	}
	struct Z_Construct_UClass_ABajaJefe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABajaJefe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_Trabajo04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABajaJefe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BajaJefe.h" },
		{ "ModuleRelativePath", "BajaJefe.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABajaJefe_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Para detectar colisiones\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BajaJefe.h" },
		{ "ToolTip", "Para detectar colisiones" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABajaJefe_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABajaJefe, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABajaJefe_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABajaJefe_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABajaJefe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABajaJefe_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABajaJefe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABajaJefe>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABajaJefe_Statics::ClassParams = {
		&ABajaJefe::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABajaJefe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABajaJefe_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABajaJefe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABajaJefe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABajaJefe()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABajaJefe_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABajaJefe, 1970504702);
	template<> GALAGAUSFX_TRABAJO04_API UClass* StaticClass<ABajaJefe>()
	{
		return ABajaJefe::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABajaJefe(Z_Construct_UClass_ABajaJefe, &ABajaJefe::StaticClass, TEXT("/Script/GalagaUSFX_Trabajo04"), TEXT("ABajaJefe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABajaJefe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
