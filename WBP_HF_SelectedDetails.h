
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: RBHotFoot
/// dependency: SlateCore
/// dependency: UMG
/// dependency: WBP_HF_ActorTags
/// dependency: WBP_HF_DetailsNameClass

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C
/// Size: 0x02C8 (712 bytes) (0x000260 - 0x0002C8) align 8 MaxSize: 0x02C8
class UWBP_HF_SelectedDetails_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UVerticalBox*                                Custom_Details_Container;                                   // 0x0268   (0x0008)  
	class UVerticalBox*                                Default_Details_Container;                                  // 0x0270   (0x0008)  
	class UImage*                                      Image_Line;                                                 // 0x0278   (0x0008)  
	class UScrollBox*                                  ScrollBox_Details;                                          // 0x0280   (0x0008)  
	class UWBP_HF_ActorTags_C*                         WBP_HF_ActorTags;                                           // 0x0288   (0x0008)  
	class UWBP_HF_DetailsNameClass_C*                  WBP_HF_DetailsNameClass;                                    // 0x0290   (0x0008)  
	class AHFManager*                                  HotFootManagerRef;                                          // 0x0298   (0x0008)  
	FMargin                                            DetailsPadding;                                             // 0x02A0   (0x0010)  
	FKey                                               NewVar;                                                     // 0x02B0   (0x0018)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.CreatePropertyWidget
	// void CreatePropertyWidget(FHFSharedProperty& SharedProperty, class UUserWidget*& PropertyWidget);                        // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.Refresh
	// void Refresh();                                                                                                          // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.OnSelectionChanged_Event
	// void OnSelectionChanged_Event();                                                                                         // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.BindOnSelectionChanged
	// void BindOnSelectionChanged();                                                                                           // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.Bind ActorStatusChangeDelegates
	// void BindActorStatusChangeDelegates();                                                                                   // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.OnActorSpawned_Event
	// void OnActorSpawned_Event(class AActor* Actor);                                                                          // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.SetHotfootManager
	// void SetHotfootManager(class AHFManager* HotFootManagerRef);                                                             // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_SelectedDetails.WBP_HF_SelectedDetails_C.ExecuteUbergraph_WBP_HF_SelectedDetails
	// void ExecuteUbergraph_WBP_HF_SelectedDetails(int32_t EntryPoint);                                                        // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_SelectedDetails_C) == 0x02C8); // 712 bytes (0x000260 - 0x0002C8)
static_assert(offsetof(UWBP_HF_SelectedDetails_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, Custom_Details_Container) == 0x0268);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, Default_Details_Container) == 0x0270);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, Image_Line) == 0x0278);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, ScrollBox_Details) == 0x0280);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, WBP_HF_ActorTags) == 0x0288);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, WBP_HF_DetailsNameClass) == 0x0290);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, HotFootManagerRef) == 0x0298);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, DetailsPadding) == 0x02A0);
static_assert(offsetof(UWBP_HF_SelectedDetails_C, NewVar) == 0x02B0);
