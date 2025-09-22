
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C
/// Size: 0x02F8 (760 bytes) (0x000260 - 0x0002F8) align 8 MaxSize: 0x02F8
class UWBP_HF_PlaceableEntry_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UBorder*                                     Border;                                                     // 0x0268   (0x0008)  
	class UImage*                                      Image_ClassIcon;                                            // 0x0270   (0x0008)  
	class UTextBlock*                                  TextBlock_ClassTitle;                                       // 0x0278   (0x0008)  
	class UTexture2D*                                  IconRef;                                                    // 0x0280   (0x0008)  
	FText                                              DisplayName;                                                // 0x0288   (0x0018)  
	TWeakObjectPtr<class UObject*>                     Icon;                                                       // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x02A8   (0x0020)  MISSED
	TSoftObjectPtr<class UClass*>                      ClassRef;                                                   // 0x02C8   (0x0028)  
	FName                                              ActorTag;                                                   // 0x02F0   (0x0008)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.GetBrushColor
	// FLinearColor GetBrushColor();                                                                                            // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);            // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.OnLoaded_DF4541E34E2860BD9F9DA7AFDE0E7538
	// void OnLoaded_DF4541E34E2860BD9F9DA7AFDE0E7538(class UObject* Loaded);                                                   // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.OnLoaded_93920EBB40E370459F9697B41299DDBF
	// void OnLoaded_93920EBB40E370459F9697B41299DDBF(class UClass* Loaded);                                                    // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.Construct
	// void Construct();                                                                                                        // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.BindDragDropOperation
	// void BindDragDropOperation(class UDragDropOperation* DragDropOp);                                                        // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.OnDrop_Event
	// void OnDrop_Event(class UDragDropOperation* Operation);                                                                  // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableEntry.WBP_HF_PlaceableEntry_C.ExecuteUbergraph_WBP_HF_PlaceableEntry
	// void ExecuteUbergraph_WBP_HF_PlaceableEntry(int32_t EntryPoint);                                                         // [0x235b330] Final                
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_PlaceableEntry_C) == 0x02F8); // 760 bytes (0x000260 - 0x0002F8)
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, Border) == 0x0268);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, Image_ClassIcon) == 0x0270);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, TextBlock_ClassTitle) == 0x0278);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, IconRef) == 0x0280);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, DisplayName) == 0x0288);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, Icon) == 0x02A0);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, ClassRef) == 0x02C8);
static_assert(offsetof(UWBP_HF_PlaceableEntry_C, ActorTag) == 0x02F0);
