
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/MotionWarping.EWarpPointAnimProvider
/// Size: 0x01 (1 bytes)
enum class EWarpPointAnimProvider : uint8_t
{
	EWarpPointAnimProvider__None                                                     = 0,
	EWarpPointAnimProvider__Static                                                   = 1,
	EWarpPointAnimProvider__Bone                                                     = 2
};

/// Enum /Script/MotionWarping.EMotionWarpRotationType
/// Size: 0x01 (1 bytes)
enum class EMotionWarpRotationType : uint8_t
{
	EMotionWarpRotationType__Default                                                 = 0,
	EMotionWarpRotationType__Facing                                                  = 1
};

/// Enum /Script/MotionWarping.ERootMotionModifierState
/// Size: 0x01 (1 bytes)
enum class ERootMotionModifierState : uint8_t
{
	ERootMotionModifierState__Waiting                                                = 0,
	ERootMotionModifierState__Active                                                 = 1,
	ERootMotionModifierState__MarkedForRemoval                                       = 2,
	ERootMotionModifierState__Disabled                                               = 3
};

/// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{ 
public:
	class URootMotionModifier*                         RootMotionModifier;                                         // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	// void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                // [0x235b330] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	// void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                   // [0x235b330] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	// void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                 // [0x235b330] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	// void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);  // [0x1a306c0] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	// void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x1a305f0] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	// void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x1a30520] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	// class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime); // [0x1a2fa50] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MotionWarping.MotionWarpingUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	// void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows); // [0x1a30440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	// void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows); // [0x1a30320] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	// FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);           // [0x1a301d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingTarget
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FMotionWarpingTarget
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0014   (0x000C)  
	TWeakObjectPtr<class USceneComponent*>             Component;                                                  // 0x0020   (0x0008)  
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	bool                                               bFollowComponent;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0031   (0x0003)  MISSED
};

