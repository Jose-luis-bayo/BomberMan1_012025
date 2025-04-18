// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BomberMan_012025Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025Character() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025Character_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABomberMan_012025Character::execDestroyAdjacentBlock)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DirectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAdjacentBlock(Z_Param_DirectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABomberMan_012025Character::execCheckAdjacentBlocks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAdjacentBlocks();
		P_NATIVE_END;
	}
	void ABomberMan_012025Character::StaticRegisterNativesABomberMan_012025Character()
	{
		UClass* Class = ABomberMan_012025Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAdjacentBlocks", &ABomberMan_012025Character::execCheckAdjacentBlocks },
			{ "DestroyAdjacentBlock", &ABomberMan_012025Character::execDestroyAdjacentBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Bloques adyacentes\n" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
		{ "ToolTip", "Bloques adyacentes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "CheckAdjacentBlocks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics
	{
		struct BomberMan_012025Character_eventDestroyAdjacentBlock_Parms
		{
			int32 DirectionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DirectionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::NewProp_DirectionIndex = { "DirectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BomberMan_012025Character_eventDestroyAdjacentBlock_Parms, DirectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::NewProp_DirectionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025Character, nullptr, "DestroyAdjacentBlock", nullptr, nullptr, sizeof(BomberMan_012025Character_eventDestroyAdjacentBlock_Parms), Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomberMan_012025Character_NoRegister()
	{
		return ABomberMan_012025Character::StaticClass();
	}
	struct Z_Construct_UClass_ABomberMan_012025Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberMan_012025Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABomberMan_012025Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan_012025Character_CheckAdjacentBlocks, "CheckAdjacentBlocks" }, // 796703038
		{ &Z_Construct_UFunction_ABomberMan_012025Character_DestroyAdjacentBlock, "DestroyAdjacentBlock" }, // 2964403038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan_012025Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BomberMan_012025Character.h" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberMan_012025Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberMan_012025Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberMan_012025Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "BomberMan_012025Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberMan_012025Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025Character_Statics::NewProp_BaseLookUpRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberMan_012025Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025Character_Statics::ClassParams = {
		&ABomberMan_012025Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomberMan_012025Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberMan_012025Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberMan_012025Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberMan_012025Character, 790095598);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberMan_012025Character>()
	{
		return ABomberMan_012025Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberMan_012025Character(Z_Construct_UClass_ABomberMan_012025Character, &ABomberMan_012025Character::StaticClass, TEXT("/Script/BomberMan_012025"), TEXT("ABomberMan_012025Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
