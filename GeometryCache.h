
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

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0030   (0x0010)  
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0060   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0064   (0x0004)  
	uint64_t                                           Hash;                                                       // 0x0068   (0x0008)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class AGeometryCacheActor : public AActor
{ 
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                     // 0x0220   (0x0008)  


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// class UGeometryCacheComponent* GetGeometryCacheComponent();                                                              // [0x1a1c860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGeometryCacheCodecBase : public UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x04E0 (1248 bytes) (0x000478 - 0x0004E0) align 16 MaxSize: 0x04E0
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	class UGeometryCache*                              GeometryCache;                                              // 0x0478   (0x0008)  
	bool                                               bRunning;                                                   // 0x0480   (0x0001)  
	bool                                               bLooping;                                                   // 0x0481   (0x0001)  
	bool                                               bExtrapolateFrames;                                         // 0x0482   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0483   (0x0001)  MISSED
	float                                              StartTimeOffset;                                            // 0x0484   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x0488   (0x0004)  
	float                                              MotionVectorScale;                                          // 0x048C   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x0490   (0x0004)  
	float                                              ElapsedTime;                                                // 0x0494   (0x0004)  
	unsigned char                                      UnknownData01_6[0x34];                                      // 0x0498   (0x0034)  MISSED
	float                                              Duration;                                                   // 0x04CC   (0x0004)  
	bool                                               bManualTick;                                                // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x04D1   (0x000F)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	// void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x1a1d040] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                             // [0x1a1d020] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x1a1cfa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x1a1cf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	// void SetMotionVectorScale(float NewMotionVectorScale);                                                                   // [0x1a1cea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x1a1cc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(class UGeometryCache* NewGeomCache);                                                               // [0x1a1cb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	// void SetExtrapolateFrames(bool bNewExtrapolating);                                                                       // [0x1a1cae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                              // [0x1a1cac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                     // [0x1a1caa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x1a1ca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                             // [0x1a1ca60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                            // [0x1a1ca40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                                // [0x1a1ca10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x1a1c9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x1a1c9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	// bool IsExtrapolatingFrames();                                                                                            // [0x1a1c980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                              // [0x1a1c950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                                // [0x1a1c920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// float GetPlaybackDirection();                                                                                            // [0x1a1c8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// int32_t GetNumberOfFrames();                                                                                             // [0x1a1c8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	// float GetMotionVectorScale();                                                                                            // [0x1a1c890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	// float GetDuration();                                                                                                     // [0x1a1c830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	// float GetAnimationTime();                                                                                                // [0x1a1c800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGeometryCacheTrack : public UObject
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align 8 MaxSize: 0x0080
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x005C   (0x0024)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x1a1c5a0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x00D8 (216 bytes) (0x000058 - 0x0000D8) align 8 MaxSize: 0x00D8
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	class UGeometryCacheCodecBase*                     Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0060   (0x0068)  MISSED
	float                                              StartSampleTime;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00CC   (0x000C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x0108 (264 bytes) (0x000058 - 0x000108) align 8 MaxSize: 0x0108
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0058   (0x00B0)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x1a1cca0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x0108 (264 bytes) (0x000058 - 0x000108) align 8 MaxSize: 0x0108
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0058   (0x00B0)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x1a1cca0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 1 MaxSize: 0x0008
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGeometryCache) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(AGeometryCacheActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UGeometryCacheCodecBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGeometryCacheCodecRaw) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheCodecV1) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheComponent) == 0x04E0); // 1248 bytes (0x000478 - 0x0004E0)
static_assert(sizeof(UGeometryCacheTrack) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x0080); // 128 bytes (0x000058 - 0x000080)
static_assert(sizeof(UGeometryCacheTrackStreamable) == 0x00D8); // 216 bytes (0x000058 - 0x0000D8)
static_assert(sizeof(UGeometryCacheTrack_TransformAnimation) == 0x0108); // 264 bytes (0x000058 - 0x000108)
static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0x0108); // 264 bytes (0x000058 - 0x000108)
static_assert(sizeof(FTrackRenderData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FGeometryCacheMeshData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FGeometryCacheVertexInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGeometryCacheMeshBatchInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UGeometryCache, Materials) == 0x0030);
static_assert(offsetof(UGeometryCache, Tracks) == 0x0040);
static_assert(offsetof(AGeometryCacheActor, GeometryCacheComponent) == 0x0220);
static_assert(offsetof(UGeometryCacheCodecBase, TopologyRanges) == 0x0028);
static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 0x0478);
static_assert(offsetof(UGeometryCacheTrackStreamable, Codec) == 0x0058);