/// Class /Script/MotionWarping.MotionWarpingComponent
/// Size: 0x00F0 (240 bytes) (0x0000B0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UMotionWarpingComponent : public UActorComponent
{ 
public:
	bool                                               bSearchForWindowsInAnimsWithinMontages;                     // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED
	SDK_UNDEFINED(16,517) /* FMulticastInlineDelegate */ __um(OnPreUpdate);                                        // 0x00B8   (0x0010)  
	TWeakObjectPtr<class ACharacter*>                  CharacterOwner;                                             // 0x00C8   (0x0008)  
	TArray<class URootMotionModifier*>                 Modifiers;                                                  // 0x00D0   (0x0010)  
	TArray<FMotionWarpingTarget>                       WarpTargets;                                                // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	// int32_t RemoveWarpTarget(FName WarpTargetName);                                                                          // [0x1a30790] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	// void DisableAllRootMotionModifiers();                                                                                    // [0x1a301b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	// void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);                               // [0x1a2f910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	// void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation); // [0x1a2f770] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	// void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);                                    // [0x1a2f670] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	// void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, class USceneComponent* Component, FName BoneName, bool bFollowComponent); // [0x1a2f510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	// void AddOrUpdateWarpTarget(FMotionWarpingTarget& WarpTarget);                                                            // [0x1a2f430] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 16 MaxSize: 0x00B8
class URootMotionModifier : public UObject
{ 
public:
	TWeakObjectPtr<class UAnimSequenceBase*>           Animation;                                                  // 0x0028   (0x0008)  
	float                                              StartTime;                                                  // 0x0030   (0x0004)  
	float                                              EndTime;                                                    // 0x0034   (0x0004)  
	float                                              PreviousPosition;                                           // 0x0038   (0x0004)  
	float                                              CurrentPosition;                                            // 0x003C   (0x0004)  
	float                                              Weight;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         StartTransform;                                             // 0x0050   (0x0030)  
	float                                              ActualStartTime;                                            // 0x0080   (0x0004)  
	SDK_UNDEFINED(16,518) /* FDelegateProperty */      __um(OnActivateDelegate);                                   // 0x0084   (0x0010)  
	SDK_UNDEFINED(16,519) /* FDelegateProperty */      __um(OnUpdateDelegate);                                     // 0x0094   (0x0010)  
	SDK_UNDEFINED(16,520) /* FDelegateProperty */      __um(OnDeactivateDelegate);                                 // 0x00A4   (0x0010)  
	ERootMotionModifierState                           State;                                                      // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_Warp
/// Size: 0x0190 (400 bytes) (0x0000B8 - 0x000190) align 16 MaxSize: 0x0190
class URootMotionModifier_Warp : public URootMotionModifier
{ 
public:
	FName                                              WarpTargetName;                                             // 0x00B8   (0x0008)  
	EWarpPointAnimProvider                             WarpPointAnimProvider;                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00C1   (0x000F)  MISSED
	FTransform                                         WarpPointAnimTransform;                                     // 0x00D0   (0x0030)  
	FName                                              WarpPointAnimBoneName;                                      // 0x0100   (0x0008)  
	bool                                               bWarpTranslation;                                           // 0x0108   (0x0001)  
	bool                                               bIgnoreZAxis;                                               // 0x0109   (0x0001)  
	EAlphaBlendOption                                  AddTranslationEasingFunc;                                   // 0x010A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x010B   (0x0005)  MISSED
	class UCurveFloat*                                 AddTranslationEasingCurve;                                  // 0x0110   (0x0008)  
	bool                                               bWarpRotation;                                              // 0x0118   (0x0001)  
	EMotionWarpRotationType                            RotationType;                                               // 0x0119   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x011A   (0x0002)  MISSED
	float                                              WarpRotationTimeMultiplier;                                 // 0x011C   (0x0004)  
	FTransform                                         CachedTargetTransform;                                      // 0x0120   (0x0030)  
	unsigned char                                      UnknownData03_7[0x40];                                      // 0x0150   (0x0040)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_SimpleWarp
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{ 
public:
};

/// Class /Script/MotionWarping.RootMotionModifier_Scale
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 16 MaxSize: 0x00D0
class URootMotionModifier_Scale : public URootMotionModifier
{ 
public:
	FVector                                            Scale;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00C4   (0x000C)  MISSED


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
	// class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale); // [0x1a2fbb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
/// Size: 0x0260 (608 bytes) (0x000190 - 0x000260) align 16 MaxSize: 0x0260
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{ 
public:
	bool                                               bWarpIKBones;                                               // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
	TArray<FName>                                      IKBones;                                                    // 0x0198   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FTransform                                         CachedMeshTransform;                                        // 0x01B0   (0x0030)  
	FTransform                                         CachedMeshRelativeTransform;                                // 0x01E0   (0x0030)  
	FTransform                                         CachedRootMotion;                                           // 0x0210   (0x0030)  
	FAnimSequenceTrackContainer                        Result;                                                     // 0x0240   (0x0020)  
};

/// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{ 
public:


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	// class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // [0x1a2fd70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingWindowData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMotionWarpingWindowData
{ 
	class UAnimNotifyState_MotionWarping*              AnimNotify;                                                 // 0x0000   (0x0008)  
	float                                              StartTime;                                                  // 0x0008   (0x0004)  
	float                                              EndTime;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/MotionWarping.MotionWarpingUpdateContext
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMotionWarpingUpdateContext
{ 
	TWeakObjectPtr<class UAnimSequenceBase*>           Animation;                                                  // 0x0000   (0x0008)  
	float                                              PreviousPosition;                                           // 0x0008   (0x0004)  
	float                                              CurrentPosition;                                            // 0x000C   (0x0004)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	float                                              DeltaSeconds;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/MotionWarping.MotionDeltaTrack
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FMotionDeltaTrack
{ 
	TArray<FTransform>                                 BoneTransformTrack;                                         // 0x0000   (0x0010)  
	TArray<FVector>                                    DeltaTranslationTrack;                                      // 0x0010   (0x0010)  
	TArray<FRotator>                                   DeltaRotationTrack;                                         // 0x0020   (0x0010)  
	FVector                                            TotalTranslation;                                           // 0x0030   (0x000C)  
	FRotator                                           TotalRotation;                                              // 0x003C   (0x000C)  
};

/// Struct /Script/MotionWarping.MotionDeltaTrackContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMotionDeltaTrackContainer
{ 
	TArray<FMotionDeltaTrack>                          Tracks;                                                     // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UAnimNotifyState_MotionWarping) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UMotionWarpingUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMotionWarpingTarget) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(UMotionWarpingComponent) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(URootMotionModifier) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(URootMotionModifier_Warp) == 0x0190); // 400 bytes (0x0000B8 - 0x000190)
static_assert(sizeof(URootMotionModifier_SimpleWarp) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(URootMotionModifier_Scale) == 0x00D0); // 208 bytes (0x0000B8 - 0x0000D0)
static_assert(sizeof(URootMotionModifier_AdjustmentBlendWarp) == 0x0260); // 608 bytes (0x000190 - 0x000260)
static_assert(sizeof(URootMotionModifier_SkewWarp) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(FMotionWarpingWindowData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMotionWarpingUpdateContext) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMotionDeltaTrack) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMotionDeltaTrackContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UAnimNotifyState_MotionWarping, RootMotionModifier) == 0x0030);
static_assert(offsetof(FMotionWarpingTarget, Name) == 0x0000);
static_assert(offsetof(FMotionWarpingTarget, Location) == 0x0008);
static_assert(offsetof(FMotionWarpingTarget, Rotation) == 0x0014);
static_assert(offsetof(FMotionWarpingTarget, Component) == 0x0020);
static_assert(offsetof(FMotionWarpingTarget, BoneName) == 0x0028);
static_assert(offsetof(UMotionWarpingComponent, CharacterOwner) == 0x00C8);
static_assert(offsetof(UMotionWarpingComponent, Modifiers) == 0x00D0);
static_assert(offsetof(UMotionWarpingComponent, WarpTargets) == 0x00E0);
static_assert(offsetof(URootMotionModifier, Animation) == 0x0028);
static_assert(offsetof(URootMotionModifier, StartTransform) == 0x0050);
static_assert(offsetof(URootMotionModifier, State) == 0x00B4);
static_assert(offsetof(URootMotionModifier_Warp, WarpTargetName) == 0x00B8);
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimProvider) == 0x00C0);
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimTransform) == 0x00D0);
static_assert(offsetof(URootMotionModifier_Warp, WarpPointAnimBoneName) == 0x0100);
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingFunc) == 0x010A);
static_assert(offsetof(URootMotionModifier_Warp, AddTranslationEasingCurve) == 0x0110);
static_assert(offsetof(URootMotionModifier_Warp, RotationType) == 0x0119);
static_assert(offsetof(URootMotionModifier_Warp, CachedTargetTransform) == 0x0120);
static_assert(offsetof(URootMotionModifier_Scale, Scale) == 0x00B8);
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, IKBones) == 0x0198);
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshTransform) == 0x01B0);
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedMeshRelativeTransform) == 0x01E0);
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, CachedRootMotion) == 0x0210);
static_assert(offsetof(URootMotionModifier_AdjustmentBlendWarp, Result) == 0x0240);
static_assert(offsetof(FMotionWarpingWindowData, AnimNotify) == 0x0000);
static_assert(offsetof(FMotionWarpingUpdateContext, Animation) == 0x0000);
static_assert(offsetof(FMotionDeltaTrack, BoneTransformTrack) == 0x0000);
static_assert(offsetof(FMotionDeltaTrack, DeltaTranslationTrack) == 0x0010);
static_assert(offsetof(FMotionDeltaTrack, DeltaRotationTrack) == 0x0020);
static_assert(offsetof(FMotionDeltaTrack, TotalTranslation) == 0x0030);
static_assert(offsetof(FMotionDeltaTrack, TotalRotation) == 0x003C);
static_assert(offsetof(FMotionDeltaTrackContainer, Tracks) == 0x0000);
