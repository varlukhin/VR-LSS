// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GripScripts/VRGripScriptBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGripMotionControllerComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class UVRGripScriptBase;
enum class EBPVRResultSwitch : uint8;
struct FBPActorGripInformation;
#ifdef VREXPANSIONPLUGIN_VRGripScriptBase_generated_h
#error "VRGripScriptBase.generated.h already included, missing '#pragma once' in VRGripScriptBase.h"
#endif
#define VREXPANSIONPLUGIN_VRGripScriptBase_generated_h

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_RPC_WRAPPERS \
	virtual void OnSecondaryGripRelease_Implementation(UGripMotionControllerComponent* Controller, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnSecondaryGrip_Implementation(UGripMotionControllerComponent* Controller, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation); \
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation, bool bWasSocketed); \
	virtual void OnGrip_Implementation(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation); \
	virtual bool GetWorldTransform_Implementation(UGripMotionControllerComponent* GrippingController, float DeltaTime, FTransform& WorldTransform, FTransform const& ParentTransform, FBPActorGripInformation& Grip, AActor* actor, UPrimitiveComponent* root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport); \
	virtual void OnBeginPlay_Implementation(UObject* CallingOwner); \
	virtual void OnEndPlay_Implementation(const EEndPlayReason::Type EndPlayReason); \
	virtual bool Wants_DenyTeleport_Implementation(UGripMotionControllerComponent* Controller); \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execGetWorldTransform); \
	DECLARE_FUNCTION(execOnBeginPlay); \
	DECLARE_FUNCTION(execOnEndPlay); \
	DECLARE_FUNCTION(execIsServer); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetParentSceneComp); \
	DECLARE_FUNCTION(execGetParentTransform); \
	DECLARE_FUNCTION(execGetGripTransform); \
	DECLARE_FUNCTION(execSetTickEnabled); \
	DECLARE_FUNCTION(execWants_DenyTeleport); \
	DECLARE_FUNCTION(execForceGripToDrop); \
	DECLARE_FUNCTION(execGetGripScriptByClass);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSecondaryGripRelease); \
	DECLARE_FUNCTION(execOnSecondaryGrip); \
	DECLARE_FUNCTION(execOnGripRelease); \
	DECLARE_FUNCTION(execOnGrip); \
	DECLARE_FUNCTION(execGetWorldTransform); \
	DECLARE_FUNCTION(execOnBeginPlay); \
	DECLARE_FUNCTION(execOnEndPlay); \
	DECLARE_FUNCTION(execIsServer); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetParentSceneComp); \
	DECLARE_FUNCTION(execGetParentTransform); \
	DECLARE_FUNCTION(execGetGripTransform); \
	DECLARE_FUNCTION(execSetTickEnabled); \
	DECLARE_FUNCTION(execWants_DenyTeleport); \
	DECLARE_FUNCTION(execForceGripToDrop); \
	DECLARE_FUNCTION(execGetGripScriptByClass);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_ACCESSORS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_CALLBACK_WRAPPERS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGripScriptBase(); \
	friend struct Z_Construct_UClass_UVRGripScriptBase_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBase)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUVRGripScriptBase(); \
	friend struct Z_Construct_UClass_UVRGripScriptBase_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBase)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripScriptBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBase(UVRGripScriptBase&&); \
	NO_API UVRGripScriptBase(const UVRGripScriptBase&); \
public: \
	NO_API virtual ~UVRGripScriptBase();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBase(UVRGripScriptBase&&); \
	NO_API UVRGripScriptBase(const UVRGripScriptBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBase) \
	NO_API virtual ~UVRGripScriptBase();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_32_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGripScriptBase>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_RPC_WRAPPERS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_ACCESSORS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_CALLBACK_WRAPPERS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGripScriptBaseBP(); \
	friend struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBaseBP, UVRGripScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBaseBP)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_INCLASS \
private: \
	static void StaticRegisterNativesUVRGripScriptBaseBP(); \
	friend struct Z_Construct_UClass_UVRGripScriptBaseBP_Statics; \
public: \
	DECLARE_CLASS(UVRGripScriptBaseBP, UVRGripScriptBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGripScriptBaseBP)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripScriptBaseBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBaseBP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBaseBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBaseBP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBaseBP(UVRGripScriptBaseBP&&); \
	NO_API UVRGripScriptBaseBP(const UVRGripScriptBaseBP&); \
public: \
	NO_API virtual ~UVRGripScriptBaseBP();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGripScriptBaseBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGripScriptBaseBP(UVRGripScriptBaseBP&&); \
	NO_API UVRGripScriptBaseBP(const UVRGripScriptBaseBP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGripScriptBaseBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGripScriptBaseBP); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGripScriptBaseBP) \
	NO_API virtual ~UVRGripScriptBaseBP();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_257_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGripScriptBaseBP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_VRGripScriptBase_h


#define FOREACH_ENUM_EGSTRANSFORMOVERRIDETYPE(op) \
	op(EGSTransformOverrideType::None) \
	op(EGSTransformOverrideType::OverridesWorldTransform) \
	op(EGSTransformOverrideType::ModifiesWorldTransform) 

enum class EGSTransformOverrideType : uint8;
template<> struct TIsUEnumClass<EGSTransformOverrideType> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EGSTransformOverrideType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
