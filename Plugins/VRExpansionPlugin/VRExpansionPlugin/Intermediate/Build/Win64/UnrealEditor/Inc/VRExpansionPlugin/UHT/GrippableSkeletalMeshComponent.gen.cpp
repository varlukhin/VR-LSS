// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableSkeletalMeshComponent.h"
#include "GameplayTagContainer.h"
#include "VRExpansionPlugin/Public/VRBPDatatypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableSkeletalMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripScriptBase_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties();
// End Cross Module References
	DEFINE_FUNCTION(UGrippableSkeletalMeshComponent::execSetGripPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewGripPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGripPriority(Z_Param_NewGripPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGrippableSkeletalMeshComponent::execSetDenyGripping)
	{
		P_GET_UBOOL(Z_Param_bDenyGripping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDenyGripping(Z_Param_bDenyGripping);
		P_NATIVE_END;
	}
	void UGrippableSkeletalMeshComponent::StaticRegisterNativesUGrippableSkeletalMeshComponent()
	{
		UClass* Class = UGrippableSkeletalMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDenyGripping", &UGrippableSkeletalMeshComponent::execSetDenyGripping },
			{ "SetGripPriority", &UGrippableSkeletalMeshComponent::execSetGripPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics
	{
		struct GrippableSkeletalMeshComponent_eventSetDenyGripping_Parms
		{
			bool bDenyGripping;
		};
		static void NewProp_bDenyGripping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit(void* Obj)
	{
		((GrippableSkeletalMeshComponent_eventSetDenyGripping_Parms*)Obj)->bDenyGripping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::NewProp_bDenyGripping = { "bDenyGripping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GrippableSkeletalMeshComponent_eventSetDenyGripping_Parms), &Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::NewProp_bDenyGripping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::NewProp_bDenyGripping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the Deny Gripping variable on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Sets the Deny Gripping variable on the FBPInterfaceSettings struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSkeletalMeshComponent, nullptr, "SetDenyGripping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::GrippableSkeletalMeshComponent_eventSetDenyGripping_Parms), Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics
	{
		struct GrippableSkeletalMeshComponent_eventSetGripPriority_Parms
		{
			int32 NewGripPriority;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NewGripPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::NewProp_NewGripPriority = { "NewGripPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GrippableSkeletalMeshComponent_eventSetGripPriority_Parms, NewGripPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::NewProp_NewGripPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// Sets the grip priority on the FBPInterfaceSettings struct\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Sets the grip priority on the FBPInterfaceSettings struct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrippableSkeletalMeshComponent, nullptr, "SetGripPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::GrippableSkeletalMeshComponent_eventSetGripPriority_Parms), Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrippableSkeletalMeshComponent);
	UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister()
	{
		return UGrippableSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GripLogicScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripLogicScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GripLogicScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateGripScripts_MetaData[];
#endif
		static void NewProp_bReplicateGripScripts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateGripScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGripped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGripped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDropped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDropped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSecondaryGripRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSecondaryGripRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepGripSettingsAndGameplayTags_MetaData[];
#endif
		static void NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepGripSettingsAndGameplayTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[];
#endif
		static void NewProp_bReplicateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRGripInterfaceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRGripInterfaceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetDenyGripping, "SetDenyGripping" }, // 3159898121
		{ &Z_Construct_UFunction_UGrippableSkeletalMeshComponent_SetGripPriority, "SetGripPriority" }, // 499999949
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Grippables/GrippableSkeletalMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_Inner = { "GripLogicScripts", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVRGripScriptBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts = { "GripLogicScripts", nullptr, (EPropertyFlags)0x001400800000003d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrippableSkeletalMeshComponent, GripLogicScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateGripScripts_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "Comment", "// If true then the grip script array will be considered for replication, if false then it will not\n// This is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\n// where the object will never have a replicating script\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "If true then the grip script array will be considered for replication, if false then it will not\nThis is an optimization for when you have a lot of grip scripts in use, you can toggle this off in cases\nwhere the object will never have a replicating script" },
	};
#endif
	void Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateGripScripts_SetBit(void* Obj)
	{
		((UGrippableSkeletalMeshComponent*)Obj)->bReplicateGripScripts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateGripScripts = { "bReplicateGripScripts", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGrippableSkeletalMeshComponent), &Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateGripScripts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateGripScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateGripScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnGripped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Called when a object is gripped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnGripped = { "OnGripped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrippableSkeletalMeshComponent, OnGripped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnGripped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnGripped_MetaData)) }; // 3502606547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnDropped_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when a object is dropped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Called when a object is dropped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnDropped = { "OnDropped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrippableSkeletalMeshComponent, OnDropped), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnDropSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnDropped_MetaData)) }; // 3758456689
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary gripped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary gripped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripAdded = { "OnSecondaryGripAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrippableSkeletalMeshComponent, OnSecondaryGripAdded), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripAdded_MetaData)) }; // 3502606547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData[] = {
		{ "Category", "Grip Events" },
		{ "Comment", "// Called when an object we hold is secondary dropped\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Called when an object we hold is secondary dropped" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripRemoved = { "OnSecondaryGripRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrippableSkeletalMeshComponent, OnSecondaryGripRemoved), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnGripSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripRemoved_MetaData)) }; // 3502606547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Tags that are set on this object */" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Tags that are set on this object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrippableSkeletalMeshComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GameplayTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Requires bReplicates to be true for the component\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Requires bReplicates to be true for the component" },
	};
#endif
	void Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit(void* Obj)
	{
		((UGrippableSkeletalMeshComponent*)Obj)->bRepGripSettingsAndGameplayTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags = { "bRepGripSettingsAndGameplayTags", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGrippableSkeletalMeshComponent), &Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData[] = {
		{ "Category", "VRGripInterface|Replication" },
		{ "Comment", "// Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
		{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
	};
#endif
	void Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit(void* Obj)
	{
		((UGrippableSkeletalMeshComponent*)Obj)->bReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateMovement = { "bReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGrippableSkeletalMeshComponent), &Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData[] = {
		{ "Category", "VRGripInterface" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableSkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_VRGripInterfaceSettings = { "VRGripInterfaceSettings", nullptr, (EPropertyFlags)0x0010008000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGrippableSkeletalMeshComponent, VRGripInterfaceSettings), Z_Construct_UScriptStruct_FBPInterfaceProperties, METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_VRGripInterfaceSettings_MetaData)) }; // 109643823
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GripLogicScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateGripScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnGripped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnDropped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_OnSecondaryGripRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bRepGripSettingsAndGameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_bReplicateMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::NewProp_VRGripInterfaceSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableSkeletalMeshComponent, IVRGripInterface), false },  // 3570845334
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGrippableSkeletalMeshComponent, IGameplayTagAssetInterface), false },  // 3654419898
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrippableSkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::ClassParams = {
		&UGrippableSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UGrippableSkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrippableSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UGrippableSkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrippableSkeletalMeshComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGrippableSkeletalMeshComponent>()
	{
		return UGrippableSkeletalMeshComponent::StaticClass();
	}

	void UGrippableSkeletalMeshComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GripLogicScripts(TEXT("GripLogicScripts"));
		static const FName Name_bReplicateGripScripts(TEXT("bReplicateGripScripts"));
		static const FName Name_GameplayTags(TEXT("GameplayTags"));
		static const FName Name_bRepGripSettingsAndGameplayTags(TEXT("bRepGripSettingsAndGameplayTags"));
		static const FName Name_bReplicateMovement(TEXT("bReplicateMovement"));
		static const FName Name_VRGripInterfaceSettings(TEXT("VRGripInterfaceSettings"));

		const bool bIsValid = true
			&& Name_GripLogicScripts == ClassReps[(int32)ENetFields_Private::GripLogicScripts].Property->GetFName()
			&& Name_bReplicateGripScripts == ClassReps[(int32)ENetFields_Private::bReplicateGripScripts].Property->GetFName()
			&& Name_GameplayTags == ClassReps[(int32)ENetFields_Private::GameplayTags].Property->GetFName()
			&& Name_bRepGripSettingsAndGameplayTags == ClassReps[(int32)ENetFields_Private::bRepGripSettingsAndGameplayTags].Property->GetFName()
			&& Name_bReplicateMovement == ClassReps[(int32)ENetFields_Private::bReplicateMovement].Property->GetFName()
			&& Name_VRGripInterfaceSettings == ClassReps[(int32)ENetFields_Private::VRGripInterfaceSettings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGrippableSkeletalMeshComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrippableSkeletalMeshComponent);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrippableSkeletalMeshComponent, UGrippableSkeletalMeshComponent::StaticClass, TEXT("UGrippableSkeletalMeshComponent"), &Z_Registration_Info_UClass_UGrippableSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrippableSkeletalMeshComponent), 270522567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_495946305(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableSkeletalMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
