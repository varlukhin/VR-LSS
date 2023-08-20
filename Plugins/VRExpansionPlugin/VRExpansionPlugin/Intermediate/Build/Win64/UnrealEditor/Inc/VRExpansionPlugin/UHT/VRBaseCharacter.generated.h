// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UNavigationQueryFilter;
class USceneComponent;
enum class EVRConjoinedMovementModes : uint8;
enum class EVRMoveAction : uint8;
struct FBPVRComponentPosRep;
struct FHitResult;
struct FTransform_NetQuantize;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacter_generated_h
#error "VRBaseCharacter.generated.h already included, missing '#pragma once' in VRBaseCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacter_generated_h

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_20_DELEGATE \
VREXPANSIONPLUGIN_API void FVRSeatThresholdChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSeatThresholdChangedSignature, bool bIsWithinThreshold, float ToThresholdScaler);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_21_DELEGATE \
VREXPANSIONPLUGIN_API void FVRPlayerStateReplicatedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerStateReplicatedSignature, const APlayerState* NewPlayerState);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_22_DELEGATE \
VREXPANSIONPLUGIN_API void FVRPlayerTeleportedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerTeleportedSignature);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_23_DELEGATE \
VREXPANSIONPLUGIN_API void FVRPlayerNetworkCorrectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRPlayerNetworkCorrectedSignature);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRepMovementVRCharacter_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRepMovement Super;


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FRepMovementVRCharacter>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRSeatedCharacterInfo>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRReplicatedCapsuleHeight_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRReplicatedCapsuleHeight>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_RPC_WRAPPERS \
	virtual void OnEndWallPushback_Implementation(); \
	virtual void OnBeginWallPushback_Implementation(FHitResult HitResultOfImpact, bool bHadLocomotionInput, FVector HmdInput); \
	virtual void OnCustomMoveActionPerformed_Implementation(EVRMoveAction MoveActionType, FVector MoveActionVector, FRotator MoveActionRotator, uint8 MoveActionFlags); \
	virtual bool Server_SetSeatedMode_Validate(USceneComponent* , bool , FTransform_NetQuantize , FTransform_NetQuantize , float , float , bool , EVRConjoinedMovementModes ); \
	virtual void Server_SetSeatedMode_Implementation(USceneComponent* SeatParent, bool bSetSeatedMode, FTransform_NetQuantize TargetTransform, FTransform_NetQuantize InitialRelCameraTransform, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead, EVRConjoinedMovementModes PostSeatedMovementMode); \
	virtual bool Server_ReZeroSeating_Validate(FTransform_NetQuantize , FTransform_NetQuantize , bool ); \
	virtual void Server_ReZeroSeating_Implementation(FTransform_NetQuantize NewTargetTransform, FTransform_NetQuantize NewInitialRelCameraTransform, bool bZeroToHead); \
	virtual void OnSeatThreshholdChanged_Implementation(bool bIsWithinThreshold, float ToThresholdScaler); \
	virtual void OnSeatedModeChanged_Implementation(bool bNewSeatedMode, bool bWasAlreadySeated); \
	virtual void UpdateClimbingMovement_Implementation(float DeltaTime); \
	virtual void UpdateLowGravMovement_Implementation(float DeltaTime); \
	virtual void OnClimbingSteppedUp_Implementation(); \
	virtual bool Server_SendTransformRightController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformRightController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformLeftController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformLeftController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformCamera_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformCamera_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execGetCurrentNavigationPathPoints); \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation); \
	DECLARE_FUNCTION(execStopNavigationMovement); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execOnEndWallPushback); \
	DECLARE_FUNCTION(execOnBeginWallPushback); \
	DECLARE_FUNCTION(execOnCustomMoveActionPerformed); \
	DECLARE_FUNCTION(execNotifyOfTeleport); \
	DECLARE_FUNCTION(execGetTeleportLocation); \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR); \
	DECLARE_FUNCTION(execSetCharacterSizeVR); \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld); \
	DECLARE_FUNCTION(execSetActorLocationVR); \
	DECLARE_FUNCTION(execSetActorLocationAndRotationVR); \
	DECLARE_FUNCTION(execSetActorRotationVR); \
	DECLARE_FUNCTION(execAddActorWorldRotationVR); \
	DECLARE_FUNCTION(execServer_SetSeatedMode); \
	DECLARE_FUNCTION(execServer_ReZeroSeating); \
	DECLARE_FUNCTION(execOnRep_SeatedCharInfo); \
	DECLARE_FUNCTION(execOnSeatThreshholdChanged); \
	DECLARE_FUNCTION(execOnSeatedModeChanged); \
	DECLARE_FUNCTION(execK2_GetVRHeadLocation); \
	DECLARE_FUNCTION(execGetVRRotation); \
	DECLARE_FUNCTION(execGetVRLocation); \
	DECLARE_FUNCTION(execGetVRUpVector); \
	DECLARE_FUNCTION(execGetVRRightVector); \
	DECLARE_FUNCTION(execGetVRForwardVector); \
	DECLARE_FUNCTION(execUpdateClimbingMovement); \
	DECLARE_FUNCTION(execUpdateLowGravMovement); \
	DECLARE_FUNCTION(execOnClimbingSteppedUp); \
	DECLARE_FUNCTION(execOnRep_CapsuleHeight); \
	DECLARE_FUNCTION(execServer_SendTransformRightController); \
	DECLARE_FUNCTION(execServer_SendTransformLeftController); \
	DECLARE_FUNCTION(execServer_SendTransformCamera);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SetSeatedMode_Validate(USceneComponent* , bool , FTransform_NetQuantize , FTransform_NetQuantize , float , float , bool , EVRConjoinedMovementModes ); \
	virtual void Server_SetSeatedMode_Implementation(USceneComponent* SeatParent, bool bSetSeatedMode, FTransform_NetQuantize TargetTransform, FTransform_NetQuantize InitialRelCameraTransform, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead, EVRConjoinedMovementModes PostSeatedMovementMode); \
	virtual bool Server_ReZeroSeating_Validate(FTransform_NetQuantize , FTransform_NetQuantize , bool ); \
	virtual void Server_ReZeroSeating_Implementation(FTransform_NetQuantize NewTargetTransform, FTransform_NetQuantize NewInitialRelCameraTransform, bool bZeroToHead); \
	virtual bool Server_SendTransformRightController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformRightController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformLeftController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformLeftController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformCamera_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformCamera_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execGetCurrentNavigationPathPoints); \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation); \
	DECLARE_FUNCTION(execStopNavigationMovement); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execOnEndWallPushback); \
	DECLARE_FUNCTION(execOnBeginWallPushback); \
	DECLARE_FUNCTION(execOnCustomMoveActionPerformed); \
	DECLARE_FUNCTION(execNotifyOfTeleport); \
	DECLARE_FUNCTION(execGetTeleportLocation); \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR); \
	DECLARE_FUNCTION(execSetCharacterSizeVR); \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld); \
	DECLARE_FUNCTION(execSetActorLocationVR); \
	DECLARE_FUNCTION(execSetActorLocationAndRotationVR); \
	DECLARE_FUNCTION(execSetActorRotationVR); \
	DECLARE_FUNCTION(execAddActorWorldRotationVR); \
	DECLARE_FUNCTION(execServer_SetSeatedMode); \
	DECLARE_FUNCTION(execServer_ReZeroSeating); \
	DECLARE_FUNCTION(execOnRep_SeatedCharInfo); \
	DECLARE_FUNCTION(execOnSeatThreshholdChanged); \
	DECLARE_FUNCTION(execOnSeatedModeChanged); \
	DECLARE_FUNCTION(execK2_GetVRHeadLocation); \
	DECLARE_FUNCTION(execGetVRRotation); \
	DECLARE_FUNCTION(execGetVRLocation); \
	DECLARE_FUNCTION(execGetVRUpVector); \
	DECLARE_FUNCTION(execGetVRRightVector); \
	DECLARE_FUNCTION(execGetVRForwardVector); \
	DECLARE_FUNCTION(execUpdateClimbingMovement); \
	DECLARE_FUNCTION(execUpdateLowGravMovement); \
	DECLARE_FUNCTION(execOnClimbingSteppedUp); \
	DECLARE_FUNCTION(execOnRep_CapsuleHeight); \
	DECLARE_FUNCTION(execServer_SendTransformRightController); \
	DECLARE_FUNCTION(execServer_SendTransformLeftController); \
	DECLARE_FUNCTION(execServer_SendTransformCamera);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_ACCESSORS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_CALLBACK_WRAPPERS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend struct Z_Construct_UClass_AVRBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMovementVR=NETFIELD_REP_START, \
		VRReplicateCapsuleHeight, \
		ReplicatedCapsuleHeight, \
		SeatInformation, \
		NETFIELD_REP_END=SeatInformation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_INCLASS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend struct Z_Construct_UClass_AVRBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedMovementVR=NETFIELD_REP_START, \
		VRReplicateCapsuleHeight, \
		ReplicatedCapsuleHeight, \
		SeatInformation, \
		NETFIELD_REP_END=SeatInformation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public: \
	NO_API virtual ~AVRBaseCharacter();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter) \
	NO_API virtual ~AVRBaseCharacter();


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_268_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_ACCESSORS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
