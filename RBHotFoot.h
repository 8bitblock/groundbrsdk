
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InteractiveToolsFramework
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/RBHotFoot.EHGGizmoMethod
/// Size: 0x01 (1 bytes)
enum class EHGGizmoMethod : uint8_t
{
	EHGGizmoMethod__GM_Translate                                                     = 0,
	EHGGizmoMethod__GM_Rotate                                                        = 1,
	EHGGizmoMethod__GM_Scale                                                         = 2
};

/// Class /Script/RBHotFoot.HFActorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHFActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/RBHotFoot.HFActorInterface.PreEditProperty
	// void PreEditProperty(FString PropertyName, FString PropertyValue);                                                       // [0x1a51c90] Native|Event|Public|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.PostEditProperty
	// void PostEditProperty(FString PropertyName, FString PropertyValue);                                                      // [0x1a51b90] Native|Event|Public|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.OnSelected
	// void OnSelected();                                                                                                       // [0x1a51b70] Native|Event|Public|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.OnSaved
	// void OnSaved();                                                                                                          // [0x1a51b50] Native|Event|Public|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.OnLoaded
	// void OnLoaded();                                                                                                         // [0xacd2d0] Native|Event|Public|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.OnEndEdit
	// void OnEndEdit();                                                                                                        // [0x1a51690] Native|Event|Public|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.OnDeselected
	// void OnDeselected();                                                                                                     // [0x1a51670] Native|Event|Public|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.OnBeginEdit
	// void OnBeginEdit();                                                                                                      // [0xe7ac70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.GetPlacementTranslate
	// FVector GetPlacementTranslate();                                                                                         // [0x1a50ff0] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.GetCustomPropertyWidget
	// TSoftObjectPtr<UClass*> GetCustomPropertyWidget(FString PropertyName);                                                   // [0x1a50ed0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/RBHotFoot.HFActorInterface.GetCustomDetailWidgets
	// TArray<TSoftObjectPtr<UClass*>> GetCustomDetailWidgets();                                                                // [0x1a50e50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/RBHotFoot.HFDragDropOperation
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 8 MaxSize: 0x0090
class UHFDragDropOperation : public UDragDropOperation
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/RBHotFoot.HFDragDropOperation.GetViewportPosition
	// FVector2D GetViewportPosition();                                                                                         // [0x1a512b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RBHotFoot.HFFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHFFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RBHotFoot.HFFunctionLibrary.SpawnActorsFromFile
	// TArray<AActor*> SpawnActorsFromFile(class UObject* WorldContextObject, class UHFSave* SaveFile, FName ActorTag, class UClass* OnlySpawnThisClass); // [0x1a529e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.SortActorArray
	// void SortActorArray(TArray<AActor*>& ActorArray, bool bAscendingOrder, bool bByClass, TArray<AActor*>& ActorArrayRef);   // [0x1a52840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.SetShapeDrawOnlyIfSelected
	// void SetShapeDrawOnlyIfSelected(class UShapeComponent* Target, bool bNewDrawOnlyIfSelected);                             // [0x1a52640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.SetShapeColour
	// void SetShapeColour(class UShapeComponent* Target, FColor NewColour);                                                    // [0x1a52580] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.MakeUniqueActorName
	// FName MakeUniqueActorName(FString BaseActorName, TArray<FString>& ExistingActorNames);                                   // [0x1a51540] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.LoadFile
	// class UHFSave* LoadFile(FString Filename, bool bIgnoreSaveGameVersion);                                                  // [0x1a51460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.DrawSolidBox
	// void DrawSolidBox(class UObject* WorldContextObject, FVector& Center, FVector& Extent, FRotator& Rotation, FColor& Color); // [0x1a50bb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.DrawLines
	// void DrawLines(class UObject* WorldContextObject, TArray<FVector>& Starts, TArray<FVector>& Ends, FLinearColor& Color, float Thickness); // [0x1a509d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.DrawLine
	// void DrawLine(class UObject* WorldContextObject, FVector& Start, FVector& End, FLinearColor& Color, float Thickness);    // [0x1a507f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.DrawArrow
	// void DrawArrow(class UObject* WorldContextObject, FVector& Start, FVector& End, FLinearColor& Color, float ArrowSize, float Thickness); // [0x1a505d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.DirectSave
	// bool DirectSave(class UHFSave* SaveObject, FString Filename);                                                            // [0x1a504f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.DebugGameViewportClient
	// void DebugGameViewportClient(class UObject* WorldContextObject);                                                         // [0x1a50470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.ClearActors
	// void ClearActors(class UObject* WorldContextObject, FName ActorTag);                                                     // [0x1a50390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFFunctionLibrary.AsyncSave
	// void AsyncSave(class UObject* WorldContextObject, class UHFSave* SaveObject, FString Filename, FName ActorTag, FDelegateProperty SavedDelegate); // [0x1a501e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/RBHotFoot.HFManager
