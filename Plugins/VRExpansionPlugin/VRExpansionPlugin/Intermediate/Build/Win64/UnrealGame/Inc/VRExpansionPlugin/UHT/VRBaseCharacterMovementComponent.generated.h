// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRBaseCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVRConjoinedMovementModes : uint8;
enum class EVRMoveAction : uint8;
enum class EVRMoveActionDataReq : uint8;
enum class EVRMoveActionVelocityRetention : uint8;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h
#error "VRBaseCharacterMovementComponent.generated.h already included, missing '#pragma once' in VRBaseCharacterMovementComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacterMovementComponent_generated_h

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_18_DELEGATE \
VREXPANSIONPLUGIN_API void FVROnPerformClimbingStepUp_DelegateWrapper(const FMulticastScriptDelegate& VROnPerformClimbingStepUp, FVector FinalStepUpLocation);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetClimbingMode); \
	DECLARE_FUNCTION(execGetCustomInputVector); \
	DECLARE_FUNCTION(execRewindVRMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Custom); \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport); \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation); \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn); \
	DECLARE_FUNCTION(execPerformMoveAction_SetTrackingPaused); \
	DECLARE_FUNCTION(execClearCustomReplicatedMovement); \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetReplicatedMovementMode); \
	DECLARE_FUNCTION(execSetClimbingMode); \
	DECLARE_FUNCTION(execGetCustomInputVector); \
	DECLARE_FUNCTION(execRewindVRMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Custom); \
	DECLARE_FUNCTION(execPerformMoveAction_StopAllMovement); \
	DECLARE_FUNCTION(execPerformMoveAction_Teleport); \
	DECLARE_FUNCTION(execPerformMoveAction_SetRotation); \
	DECLARE_FUNCTION(execPerformMoveAction_SnapTurn); \
	DECLARE_FUNCTION(execPerformMoveAction_SetTrackingPaused); \
	DECLARE_FUNCTION(execClearCustomReplicatedMovement); \
	DECLARE_FUNCTION(execAddCustomReplicatedMovement);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_ACCESSORS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUVRBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UVRBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UVRBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRBaseCharacterMovementComponent)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRBaseCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public: \
	NO_API virtual ~UVRBaseCharacterMovementComponent();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRBaseCharacterMovementComponent(UVRBaseCharacterMovementComponent&&); \
	NO_API UVRBaseCharacterMovementComponent(const UVRBaseCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRBaseCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRBaseCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRBaseCharacterMovementComponent) \
	NO_API virtual ~UVRBaseCharacterMovementComponent();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_23_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRBaseCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
