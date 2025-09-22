
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

#pragma pack(push, 0x1)

/// Class /Script/TheCurviestCurve.CurveCurviestBlueprintUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCurveCurviestBlueprintUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheCurviestCurve.CurveCurviestBlueprintUtils.GetValueFromTaggedCurve
	// float GetValueFromTaggedCurve(class UCurveCurviest* Curve, FGameplayTag Tag, float InTime, bool bAllowParamLookup);      // [0x1aaa480] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheCurviestCurve.CurveCurviestBlueprintUtils.GetValueFromCurve
	// float GetValueFromCurve(class UCurveBase* Curve, FName Name, float InTime);                                              // [0x1aaa370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/TheCurviestCurve.CurviestCurveData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FCurviestCurveData
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FGameplayTag                                       IdentifierTag;                                              // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FRichCurve                                         Curve;                                                      // 0x0020   (0x0080)  
};

/// Struct /Script/TheCurviestCurve.CurviestCurveFloatParam
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FCurviestCurveFloatParam
{ 
	FGameplayTag                                       IdentifierTag;                                              // 0x0000   (0x0008)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
};

/// Class /Script/TheCurviestCurve.CurveCurviest
/// Size: 0x0158 (344 bytes) (0x000030 - 0x000158) align 8 MaxSize: 0x0158
class UCurveCurviest : public UCurveBase
{ 
public:
	class UCurveCurviest*                              Parent;                                                     // 0x0030   (0x0008)  
	TArray<FCurviestCurveData>                         CurveData;                                                  // 0x0038   (0x0010)  
	TArray<FCurviestCurveFloatParam>                   Params;                                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x100];                                     // 0x0058   (0x0100)  MISSED


	/// Functions
	// Function /Script/TheCurviestCurve.CurveCurviest.GetFloatValueFromTaggedParam
	// bool GetFloatValueFromTaggedParam(FGameplayTag IdentifierTag, float& ValueOut);                                          // [0x1aaa290] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheCurviestCurve.CurveCurviest.GetFloatValueFromTaggedCurve
	// bool GetFloatValueFromTaggedCurve(FGameplayTag IdentifierTag, float InTime, float& ValueOut, bool bAllowParamLookup);    // [0x1aaa110] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheCurviestCurve.CurveCurviest.GetFloatValueFromNamedCurve
	// bool GetFloatValueFromNamedCurve(FName Name, float InTime, float& ValueOut);                                             // [0x1aa9ff0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheCurviestCurve.CurveCurviest.GetFloatValue
	// float GetFloatValue(FName Name, float InTime);                                                                           // [0x1aa9f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(UCurveCurviestBlueprintUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCurviestCurveData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FCurviestCurveFloatParam) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UCurveCurviest) == 0x0158); // 344 bytes (0x000030 - 0x000158)
static_assert(offsetof(FCurviestCurveData, Name) == 0x0000);
static_assert(offsetof(FCurviestCurveData, IdentifierTag) == 0x0008);
static_assert(offsetof(FCurviestCurveData, Color) == 0x0010);
static_assert(offsetof(FCurviestCurveData, Curve) == 0x0020);
static_assert(offsetof(FCurviestCurveFloatParam, IdentifierTag) == 0x0000);
static_assert(offsetof(UCurveCurviest, Parent) == 0x0030);
static_assert(offsetof(UCurveCurviest, CurveData) == 0x0038);
static_assert(offsetof(UCurveCurviest, Params) == 0x0048);