/// Size: 0x0440 (1088 bytes) (0x000220 - 0x000440) align 16 MaxSize: 0x0440
class AHFManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0220   (0x0008)  MISSED
	class APawn*                                       PreviousPawn;                                               // 0x0228   (0x0008)  
	class APlayerController*                           PlayerController;                                           // 0x0230   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0238   (0x0020)  MISSED
	bool                                               bSnapToWorldGrid;                                           // 0x0258   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              GridSize;                                                   // 0x025C   (0x0004)  
	class UInteractiveToolsContext*                    ToolsContext;                                               // 0x0260   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0268   (0x0010)  MISSED
	SDK_UNDEFINED(16,370) /* FMulticastInlineDelegate */ __um(OnToolNotificationMessage);                          // 0x0278   (0x0010)  
	SDK_UNDEFINED(16,371) /* FMulticastInlineDelegate */ __um(OnToolWarningMessage);                               // 0x0288   (0x0010)  
	unsigned char                                      UnknownData04_6[0xF0];                                      // 0x0298   (0x00F0)  MISSED
	TArray<class AActor*>                              SelectedActors;                                             // 0x0388   (0x0010)  
	class UTransformGizmo*                             TransformGizmo;                                             // 0x0398   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x03A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,372) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,373) /* FMulticastInlineDelegate */ __um(OnActorSpawned);                                     // 0x03B8   (0x0010)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(OnActorDeleted);                                     // 0x03C8   (0x0010)  
	SDK_UNDEFINED(16,375) /* FMulticastInlineDelegate */ __um(OnRenameSelected);                                   // 0x03D8   (0x0010)  
	SDK_UNDEFINED(16,376) /* FMulticastInlineDelegate */ __um(OnPlayerInputChanged);                               // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x03F8   (0x0008)  MISSED
	class UClass*                                      ActorClassToSpawn;                                          // 0x0400   (0x0008)  
	unsigned char                                      UnknownData07_6[0x18];                                      // 0x0408   (0x0018)  MISSED
	SDK_UNDEFINED(16,377) /* FMulticastInlineDelegate */ __um(OnSpeedChangeRequested);                             // 0x0420   (0x0010)  
	unsigned char                                      UnknownData08_7[0x10];                                      // 0x0430   (0x0010)  MISSED


	/// Functions
	// Function /Script/RBHotFoot.HFManager.UpdateGizmos
	// void UpdateGizmos();                                                                                                     // [0x1a52c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SpawnPlaceableActorAt
	// bool SpawnPlaceableActorAt(class UClass* ActorClass, FVector2D ScreenPosition, FName ActorTag);                          // [0x1a52b60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SnapSelectedToFloor
	// void SnapSelectedToFloor();                                                                                              // [0x1a52820] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetSnapToWorldGrid
	// void SetSnapToWorldGrid(bool bNewSnapToWorldGrid);                                                                       // [0x1a52790] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetShowBlockalls
	// void SetShowBlockalls(bool bShow);                                                                                       // [0x1a52700] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetSelectedActorsSharedPropertyValue
	// void SetSelectedActorsSharedPropertyValue(FString PropertyName, FString PropertyValue);                                  // [0x1a52400] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetSelectedActor
	// void SetSelectedActor(class AActor* NewSelectedActor);                                                                   // [0x1a52370] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetSelectActorEnabled
	// void SetSelectActorEnabled(bool bEnabled);                                                                               // [0x1a522e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetLocalCoordinateSystem
	// void SetLocalCoordinateSystem(bool bEnable);                                                                             // [0x1a52250] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetGridSize
	// void SetGridSize(float NewGridSize);                                                                                     // [0x1a521d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetGizmoMethod
	// void SetGizmoMethod(EHGGizmoMethod Method);                                                                              // [0x1a52150] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetFlyingSpeed
	// void SetFlyingSpeed(float NewSpeed);                                                                                     // [0x1a520d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetAxisScreenPos
	// void SetAxisScreenPos(FVector2D Pos);                                                                                    // [0x1a52050] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.SetActorClassToSpawn
	// void SetActorClassToSpawn(class UClass* ActorClass);                                                                     // [0x1a51fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.RenameSelected
	// bool RenameSelected(FString NewName, FString& OutError);                                                                 // [0x1a51eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.RemoveSelectedActor
	// void RemoveSelectedActor(class AActor* Actor);                                                                           // [0x1a51e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.RefreshLoadedActors
	// void RefreshLoadedActors(FName ActorTag);                                                                                // [0x1a51d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.OnMouseButtonInput
	// bool OnMouseButtonInput(FPointerEvent& PointerEvent, TEnumAsByte<EInputEvent> Event);                                    // [0x1a51940] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.OnInputKey
	// bool OnInputKey(FKeyEvent& KeyEvent, TEnumAsByte<EInputEvent> Event);                                                    // [0x1a517e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.OnInputAxis
	// void OnInputAxis(FPointerEvent& PointerEvent);                                                                           // [0x1a516b0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.InternalUpdateGizmos
	// void InternalUpdateGizmos();                                                                                             // [0x1a51440] Final|Native|Protected 
	// Function /Script/RBHotFoot.HFManager.InputSnapSelectedToFloor
	// void InputSnapSelectedToFloor();                                                                                         // [0x1a51420] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.InputRenameSelected
	// void InputRenameSelected();                                                                                              // [0x1a51400] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.InputPasteSelectedActors
	// void InputPasteSelectedActors(bool bAtLocation);                                                                         // [0x1a51370] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.InputFocusOnSelected
	// void InputFocusOnSelected();                                                                                             // [0x1a51350] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.InputDeleteSelectedActors
	// void InputDeleteSelectedActors();                                                                                        // [0x1a51330] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.InputCutSelectedActors
	// void InputCutSelectedActors();                                                                                           // [0x1a51310] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.InputCopySelectedActors
	// void InputCopySelectedActors();                                                                                          // [0x1a512f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.GetSnapToWorldGrid
	// bool GetSnapToWorldGrid();                                                                                               // [0x1a51280] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.GetSharedProperties
	// TArray<FHFSharedProperty> GetSharedProperties();                                                                         // [0x1a51120] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.GetSharedCustomDetailWidgets
	// TArray<TSoftObjectPtr<UClass*>> GetSharedCustomDetailWidgets();                                                          // [0x1a510a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.GetSelectedActors
	// TArray<AActor*> GetSelectedActors();                                                                                     // [0x1a51050] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.GetGridSize
	// float GetGridSize();                                                                                                     // [0x1a50fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.FocusOnSelected
	// void FocusOnSelected();                                                                                                  // [0x1a50e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.Exit
	// void Exit();                                                                                                             // [0x1a50e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.EnablePlayerInput
	// void EnablePlayerInput(bool bNewValue);                                                                                  // [0x1a50d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.ClearSelectedActors
	// void ClearSelectedActors();                                                                                              // [0x1a50450] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBHotFoot.HFManager.AddSelectedActor
	// void AddSelectedActor(class AActor* Actor);                                                                              // [0x1a50150] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RBHotFoot.HFPawn
