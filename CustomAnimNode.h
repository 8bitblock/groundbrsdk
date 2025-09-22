
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/CustomAnimNode.EIKFootRootLocalAxis
/// Size: 0x01 (1 bytes)
enum class EIKFootRootLocalAxis : uint8_t
{
	EIKFootRootLocalAxis__NONE                                                       = 0,
	EIKFootRootLocalAxis__X                                                          = 1,
	EIKFootRootLocalAxis__Y                                                          = 2,
	EIKFootRootLocalAxis__Z                                                          = 3
};

/// Struct /Script/CustomAnimNode.AxisSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAxisSettings
{ 
	TEnumAsByte<EAxis>                                 YawRotationAxis;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BodyOrientationAlpha;                                       // 0x0004   (0x0004)  
};

/// Struct /Script/CustomAnimNode.BoneRef
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FBoneRef
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CustomAnimNode.AnimMode_OrientationWarping
/// Size: 0x0060 (96 bytes) (0x000010 - 0x000060) align 8 MaxSize: 0x0060
struct FAnimMode_OrientationWarping : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	float                                              LocomotionAngle;                                            // 0x0020   (0x0004)  
	FAxisSettings                                      Settings;                                                   // 0x0024   (0x0008)  
	FBoneReference                                     PelvisBone;                                                 // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FBoneRef>                                   SpineBones;                                                 // 0x0040   (0x0010)  
	FBoneReference                                     IKFootRootBone;                                             // 0x0050   (0x0010)  
};

/// Struct /Script/CustomAnimNode.IKBones
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FIKBones
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)  
};

/// Struct /Script/CustomAnimNode.PelvisAdjustmentInterp
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPelvisAdjustmentInterp
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              Dampen;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/CustomAnimNode.AnimNode_SpeedWarping
/// Size: 0x0160 (352 bytes) (0x0000C8 - 0x000160) align 8 MaxSize: 0x0160
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKFootRootBone;                                             // 0x00C8   (0x0010)  
	TArray<FIKBones>                                   FeetDefinitions;                                            // 0x00D8   (0x0010)  
	FBoneReference                                     PelvisBone;                                                 // 0x00E8   (0x0010)  
	EIKFootRootLocalAxis                               SpeedWarpingAxisMode;                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              SpeedScaling;                                               // 0x00FC   (0x0004)  
	float                                              PelvisAdjustmentAlpha;                                      // 0x0100   (0x0004)  
	float                                              MaxIter;                                                    // 0x0104   (0x0004)  
	FPelvisAdjustmentInterp                            PelvisAdjustmentInterp;                                     // 0x0108   (0x0008)  
	bool                                               ClampIKUsingFKLeg;                                          // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_7[0x4F];                                      // 0x0111   (0x004F)  MISSED
};

/// Struct /Script/CustomAnimNode.IKFootLocation
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FIKFootLocation
{ 
	FVector                                            LimbRootLocation;                                           // 0x0000   (0x000C)  
	FVector                                            OriginLocation;                                             // 0x000C   (0x000C)  
	FVector                                            ActualLocation;                                             // 0x0018   (0x000C)  
	FVector                                            NewLocation;                                                // 0x0024   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(FAxisSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBoneRef) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimMode_OrientationWarping) == 0x0060); // 96 bytes (0x000010 - 0x000060)
static_assert(sizeof(FIKBones) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FPelvisAdjustmentInterp) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnimNode_SpeedWarping) == 0x0160); // 352 bytes (0x0000C8 - 0x000160)
static_assert(sizeof(FIKFootLocation) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FAxisSettings, YawRotationAxis) == 0x0000);
static_assert(offsetof(FBoneRef, Bone) == 0x0000);
static_assert(offsetof(FAnimMode_OrientationWarping, BasePose) == 0x0010);
static_assert(offsetof(FAnimMode_OrientationWarping, Settings) == 0x0024);
static_assert(offsetof(FAnimMode_OrientationWarping, PelvisBone) == 0x002C);
static_assert(offsetof(FAnimMode_OrientationWarping, SpineBones) == 0x0040);
static_assert(offsetof(FAnimMode_OrientationWarping, IKFootRootBone) == 0x0050);
static_assert(offsetof(FIKBones, IKFootBone) == 0x0000);
static_assert(offsetof(FIKBones, FKFootBone) == 0x0010);
static_assert(offsetof(FAnimNode_SpeedWarping, IKFootRootBone) == 0x00C8);
static_assert(offsetof(FAnimNode_SpeedWarping, FeetDefinitions) == 0x00D8);
static_assert(offsetof(FAnimNode_SpeedWarping, PelvisBone) == 0x00E8);
static_assert(offsetof(FAnimNode_SpeedWarping, SpeedWarpingAxisMode) == 0x00F8);
static_assert(offsetof(FAnimNode_SpeedWarping, PelvisAdjustmentInterp) == 0x0108);
static_assert(offsetof(FIKFootLocation, LimbRootLocation) == 0x0000);
static_assert(offsetof(FIKFootLocation, OriginLocation) == 0x000C);
static_assert(offsetof(FIKFootLocation, ActualLocation) == 0x0018);
static_assert(offsetof(FIKFootLocation, NewLocation) == 0x0024);
