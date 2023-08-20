// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/CollisionIgnoreSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionIgnoreSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChaosParticlePair();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePair();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePairArray();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionPrimPair();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosParticlePair;
class UScriptStruct* FChaosParticlePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosParticlePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosParticlePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosParticlePair, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("ChaosParticlePair"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosParticlePair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FChaosParticlePair>()
{
	return FChaosParticlePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosParticlePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosParticlePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosParticlePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosParticlePair>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosParticlePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"ChaosParticlePair",
		sizeof(FChaosParticlePair),
		alignof(FChaosParticlePair),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosParticlePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosParticlePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosParticlePair()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosParticlePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosParticlePair.InnerSingleton, Z_Construct_UScriptStruct_FChaosParticlePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosParticlePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionPrimPair;
class UScriptStruct* FCollisionPrimPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionPrimPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionPrimPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionPrimPair, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionPrimPair"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionPrimPair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionPrimPair>()
{
	return FCollisionPrimPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionPrimPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prim1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Prim1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prim2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Prim2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionPrimPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1 = { "Prim1", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionPrimPair, Prim1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2 = { "Prim2", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionPrimPair, Prim2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewProp_Prim2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"CollisionPrimPair",
		sizeof(FCollisionPrimPair),
		alignof(FCollisionPrimPair),
		Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionPrimPair()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionPrimPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionPrimPair.InnerSingleton, Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionPrimPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionIgnorePair;
class UScriptStruct* FCollisionIgnorePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionIgnorePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionIgnorePair, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionIgnorePair"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionIgnorePair.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionIgnorePair>()
{
	return FCollisionIgnorePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName1_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName2_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionIgnorePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1 = { "BoneName1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionIgnorePair, BoneName1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2 = { "BoneName2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionIgnorePair, BoneName2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewProp_BoneName2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"CollisionIgnorePair",
		sizeof(FCollisionIgnorePair),
		alignof(FCollisionIgnorePair),
		Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePair()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionIgnorePair.InnerSingleton, Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionIgnorePair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray;
class UScriptStruct* FCollisionIgnorePairArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionIgnorePairArray, (UObject*)Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("CollisionIgnorePairArray"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.OuterSingleton;
}
template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<FCollisionIgnorePairArray>()
{
	return FCollisionIgnorePairArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PairArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PairArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PairArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionIgnorePairArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_Inner = { "PairArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollisionIgnorePair, METADATA_PARAMS(nullptr, 0) }; // 3504930165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray = { "PairArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionIgnorePairArray, PairArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_MetaData)) }; // 3504930165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewProp_PairArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
		nullptr,
		&NewStructOps,
		"CollisionIgnorePairArray",
		sizeof(FCollisionIgnorePairArray),
		alignof(FCollisionIgnorePairArray),
		Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionIgnorePairArray()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.InnerSingleton, Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray.InnerSingleton;
	}
	DEFINE_FUNCTION(UCollisionIgnoreSubsystem::execCheckActiveFilters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckActiveFilters();
		P_NATIVE_END;
	}
	void UCollisionIgnoreSubsystem::StaticRegisterNativesUCollisionIgnoreSubsystem()
	{
		UClass* Class = UCollisionIgnoreSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckActiveFilters", &UCollisionIgnoreSubsystem::execCheckActiveFilters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCollisionIgnoreSubsystem, nullptr, "CheckActiveFilters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionIgnoreSubsystem);
	UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem_NoRegister()
	{
		return UCollisionIgnoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionTrackedPairs_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionTrackedPairs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTrackedPairs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CollisionTrackedPairs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedPairs_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovedPairs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovedPairs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RemovedPairs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCollisionIgnoreSubsystem_CheckActiveFilters, "CheckActiveFilters" }, // 2903717719
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/CollisionIgnoreSubsystem.h" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_ValueProp = { "CollisionTrackedPairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCollisionIgnorePairArray, METADATA_PARAMS(nullptr, 0) }; // 802548446
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_Key_KeyProp = { "CollisionTrackedPairs_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollisionPrimPair, METADATA_PARAMS(nullptr, 0) }; // 1191394967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs = { "CollisionTrackedPairs", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCollisionIgnoreSubsystem, CollisionTrackedPairs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_MetaData)) }; // 1191394967 802548446
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_ValueProp = { "RemovedPairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCollisionIgnorePairArray, METADATA_PARAMS(nullptr, 0) }; // 802548446
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_Key_KeyProp = { "RemovedPairs_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollisionPrimPair, METADATA_PARAMS(nullptr, 0) }; // 1191394967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_MetaData[] = {
		{ "Comment", "//TArray<FCollisionIgnorePair> CollisionTrackedPairs;\n" },
		{ "ModuleRelativePath", "Public/Misc/CollisionIgnoreSubsystem.h" },
		{ "ToolTip", "TArray<FCollisionIgnorePair> CollisionTrackedPairs;" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs = { "RemovedPairs", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCollisionIgnoreSubsystem, RemovedPairs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_MetaData)) }; // 1191394967 802548446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_CollisionTrackedPairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::NewProp_RemovedPairs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionIgnoreSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::ClassParams = {
		&UCollisionIgnoreSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollisionIgnoreSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCollisionIgnoreSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionIgnoreSubsystem.OuterSingleton, Z_Construct_UClass_UCollisionIgnoreSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollisionIgnoreSubsystem.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UCollisionIgnoreSubsystem>()
	{
		return UCollisionIgnoreSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionIgnoreSubsystem);
	UCollisionIgnoreSubsystem::~UCollisionIgnoreSubsystem() {}
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FChaosParticlePair::StaticStruct, Z_Construct_UScriptStruct_FChaosParticlePair_Statics::NewStructOps, TEXT("ChaosParticlePair"), &Z_Registration_Info_UScriptStruct_ChaosParticlePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosParticlePair), 2321229137U) },
		{ FCollisionPrimPair::StaticStruct, Z_Construct_UScriptStruct_FCollisionPrimPair_Statics::NewStructOps, TEXT("CollisionPrimPair"), &Z_Registration_Info_UScriptStruct_CollisionPrimPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionPrimPair), 1191394967U) },
		{ FCollisionIgnorePair::StaticStruct, Z_Construct_UScriptStruct_FCollisionIgnorePair_Statics::NewStructOps, TEXT("CollisionIgnorePair"), &Z_Registration_Info_UScriptStruct_CollisionIgnorePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionIgnorePair), 3504930165U) },
		{ FCollisionIgnorePairArray::StaticStruct, Z_Construct_UScriptStruct_FCollisionIgnorePairArray_Statics::NewStructOps, TEXT("CollisionIgnorePairArray"), &Z_Registration_Info_UScriptStruct_CollisionIgnorePairArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionIgnorePairArray), 802548446U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCollisionIgnoreSubsystem, UCollisionIgnoreSubsystem::StaticClass, TEXT("UCollisionIgnoreSubsystem"), &Z_Registration_Info_UClass_UCollisionIgnoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionIgnoreSubsystem), 3063290296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_2285132348(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_CollisionIgnoreSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
