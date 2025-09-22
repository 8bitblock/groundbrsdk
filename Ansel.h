
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

/// Enum /Script/Ansel.EUIControlEffectTarget
/// Size: 0x01 (1 bytes)
enum class EUIControlEffectTarget : uint8_t
{
	Bloom                                                                            = 0,
	DepthOfField                                                                     = 1,
	ChromaticAberration                                                              = 2,
	MotionBlur                                                                       = 3
};

/// Class /Script/Ansel.AnselFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAnselFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Ansel.AnselFunctionLibrary.StopSession
	// void StopSession(class UObject* WorldContextObject);                                                                     // [0x8d9a90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.StartSession
	// void StartSession(class UObject* WorldContextObject);                                                                    // [0x8d9a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetUIControlVisibility
	// void SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible); // [0x8d9910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetSettleFrames
	// void SetSettleFrames(int32_t NumSettleFrames);                                                                           // [0x8d9890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
	// void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);                                                                // [0x8d9810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
	// void SetCameraMovementSpeed(float TranslationSpeed);                                                                     // [0x8d9790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
	// void SetCameraConstraintDistance(float MaxCameraDistance);                                                               // [0x8d9710] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
	// void SetCameraConstraintCameraSize(float CameraSize);                                                                    // [0x8d9690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetAutoPostprocess
	// void SetAutoPostprocess(bool bShouldAutoPostprocess);                                                                    // [0x8d9610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.SetAutoPause
	// void SetAutoPause(bool bShouldAutoPause);                                                                                // [0x8d9590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.IsPhotographyAvailable
	// bool IsPhotographyAvailable();                                                                                           // [0x8d9560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.IsPhotographyAllowed
	// bool IsPhotographyAllowed();                                                                                             // [0x8d9530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
	// void ConstrainCameraByGeometry(class UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation); // [0x8d9370] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
	// void ConstrainCameraByDistance(class UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation, float MaxDistance); // [0x8d9170] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UAnselFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
