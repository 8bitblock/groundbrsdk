
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

/// Enum /Script/MeshMorpherRuntime.EMeshMorpherBakeBranches
/// Size: 0x01 (1 bytes)
enum class EMeshMorpherBakeBranches : uint8_t
{
	EMeshMorpherBakeBranches__OnStart                                                = 0,
	EMeshMorpherBakeBranches__OnComplete                                             = 1
};

/// Class /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshMorpherRuntimeLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary.RemoveMorphTarget
	// bool RemoveMorphTarget(class USkeletalMesh* SkeletalMesh, FName Name);                                                   // [0x14fabd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary.GetMorphTargetsNames
	// void GetMorphTargetsNames(class USkeletalMesh* SkeletalMesh, TArray<FName>& Names);                                      // [0x14fa850] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary.FindMorphTarget
	// class UMorphTarget* FindMorphTarget(class USkeletalMesh* SkeletalMesh, FName Name);                                      // [0x14fa780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeSingleStandalone
	// void DoBakeSingleStandalone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class USkeletalMesh* SkeletalMesh, class UStandaloneMorphTarget* MorphTarget, float Weight, EMeshMorpherBakeBranches& Out); // [0x14fa580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeSingle
	// void DoBakeSingle(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class USkeletalMesh* SkeletalMesh, class UMorphTarget* MorphTarget, float Weight, EMeshMorpherBakeBranches& Out); // [0x14fa380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeMultipleStandalone
	// void DoBakeMultipleStandalone(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class USkeletalMesh* SkeletalMesh, TMap<UStandaloneMorphTarget*, float>& MorphTargets, EMeshMorpherBakeBranches& Out); // [0x14fa100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshMorpherRuntime.MeshMorpherRuntimeLibrary.DoBakeMultiple
	// void DoBakeMultiple(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class USkeletalMesh* SkeletalMesh, TMap<UMorphTarget*, float>& MorphTargets, EMeshMorpherBakeBranches& Out); // [0x14f9e80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MeshMorpherRuntime.MeshMorpherWorkerLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshMorpherWorkerLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MeshMorpherRuntime.MeshMorpherWorkerLibrary.WaitToFinish
	// void WaitToFinish(class UObject* WorldContextObject, FMeshMorpherWorkerRef& WorkerReference);                            // [0x14faca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsValid
	// bool IsValid(class UObject* WorldContextObject, FMeshMorpherWorkerRef& WorkerReference);                                 // [0x14faaf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsRunning
	// bool IsRunning(class UObject* WorldContextObject, FMeshMorpherWorkerRef& WorkerReference);                               // [0x14faa10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MeshMorpherRuntime.MeshMorpherWorkerLibrary.IsCanceled
	// bool IsCanceled(class UObject* WorldContextObject, FMeshMorpherWorkerRef& WorkerReference);                              // [0x14fa930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MeshMorpherRuntime.MeshMorpherWorkerLibrary.Cancel
	// void Cancel(class UObject* WorldContextObject, FMeshMorpherWorkerRef& WorkerReference, bool& bIsSuccess);                // [0x14f9d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MeshMorpherRuntime.MetaMorph
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMetaMorph : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MeshMorpherRuntime.StandaloneMaskSelection
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 16 MaxSize: 0x0110
class UStandaloneMaskSelection : public UObject
{ 
public:
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0028   (0x0008)  
	SDK_UNDEFINED(80,837) /* TSet<int32_t> */          __um(SelectedVertices);                                     // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,838) /* TSet<int32_t> */          __um(SelectedTriangles);                                    // 0x0080   (0x0050)  
	FTransform                                         Transform;                                                  // 0x00D0   (0x0030)  
	int32_t                                            MeshVertexCount;                                            // 0x0100   (0x0004)  
	int32_t                                            MeshTriangleCount;                                          // 0x0104   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/MeshMorpherRuntime.StandaloneMorphTarget
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UStandaloneMorphTarget : public UObject
{ 
public:
	class USkeletalMesh*                               BaseSkelMesh;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/MeshMorpherRuntime.MeshMorpherWorkerRef
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMeshMorpherWorkerRef
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMeshMorpherRuntimeLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshMorpherWorkerLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMetaMorph) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UStandaloneMaskSelection) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UStandaloneMorphTarget) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FMeshMorpherWorkerRef) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UStandaloneMaskSelection, SkeletalMesh) == 0x0028);
static_assert(offsetof(UStandaloneMaskSelection, Transform) == 0x00D0);
static_assert(offsetof(UStandaloneMorphTarget, BaseSkelMesh) == 0x0028);