/// Size: 0x02B0 (688 bytes) (0x0002A8 - 0x0002B0) align 8 MaxSize: 0x02B0
class AHFPawn : public ADefaultPawn
{ 
public:
	class AHFManager*                                  HFManager;                                                  // 0x02A8   (0x0008)  
};

/// Struct /Script/RBHotFoot.HFActorSaveData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FHFActorSaveData
{ 
	FString                                            ActorClass;                                                 // 0x0000   (0x0010)  
	FName                                              ActorName;                                                  // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         ActorTransform;                                             // 0x0020   (0x0030)  
	TArray<FName>                                      ActorTags;                                                  // 0x0050   (0x0010)  
	TArray<char>                                       ActorData;                                                  // 0x0060   (0x0010)  
};

/// Class /Script/RBHotFoot.HFSave
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UHFSave : public USaveGame
{ 
public:
	TArray<FHFActorSaveData>                           SavedActors;                                                // 0x0028   (0x0010)  
	int32_t                                            SaveGameVersion;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/RBHotFoot.HFSave.OnPreSave
	// void OnPreSave();                                                                                                        // [0xb51de0] Native|Public        
	// Function /Script/RBHotFoot.HFSave.OnPostSave
	// void OnPostSave(bool bSuccess);                                                                                          // [0x1a51ac0] Native|Public        
	// Function /Script/RBHotFoot.HFSave.GetSaveGameVersion
	// int32_t GetSaveGameVersion();                                                                                            // [0x1a51030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBHotFoot.HFSave.GetLatestSaveGameVersion
	// int32_t GetLatestSaveGameVersion();                                                                                      // [0x19dec90] Native|Public|Const  
};

