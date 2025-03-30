// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Public/BloqueLadrillo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrillo() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueLadrillo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References
	void ABloqueLadrillo::StaticRegisterNativesABloqueLadrillo()
	{
	}
	UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister()
	{
		return ABloqueLadrillo::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueLadrillo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueLadrillo.h" },
		{ "ModuleRelativePath", "Public/BloqueLadrillo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueLadrillo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrillo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams = {
		&ABloqueLadrillo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueLadrillo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueLadrillo, 3918470149);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueLadrillo>()
	{
		return ABloqueLadrillo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueLadrillo(Z_Construct_UClass_ABloqueLadrillo, &ABloqueLadrillo::StaticClass, TEXT("/Script/BomberMan_012025"), TEXT("ABloqueLadrillo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrillo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
