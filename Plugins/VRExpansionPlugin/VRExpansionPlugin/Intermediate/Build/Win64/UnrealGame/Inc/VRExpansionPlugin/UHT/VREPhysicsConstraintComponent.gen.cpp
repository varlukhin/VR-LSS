// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VREPhysicsConstraintComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREPhysicsConstraintComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintFrame();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetAngularLimits)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing1Limit);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing2Limit);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAngularLimits(Z_Param_Out_Swing1Limit,Z_Param_Out_Swing2Limit,Z_Param_Out_TwistLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetLinearLimits)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LinearLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLinearLimits(Z_Param_Out_LinearLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execSetAngularOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewAngularOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularOffset(Z_Param_NewAngularOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetAngularOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAngularOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetCurrentLinearDistance)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FrameOfReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentLinearDistance(EConstraintFrame::Type(Z_Param_FrameOfReference));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetGlobalPose)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintFrame);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GlobalPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGlobalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame),Z_Param_Out_GlobalPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetLocalPose)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ConstraintFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalPose(EConstraintFrame::Type(Z_Param_ConstraintFrame));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execGetConstraintReferenceFrame)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Frame);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RefFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConstraintReferenceFrame(EConstraintFrame::Type(Z_Param_Frame),Z_Param_Out_RefFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREPhysicsConstraintComponent::execSetConstraintToForceBased)
	{
		P_GET_UBOOL(Z_Param_bUseForceConstraint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintToForceBased(Z_Param_bUseForceConstraint);
		P_NATIVE_END;
	}
	void UVREPhysicsConstraintComponent::StaticRegisterNativesUVREPhysicsConstraintComponent()
	{
		UClass* Class = UVREPhysicsConstraintComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngularLimits", &UVREPhysicsConstraintComponent::execGetAngularLimits },
			{ "GetAngularOffset", &UVREPhysicsConstraintComponent::execGetAngularOffset },
			{ "GetConstraintReferenceFrame", &UVREPhysicsConstraintComponent::execGetConstraintReferenceFrame },
			{ "GetCurrentLinearDistance", &UVREPhysicsConstraintComponent::execGetCurrentLinearDistance },
			{ "GetGlobalPose", &UVREPhysicsConstraintComponent::execGetGlobalPose },
			{ "GetLinearLimits", &UVREPhysicsConstraintComponent::execGetLinearLimits },
			{ "GetLocalPose", &UVREPhysicsConstraintComponent::execGetLocalPose },
			{ "SetAngularOffset", &UVREPhysicsConstraintComponent::execSetAngularOffset },
			{ "SetConstraintToForceBased", &UVREPhysicsConstraintComponent::execSetConstraintToForceBased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics
	{
		struct VREPhysicsConstraintComponent_eventGetAngularLimits_Parms
		{
			float Swing1Limit;
			float Swing2Limit;
			float TwistLimit;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1Limit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2Limit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing1Limit = { "Swing1Limit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularLimits_Parms, Swing1Limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing2Limit = { "Swing2Limit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularLimits_Parms, Swing2Limit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularLimits_Parms, TwistLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing1Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_Swing2Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::NewProp_TwistLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetAngularLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::VREPhysicsConstraintComponent_eventGetAngularLimits_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics
	{
		struct VREPhysicsConstraintComponent_eventGetAngularOffset_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetAngularOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "Comment", "// Gets the angular offset on the constraint\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the angular offset on the constraint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetAngularOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::VREPhysicsConstraintComponent_eventGetAngularOffset_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics
	{
		struct VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FTransform RefFrame;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Frame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms, Frame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(nullptr, 0) }; // 3405288878
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_RefFrame = { "RefFrame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms, RefFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::NewProp_RefFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetConstraintReferenceFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::VREPhysicsConstraintComponent_eventGetConstraintReferenceFrame_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics
	{
		struct VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> FrameOfReference;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameOfReference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_FrameOfReference = { "FrameOfReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms, FrameOfReference), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(nullptr, 0) }; // 3405288878
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_FrameOfReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "Comment", "// Gets the current linear distance in world space on the joint in +/- from the initial reference frame\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current linear distance in world space on the joint in +/- from the initial reference frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetCurrentLinearDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::VREPhysicsConstraintComponent_eventGetCurrentLinearDistance_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics
	{
		struct VREPhysicsConstraintComponent_eventGetGlobalPose_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> ConstraintFrame;
			FTransform GlobalPose;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintFrame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_ConstraintFrame = { "ConstraintFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetGlobalPose_Parms, ConstraintFrame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(nullptr, 0) }; // 3405288878
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_GlobalPose = { "GlobalPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetGlobalPose_Parms, GlobalPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_ConstraintFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::NewProp_GlobalPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetGlobalPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::VREPhysicsConstraintComponent_eventGetGlobalPose_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics
	{
		struct VREPhysicsConstraintComponent_eventGetLinearLimits_Parms
		{
			float LinearLimit;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::NewProp_LinearLimit = { "LinearLimit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetLinearLimits_Parms, LinearLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::NewProp_LinearLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetLinearLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::VREPhysicsConstraintComponent_eventGetLinearLimits_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics
	{
		struct VREPhysicsConstraintComponent_eventGetLocalPose_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> ConstraintFrame;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintFrame;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ConstraintFrame = { "ConstraintFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetLocalPose_Parms, ConstraintFrame), Z_Construct_UEnum_PhysicsCore_EConstraintFrame, METADATA_PARAMS(nullptr, 0) }; // 3405288878
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventGetLocalPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ConstraintFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "GetLocalPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::VREPhysicsConstraintComponent_eventGetLocalPose_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics
	{
		struct VREPhysicsConstraintComponent_eventSetAngularOffset_Parms
		{
			FRotator NewAngularOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAngularOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::NewProp_NewAngularOffset = { "NewAngularOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREPhysicsConstraintComponent_eventSetAngularOffset_Parms, NewAngularOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::NewProp_NewAngularOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "Comment", "// Sets the angular offset on the constraint and re-initializes it\n" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the angular offset on the constraint and re-initializes it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "SetAngularOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::VREPhysicsConstraintComponent_eventSetAngularOffset_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics
	{
		struct VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms
		{
			bool bUseForceConstraint;
		};
		static void NewProp_bUseForceConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForceConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint_SetBit(void* Obj)
	{
		((VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms*)Obj)->bUseForceConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint = { "bUseForceConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms), &Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::NewProp_bUseForceConstraint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRE Physics Constraint Component" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREPhysicsConstraintComponent, nullptr, "SetConstraintToForceBased", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::VREPhysicsConstraintComponent_eventSetConstraintToForceBased_Parms), Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREPhysicsConstraintComponent);
	UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent_NoRegister()
	{
		return UVREPhysicsConstraintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsConstraintComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularLimits, "GetAngularLimits" }, // 2750101911
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetAngularOffset, "GetAngularOffset" }, // 2882522022
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetConstraintReferenceFrame, "GetConstraintReferenceFrame" }, // 3649823537
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetCurrentLinearDistance, "GetCurrentLinearDistance" }, // 930375432
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetGlobalPose, "GetGlobalPose" }, // 3111318270
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLinearLimits, "GetLinearLimits" }, // 2557737701
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_GetLocalPose, "GetLocalPose" }, // 2940260673
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetAngularOffset, "SetAngularOffset" }, // 153529864
		{ &Z_Construct_UFunction_UVREPhysicsConstraintComponent_SetConstraintToForceBased, "SetConstraintToForceBased" }, // 1536149595
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n*\x09""A custom constraint component subclass that exposes additional missing functionality from the default one\n*/" },
		{ "HideCategories", "Activation Components|Activation Physics Mobility Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Misc/VREPhysicsConstraintComponent.h" },
		{ "ModuleRelativePath", "Public/Misc/VREPhysicsConstraintComponent.h" },
		{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
		{ "ToolTip", "A custom constraint component subclass that exposes additional missing functionality from the default one" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREPhysicsConstraintComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::ClassParams = {
		&UVREPhysicsConstraintComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREPhysicsConstraintComponent()
	{
		if (!Z_Registration_Info_UClass_UVREPhysicsConstraintComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREPhysicsConstraintComponent.OuterSingleton, Z_Construct_UClass_UVREPhysicsConstraintComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREPhysicsConstraintComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVREPhysicsConstraintComponent>()
	{
		return UVREPhysicsConstraintComponent::StaticClass();
	}
	UVREPhysicsConstraintComponent::UVREPhysicsConstraintComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREPhysicsConstraintComponent);
	UVREPhysicsConstraintComponent::~UVREPhysicsConstraintComponent() {}
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREPhysicsConstraintComponent, UVREPhysicsConstraintComponent::StaticClass, TEXT("UVREPhysicsConstraintComponent"), &Z_Registration_Info_UClass_UVREPhysicsConstraintComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREPhysicsConstraintComponent), 2413115438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_2496442404(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VREPhysicsConstraintComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