/// Class /Script/RBHotFoot.HFSelectActorToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHFSelectActorToolBuilder : public USingleClickToolBuilder
{ 
public:
};

/// Class /Script/RBHotFoot.HFSelectActorTool
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
class UHFSelectActorTool : public USingleClickTool
{ 
public:
	class UWorld*                                      TargetWorld;                                                // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<class AActor*>                              CachedSelectedActors;                                       // 0x0098   (0x0010)  
};

/// Class /Script/RBHotFoot.HFSpawnActorToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHFSpawnActorToolBuilder : public USingleClickToolBuilder
{ 
public:
};

/// Class /Script/RBHotFoot.HFSpawnActorTool
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
class UHFSpawnActorTool : public USingleClickTool
{ 
public:
	class UWorld*                                      TargetWorld;                                                // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/RBHotFoot.HFSharedProperty
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FHFSharedProperty
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Type;                                                       // 0x0010   (0x0010)  
	FString                                            SharedValue;                                                // 0x0020   (0x0010)  
	TSoftObjectPtr<class UClass*>                      Widget;                                                     // 0x0030   (0x0028)  
	bool                                               bMultipleValues;                                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UHFActorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHFDragDropOperation) == 0x0090); // 144 bytes (0x000088 - 0x000090)
static_assert(sizeof(UHFFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AHFManager) == 0x0440); // 1088 bytes (0x000220 - 0x000440)
static_assert(sizeof(AHFPawn) == 0x02B0); // 688 bytes (0x0002A8 - 0x0002B0)
static_assert(sizeof(FHFActorSaveData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UHFSave) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UHFSelectActorToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHFSelectActorTool) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UHFSpawnActorToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHFSpawnActorTool) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(FHFSharedProperty) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(AHFManager, PreviousPawn) == 0x0228);
static_assert(offsetof(AHFManager, PlayerController) == 0x0230);
static_assert(offsetof(AHFManager, ToolsContext) == 0x0260);
static_assert(offsetof(AHFManager, SelectedActors) == 0x0388);
static_assert(offsetof(AHFManager, TransformGizmo) == 0x0398);
static_assert(offsetof(AHFManager, ActorClassToSpawn) == 0x0400);
static_assert(offsetof(AHFPawn, HFManager) == 0x02A8);
static_assert(offsetof(FHFActorSaveData, ActorClass) == 0x0000);
static_assert(offsetof(FHFActorSaveData, ActorName) == 0x0010);
static_assert(offsetof(FHFActorSaveData, ActorTransform) == 0x0020);
static_assert(offsetof(FHFActorSaveData, ActorTags) == 0x0050);
static_assert(offsetof(FHFActorSaveData, ActorData) == 0x0060);
static_assert(offsetof(UHFSave, SavedActors) == 0x0028);
static_assert(offsetof(UHFSelectActorTool, TargetWorld) == 0x0088);
static_assert(offsetof(UHFSelectActorTool, CachedSelectedActors) == 0x0098);
static_assert(offsetof(UHFSpawnActorTool, TargetWorld) == 0x0088);
static_assert(offsetof(FHFSharedProperty, Name) == 0x0000);
static_assert(offsetof(FHFSharedProperty, Type) == 0x0010);
static_assert(offsetof(FHFSharedProperty, SharedValue) == 0x0020);
static_assert(offsetof(FHFSharedProperty, Widget) == 0x0030);
