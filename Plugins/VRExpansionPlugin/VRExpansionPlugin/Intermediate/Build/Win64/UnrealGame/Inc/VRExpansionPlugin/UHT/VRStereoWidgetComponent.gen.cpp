// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRStereoWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRStereoWidgetComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerShape_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVRStereoWidgetRenderComponent::execSetWidgetAndInit)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetAndInit(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void UVRStereoWidgetRenderComponent::StaticRegisterNativesUVRStereoWidgetRenderComponent()
	{
		UClass* Class = UVRStereoWidgetRenderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetAndInit", &UVRStereoWidgetRenderComponent::execSetWidgetAndInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics
	{
		struct VRStereoWidgetRenderComponent_eventSetWidgetAndInit_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRStereoWidgetRenderComponent_eventSetWidgetAndInit_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "WidgetSettings" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetRenderComponent, nullptr, "SetWidgetAndInit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::VRStereoWidgetRenderComponent_eventSetWidgetAndInit_Parms), Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRStereoWidgetRenderComponent);
	UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent_NoRegister()
	{
		return UVRStereoWidgetRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawAtDesiredSize_MetaData[];
#endif
		static void NewProp_bDrawAtDesiredSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawAtDesiredSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetRenderScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderGamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetRenderGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGammaCorrection_MetaData[];
#endif
		static void NewProp_bUseGammaCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGammaCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetClearColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetClearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawWithoutStereo_MetaData[];
#endif
		static void NewProp_bDrawWithoutStereo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawWithoutStereo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStereoLayerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRStereoWidgetRenderComponent_SetWidgetAndInit, "SetWidgetAndInit" }, // 1444234070
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A stereo component that displays a widget instead of a texture.\n*/" },
		{ "HideCategories", "Stereoscopic Properties Collision Object LOD Lighting TextureStreaming Trigger PhysicsVolume" },
		{ "IncludePath", "VRStereoWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A stereo component that displays a widget instead of a texture." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The class of User Widget to create and display an instance of */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The User Widget object displayed and managed by this component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x001400000028200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** If true then we sample the requested size of the widget and reset the texture to be that size */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true then we sample the requested size of the widget and reset the texture to be that size" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit(void* Obj)
	{
		((UVRStereoWidgetRenderComponent*)Obj)->bDrawAtDesiredSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize = { "bDrawAtDesiredSize", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetRenderComponent), &Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The desired render scale of the widget */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The desired render scale of the widget" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale = { "WidgetRenderScale", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, WidgetRenderScale), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The desired render gamma of the widget */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The desired render gamma of the widget" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma = { "WidgetRenderGamma", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, WidgetRenderGamma), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** Automatically correct for gamma */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Automatically correct for gamma" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_SetBit(void* Obj)
	{
		((UVRStereoWidgetRenderComponent*)Obj)->bUseGammaCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection = { "bUseGammaCorrection", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetRenderComponent), &Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The desired clear color of the render target */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The desired clear color of the render target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor = { "RenderTargetClearColor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, RenderTargetClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** If true we will draw to the render target even without active stereo layers and skip the stereo tick*/" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true we will draw to the render target even without active stereo layers and skip the stereo tick" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_SetBit(void* Obj)
	{
		((UVRStereoWidgetRenderComponent*)Obj)->bDrawWithoutStereo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo = { "bDrawWithoutStereo", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetRenderComponent), &Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** Rate (HTZ) we should draw the texture at */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Rate (HTZ) we should draw the texture at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate = { "DrawRate", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, DrawRate), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "WidgetSettings" },
		{ "Comment", "/** The render target being display */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "The render target being display" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000202014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetRenderComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawAtDesiredSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_WidgetRenderGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bUseGammaCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTargetClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_bDrawWithoutStereo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_DrawRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRStereoWidgetRenderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::ClassParams = {
		&UVRStereoWidgetRenderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRStereoWidgetRenderComponent()
	{
		if (!Z_Registration_Info_UClass_UVRStereoWidgetRenderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRStereoWidgetRenderComponent.OuterSingleton, Z_Construct_UClass_UVRStereoWidgetRenderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRStereoWidgetRenderComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRStereoWidgetRenderComponent>()
	{
		return UVRStereoWidgetRenderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRStereoWidgetRenderComponent);
	UVRStereoWidgetRenderComponent::~UVRStereoWidgetRenderComponent() {}
	DEFINE_FUNCTION(UVRStereoWidgetComponent::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRStereoWidgetComponent::execSetPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_InPriority);
		P_NATIVE_END;
	}
	void UVRStereoWidgetComponent::StaticRegisterNativesUVRStereoWidgetComponent()
	{
		UClass* Class = UVRStereoWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", &UVRStereoWidgetComponent::execGetPriority },
			{ "SetPriority", &UVRStereoWidgetComponent::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics
	{
		struct VRStereoWidgetComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRStereoWidgetComponent_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "// @return the render priority\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "@return the render priority" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, nullptr, "GetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::VRStereoWidgetComponent_eventGetPriority_Parms), Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics
	{
		struct VRStereoWidgetComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::NewProp_InPriority = { "InPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRStereoWidgetComponent_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::NewProp_InPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Stereo Layer" },
		{ "Comment", "/**\n\x09* Change the layer's render priority, higher priorities render on top of lower priorities\n\x09* @param\x09InPriority: Priority value\n\x09*/" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Change the layer's render priority, higher priorities render on top of lower priorities\n@param        InPriority: Priority value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::VRStereoWidgetComponent_eventSetPriority_Parms), Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRStereoWidgetComponent);
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRStereoWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysVisible_MetaData[];
#endif
		static void NewProp_bAlwaysVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderBothStereoAndWorld_MetaData[];
#endif
		static void NewProp_bRenderBothStereoAndWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderBothStereoAndWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawWithoutStereo_MetaData[];
#endif
		static void NewProp_bDrawWithoutStereo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawWithoutStereo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEpicsWorldLockedStereo_MetaData[];
#endif
		static void NewProp_bUseEpicsWorldLockedStereo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEpicsWorldLockedStereo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDelayForRenderThread_MetaData[];
#endif
		static void NewProp_bDelayForRenderThread_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayForRenderThread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSleeping_MetaData[];
#endif
		static void NewProp_bIsSleeping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSleeping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsDepth_MetaData[];
#endif
		static void NewProp_bSupportsDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[];
#endif
		static void NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRStereoWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRStereoWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority, "GetPriority" }, // 1488663014
		{ &Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority, "SetPriority" }, // 3230275760
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A widget component that displays the widget in a stereo layer instead of in worldspace.\n* Currently this class uses a custom postion instead of the engines WorldLocked for stereo layers\n* This is because world locked stereo layers don't account for player movement currently.\n*/" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "VRStereoWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A widget component that displays the widget in a stereo layer instead of in worldspace.\nCurrently this class uses a custom postion instead of the engines WorldLocked for stereo layers\nThis is because world locked stereo layers don't account for player movement currently." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! **/" },
		{ "DisplayName", "Stereo Layer Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Specifies which shape of layer it is.  Note that some shapes will be supported only on certain platforms! *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x001600000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetComponent, Shape), Z_Construct_UClass_UStereoLayerShape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bAlwaysVisible_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** If true then this stereo widget will skip visibility checks when in stereo mode */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true then this stereo widget will skip visibility checks when in stereo mode" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bAlwaysVisible_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bAlwaysVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bAlwaysVisible = { "bAlwaysVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bAlwaysVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bAlwaysVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bAlwaysVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true forces the widget to render both stereo and world widgets\n// Overriden by the console command vr.ForceNoStereoWithVRWidgets if it is set to 1\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true forces the widget to render both stereo and world widgets\nOverriden by the console command vr.ForceNoStereoWithVRWidgets if it is set to 1" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bRenderBothStereoAndWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld = { "bRenderBothStereoAndWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDrawWithoutStereo_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Forces the widget to skip stereo regardless of all other settings (localized version of vr.ForceNoStereoWithVRWidgets)*/" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Forces the widget to skip stereo regardless of all other settings (localized version of vr.ForceNoStereoWithVRWidgets)" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDrawWithoutStereo_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bDrawWithoutStereo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDrawWithoutStereo = { "bDrawWithoutStereo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDrawWithoutStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDrawWithoutStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDrawWithoutStereo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true, use Epics world locked stereo implementation instead of my own temp solution\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true, use Epics world locked stereo implementation instead of my own temp solution" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bUseEpicsWorldLockedStereo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo = { "bUseEpicsWorldLockedStereo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true, will cache and delay the transform adjustment for one frame in order to sync with the game thread better\n// Not for use with late updated parents.\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true, will cache and delay the transform adjustment for one frame in order to sync with the game thread better\nNot for use with late updated parents." },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bDelayForRenderThread = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread = { "bDelayForRenderThread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "// If true will not render or update until false\n" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "If true will not render or update until false" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bIsSleeping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping = { "bIsSleeping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bSupportsDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth = { "bSupportsDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the texture should not use its own alpha channel (1.0 will be substituted) */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bNoAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** True if the quad should internally set it's Y value based on the set texture's dimensions */" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
	};
#endif
	void Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj)
	{
		((UVRStereoWidgetComponent*)Obj)->bQuadPreserveTextureRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio = { "bQuadPreserveTextureRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRStereoWidgetComponent), &Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "StereoLayer" },
		{ "Comment", "/** Render priority among all stereo layers, higher priority render on top of lower priority **/" },
		{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
		{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x001000000000001d, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRStereoWidgetComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bAlwaysVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bRenderBothStereoAndWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDrawWithoutStereo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bUseEpicsWorldLockedStereo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bDelayForRenderThread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bIsSleeping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bSupportsDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bNoAlphaChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRStereoWidgetComponent_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRStereoWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRStereoWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRStereoWidgetComponent_Statics::ClassParams = {
		&UVRStereoWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRStereoWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UVRStereoWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRStereoWidgetComponent.OuterSingleton, Z_Construct_UClass_UVRStereoWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRStereoWidgetComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRStereoWidgetComponent>()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRStereoWidgetComponent);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRStereoWidgetRenderComponent, UVRStereoWidgetRenderComponent::StaticClass, TEXT("UVRStereoWidgetRenderComponent"), &Z_Registration_Info_UClass_UVRStereoWidgetRenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRStereoWidgetRenderComponent), 479377488U) },
		{ Z_Construct_UClass_UVRStereoWidgetComponent, UVRStereoWidgetComponent::StaticClass, TEXT("UVRStereoWidgetComponent"), &Z_Registration_Info_UClass_UVRStereoWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRStereoWidgetComponent), 3458218071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_3798841876(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
