
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LXR
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /LXR/Widget/WB_LxrCanvas.WB_LxrCanvas_C
/// Size: 0x0268 (616 bytes) (0x000260 - 0x000268) align 8 MaxSize: 0x0268
class UWB_LxrCanvas_C : public UUserWidget
{ 
public:
	class UWB_DebugLightColorAndIntesity_C*            WB_DebugLightColorAndIntesity;                              // 0x0260   (0x0008)  
};

/// Class /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C
/// Size: 0x02B0 (688 bytes) (0x000260 - 0x0002B0) align 8 MaxSize: 0x02B0
class UWB_DebugLightColorAndIntesity_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UBorder*                                     Border;                                                     // 0x0268   (0x0008)  
	class USizeBox*                                    Lightsenseborder;                                           // 0x0270   (0x0008)  
	class UBorder*                                     lightSenseLxr;                                              // 0x0278   (0x0008)  
	class UProgressBar*                                ProgressBar;                                                // 0x0280   (0x0008)  
	class UProgressBar*                                SenseProgressBar;                                           // 0x0288   (0x0008)  
	class AActor*                                      MyPawn;                                                     // 0x0290   (0x0008)  
	class ULXRDetectionComponent*                      DetectionComponent;                                         // 0x0298   (0x0008)  
	class ULXRLightSenseComponent*                     SenseComponent;                                             // 0x02A0   (0x0008)  
	FTimerHandle                                       AutoDatasTimer;                                             // 0x02A8   (0x0008)  


	/// Functions
	// Function /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C.SetAutoDatas
	// void SetAutoDatas();                                                                                                     // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C.SetDatasByComponent
	// void SetDatasByComponent(class ULXRDetectionComponent* InDetectionComponent, class ULXRLightSenseComponent* InSenseComponent); // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C.SetDatasByPawn
	// void SetDatasByPawn(class AActor* LXRChar);                                                                              // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C.SetDatas
	// void SetDatas(FLinearColor InLxrColor, float InLxrPercent, FLinearColor InLightSenseColor, float InLightSensePercent);   // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C.Construct
	// void Construct();                                                                                                        // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C.EventSetAutoDatas
	// void EventSetAutoDatas();                                                                                                // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /LXR/Widget/WB_DebugLightColorAndIntesity.WB_DebugLightColorAndIntesity_C.ExecuteUbergraph_WB_DebugLightColorAndIntesity
	// void ExecuteUbergraph_WB_DebugLightColorAndIntesity(int32_t EntryPoint);                                                 // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWB_LxrCanvas_C) == 0x0268); // 616 bytes (0x000260 - 0x000268)
static_assert(sizeof(UWB_DebugLightColorAndIntesity_C) == 0x02B0); // 688 bytes (0x000260 - 0x0002B0)
static_assert(offsetof(UWB_LxrCanvas_C, WB_DebugLightColorAndIntesity) == 0x0260);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, Border) == 0x0268);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, Lightsenseborder) == 0x0270);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, lightSenseLxr) == 0x0278);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, ProgressBar) == 0x0280);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, SenseProgressBar) == 0x0288);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, MyPawn) == 0x0290);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, DetectionComponent) == 0x0298);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, SenseComponent) == 0x02A0);
static_assert(offsetof(UWB_DebugLightColorAndIntesity_C, AutoDatasTimer) == 0x02A8);
