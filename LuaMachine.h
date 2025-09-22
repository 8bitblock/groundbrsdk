
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

/// Enum /Script/LuaMachine.ELuaValueType
/// Size: 0x01 (1 bytes)
enum class ELuaValueType : uint8_t
{
	ELuaValueType__Nil                                                               = 0,
	ELuaValueType__Bool                                                              = 1,
	ELuaValueType__Integer                                                           = 2,
	ELuaValueType__Number                                                            = 3,
	ELuaValueType__String                                                            = 4,
	ELuaValueType__Function                                                          = 5,
	ELuaValueType__Table                                                             = 6,
	ELuaValueType__UFunction                                                         = 7,
	ELuaValueType__UObject                                                           = 8,
	ELuaValueType__Thread                                                            = 9,
	ELuaValueType__MulticastDelegate                                                 = 10
};

/// Enum /Script/LuaMachine.ELuaReflectionType
/// Size: 0x01 (1 bytes)
enum class ELuaReflectionType : uint8_t
{
	ELuaReflectionType__Unknown                                                      = 0,
	ELuaReflectionType__Property                                                     = 1,
	ELuaReflectionType__Function                                                     = 2
};

/// Enum /Script/LuaMachine.ELuaThreadStatus
/// Size: 0x01 (1 bytes)
enum class ELuaThreadStatus : uint8_t
{
	ELuaThreadStatus__Invalid                                                        = 0,
	ELuaThreadStatus__Ok                                                             = 1,
	ELuaThreadStatus__Suspended                                                      = 2,
	ELuaThreadStatus__Error                                                          = 3
};

/// Class /Script/LuaMachine.LuaBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULuaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.UnregisterLuaConsoleCommand
	// void UnregisterLuaConsoleCommand(FString CommandName);                                                                   // [0xb4d0a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.SwitchOnLuaValueType
	// void SwitchOnLuaValueType(FLuaValue& LuaValue, ELuaValueType& LuaValueTypes);                                            // [0xb4cf80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.RegisterLuaConsoleCommand
	// void RegisterLuaConsoleCommand(FString CommandName, FLuaValue& LuaConsoleCommand);                                       // [0xb4ce60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueYield
	// void LuaValueYield(FLuaValue Value, TArray<FLuaValue> Args);                                                             // [0xb4ccc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF8
	// FString LuaValueToUTF8(FLuaValue& Value);                                                                                // [0xb4cbd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF32
	// FString LuaValueToUTF32(FLuaValue& Value);                                                                               // [0xb4cae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF16
	// FString LuaValueToUTF16(FLuaValue& Value);                                                                               // [0xb4c9f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToTransientTexture
	// class UTexture2D* LuaValueToTransientTexture(int32_t Width, int32_t Height, FLuaValue& Value, TEnumAsByte<EPixelFormat> PixelFormat, bool bDetectFormat); // [0xb4c820] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToPointer
	// int64_t LuaValueToPointer(class UObject* WorldContextObject, class UClass* State, FLuaValue Value);                      // [0xb4c6d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToJson
	// FString LuaValueToJson(FLuaValue Value);                                                                                 // [0xb4c5d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToHexPointer
	// FString LuaValueToHexPointer(class UObject* WorldContextObject, class UClass* State, FLuaValue Value);                   // [0xb4c460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBlueprintGeneratedClass
	// class UClass* LuaValueToBlueprintGeneratedClass(FLuaValue& Value);                                                       // [0xb4c390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBase64
	// FString LuaValueToBase64(FLuaValue& Value);                                                                              // [0xb4c2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueResumeMulti
	// TArray<FLuaValue> LuaValueResumeMulti(FLuaValue Value, TArray<FLuaValue> Args);                                          // [0xb4c0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadObject
	// class UObject* LuaValueLoadObject(FLuaValue& Value);                                                                     // [0xb4bff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadClass
	// class UClass* LuaValueLoadClass(FLuaValue& Value, bool bDetectBlueprintGeneratedClass);                                  // [0xb4bec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLength
	// int32_t LuaValueLength(FLuaValue Value);                                                                                 // [0xb4bde0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsThread
	// bool LuaValueIsThread(FLuaValue& Value);                                                                                 // [0xb4bd10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsTable
	// bool LuaValueIsTable(FLuaValue& Value);                                                                                  // [0xb4bc40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsString
	// bool LuaValueIsString(FLuaValue& Value);                                                                                 // [0xb4bb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsReferencedInLuaRegistry
	// bool LuaValueIsReferencedInLuaRegistry(FLuaValue Value);                                                                 // [0xb4ba90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsOwned
	// bool LuaValueIsOwned(FLuaValue& Value);                                                                                  // [0xb4b9c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNumber
	// bool LuaValueIsNumber(FLuaValue& Value);                                                                                 // [0xb4b8f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNotNil
	// bool LuaValueIsNotNil(FLuaValue& Value);                                                                                 // [0xb4b820] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNil
	// bool LuaValueIsNil(FLuaValue& Value);                                                                                    // [0xb4b750] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsInteger
	// bool LuaValueIsInteger(FLuaValue& Value);                                                                                // [0xb4b680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsFunction
	// bool LuaValueIsFunction(FLuaValue& Value);                                                                               // [0xb4b5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsBoolean
	// bool LuaValueIsBoolean(FLuaValue& Value);                                                                                // [0xb4b4e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueGetOwner
	// class UClass* LuaValueGetOwner(FLuaValue& Value);                                                                        // [0xb4b410] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF8
	// FLuaValue LuaValueFromUTF8(FString String);                                                                              // [0xb4b350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF32
	// FLuaValue LuaValueFromUTF32(FString String);                                                                             // [0xb4b290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF16
	// FLuaValue LuaValueFromUTF16(FString String);                                                                             // [0xb4b1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromJson
	// bool LuaValueFromJson(class UObject* WorldContextObject, class UClass* State, FString Json, FLuaValue& Value);           // [0xb4b030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromBase64
	// FLuaValue LuaValueFromBase64(FString Base64);                                                                            // [0xb4af70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallMulti
	// TArray<FLuaValue> LuaValueCallMulti(FLuaValue Value, TArray<FLuaValue> Args);                                            // [0xb4ad90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallIfNotNil
	// FLuaValue LuaValueCallIfNotNil(FLuaValue Value, TArray<FLuaValue> Args);                                                 // [0xb4abc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCall
	// FLuaValue LuaValueCall(FLuaValue Value, TArray<FLuaValue> Args);                                                         // [0xb4a9f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayMerge
	// TArray<FLuaValue> LuaValueArrayMerge(TArray<FLuaValue> Array1, TArray<FLuaValue> Array2);                                // [0xb4a7f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayAppend
	// TArray<FLuaValue> LuaValueArrayAppend(TArray<FLuaValue> Array, FLuaValue Value);                                         // [0xb4a610] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStatus
	// ELuaThreadStatus LuaThreadGetStatus(FLuaValue Value);                                                                    // [0xb4a530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStackTop
	// int32_t LuaThreadGetStackTop(FLuaValue Value);                                                                           // [0xb4a450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableUnpack
	// TArray<FLuaValue> LuaTableUnpack(FLuaValue InTable);                                                                     // [0xb4a330] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableToVector
	// FVector LuaTableToVector(FLuaValue Value);                                                                               // [0xb4a240] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetMetaTable
	// FLuaValue LuaTableSetMetaTable(FLuaValue InTable, FLuaValue InMetaTable);                                                // [0xb4a0c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetField
	// FLuaValue LuaTableSetField(FLuaValue Table, FString Key, FLuaValue Value);                                               // [0xb49ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetByIndex
	// FLuaValue LuaTableSetByIndex(FLuaValue Table, int32_t Index, FLuaValue Value);                                           // [0xb49d30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableRange
	// TArray<FLuaValue> LuaTableRange(FLuaValue InTable, int32_t First, int32_t Last);                                         // [0xb49bb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTablePack
	// FLuaValue LuaTablePack(class UObject* WorldContextObject, class UClass* State, TArray<FLuaValue> Values);                // [0xb49a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergeUnpack
	// TArray<FLuaValue> LuaTableMergeUnpack(FLuaValue InTable1, FLuaValue InTable2);                                           // [0xb49860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergePack
	// FLuaValue LuaTableMergePack(class UObject* WorldContextObject, class UClass* State, TArray<FLuaValue> Values1, TArray<FLuaValue> Values2); // [0xb49600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCallWithSelf
	// FLuaValue LuaTableKeyCallWithSelf(FLuaValue InTable, FString Key, TArray<FLuaValue> Args);                               // [0xb493d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCall
	// FLuaValue LuaTableKeyCall(FLuaValue InTable, FString Key, TArray<FLuaValue> Args);                                       // [0xb491a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableIndexCall
	// FLuaValue LuaTableIndexCall(FLuaValue InTable, int32_t Index, TArray<FLuaValue> Args);                                   // [0xb48f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAny
	// bool LuaTableImplementsAny(FLuaValue Table, TArray<ULuaTableAsset*> TableAssets);                                        // [0xb48e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAll
	// bool LuaTableImplementsAll(FLuaValue Table, TArray<ULuaTableAsset*> TableAssets);                                        // [0xb48cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplements
	// bool LuaTableImplements(FLuaValue Table, class ULuaTableAsset* TableAsset);                                              // [0xb48b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetValues
	// TArray<FLuaValue> LuaTableGetValues(FLuaValue Table);                                                                    // [0xb48a60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetKeys
	// TArray<FLuaValue> LuaTableGetKeys(FLuaValue Table);                                                                      // [0xb48940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetField
	// FLuaValue LuaTableGetField(FLuaValue Table, FString Key);                                                                // [0xb487f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetByIndex
	// FLuaValue LuaTableGetByIndex(FLuaValue Table, int32_t Index);                                                            // [0xb486b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFromMap
	// FLuaValue LuaTableFromMap(class UObject* WorldContextObject, class UClass* State, TMap<FString, FLuaValue> Map);         // [0xb484d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFillObject
	// void LuaTableFillObject(FLuaValue InTable, class UObject* InObject);                                                     // [0xb483b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaTableAssetToLuaTable
	// FLuaValue LuaTableAssetToLuaTable(class UObject* WorldContextObject, class UClass* State, class ULuaTableAsset* TableAsset); // [0xb48270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaStateReload
	// void LuaStateReload(class UObject* WorldContextObject, class UClass* State);                                             // [0xb481b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaStateDestroy
	// void LuaStateDestroy(class UObject* WorldContextObject, class UClass* State);                                            // [0xb480f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaSetUserDataMetaTable
	// void LuaSetUserDataMetaTable(class UObject* WorldContextObject, class UClass* State, FLuaValue MetaTable);               // [0xb47fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaSetGlobal
	// void LuaSetGlobal(class UObject* WorldContextObject, class UClass* State, FString Name, FLuaValue Value);                // [0xb47e00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaRunURL
	// void LuaRunURL(class UObject* WorldContextObject, class UClass* State, FString URL, TMap<FString, FString> Headers, FString SecurityHeader, FString SignaturePublicExponent, FString SignatureModulus, FDelegateProperty Completed); // [0xb47a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaRunString
	// FLuaValue LuaRunString(class UObject* WorldContextObject, class UClass* State, FString CodeString, FString CodePath);    // [0xb478b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaRunNonContentFile
	// FLuaValue LuaRunNonContentFile(class UObject* WorldContextObject, class UClass* State, FString Filename, bool bIgnoreNonExistent); // [0xb47700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaRunFile
	// FLuaValue LuaRunFile(class UObject* WorldContextObject, class UClass* State, FString Filename, bool bIgnoreNonExistent); // [0xb47550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaRunCodeAsset
	// FLuaValue LuaRunCodeAsset(class UObject* WorldContextObject, class UClass* State, class ULuaCode* CodeAsset);            // [0xb47410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaRunByteCode
	// FLuaValue LuaRunByteCode(class UObject* WorldContextObject, class UClass* State, TArray<char>& ByteCode, FString CodePath); // [0xb47270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaNewLuaUserDataObject
	// FLuaValue LuaNewLuaUserDataObject(class UObject* WorldContextObject, class UClass* State, class UClass* UserDataObjectClass, bool bTrackObject); // [0xb470e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaLoadPakFile
	// bool LuaLoadPakFile(FString Filename, FString Mountpoint, TArray<FLuaValue>& Assets, FString ContentPath, FString AssetRegistryPath); // [0xb46e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaHttpRequest
	// void LuaHttpRequest(class UObject* WorldContextObject, class UClass* State, FString Method, FString URL, TMap<FString, FString> Headers, FLuaValue Body, FLuaValue Context, FDelegateProperty& ResponseReceived, FDelegateProperty& Error); // [0xb46970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValueMulti
	// TArray<FLuaValue> LuaGlobalCallValueMulti(class UObject* WorldContextObject, class UClass* State, FLuaValue Value, TArray<FLuaValue> Args); // [0xb46700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValue
	// FLuaValue LuaGlobalCallValue(class UObject* WorldContextObject, class UClass* State, FLuaValue Value, TArray<FLuaValue> Args); // [0xb464b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallMulti
	// TArray<FLuaValue> LuaGlobalCallMulti(class UObject* WorldContextObject, class UClass* State, FString Name, TArray<FLuaValue> Args); // [0xb46290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCall
	// FLuaValue LuaGlobalCall(class UObject* WorldContextObject, class UClass* State, FString Name, TArray<FLuaValue> Args);   // [0xb46090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGetUsedMemory
	// int32_t LuaGetUsedMemory(class UObject* WorldContextObject, class UClass* State);                                        // [0xb45fc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGetTop
	// int32_t LuaGetTop(class UObject* WorldContextObject, class UClass* State);                                               // [0xb45ef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGetState
	// class ULuaState* LuaGetState(class UObject* WorldContextObject, class UClass* State);                                    // [0xb45e20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGetGlobal
	// FLuaValue LuaGetGlobal(class UObject* WorldContextObject, class UClass* State, FString Name);                            // [0xb45cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGCStop
	// void LuaGCStop(class UObject* WorldContextObject, class UClass* State);                                                  // [0xb45c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGCRestart
	// void LuaGCRestart(class UObject* WorldContextObject, class UClass* State);                                               // [0xb45b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaGCCollect
	// void LuaGCCollect(class UObject* WorldContextObject, class UClass* State);                                               // [0xb45a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateUFunction
	// FLuaValue LuaCreateUFunction(class UObject* InObject, FString FunctionName);                                             // [0xb45970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateThread
	// FLuaValue LuaCreateThread(class UObject* WorldContextObject, class UClass* State, FLuaValue Value);                      // [0xb45800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateTable
	// FLuaValue LuaCreateTable(class UObject* WorldContextObject, class UClass* State);                                        // [0xb45700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateString
	// FLuaValue LuaCreateString(FString String);                                                                               // [0xb44c30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObjectInState
	// FLuaValue LuaCreateObjectInState(class UObject* WorldContextObject, class UClass* State, class UObject* InObject);       // [0xb455c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObject
	// FLuaValue LuaCreateObject(class UObject* InObject);                                                                      // [0xb44b80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNumber
	// FLuaValue LuaCreateNumber(float Value);                                                                                  // [0xb44190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNil
	// FLuaValue LuaCreateNil();                                                                                                // [0xb45570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateLazyTable
	// FLuaValue LuaCreateLazyTable(class UObject* WorldContextObject, class UClass* State);                                    // [0xb45470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateInteger
	// FLuaValue LuaCreateInteger(int32_t Value);                                                                               // [0xb44240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateBool
	// FLuaValue LuaCreateBool(bool bInBool);                                                                                   // [0xb440e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.LuaComponentGetField
	// FLuaValue LuaComponentGetField(FLuaValue LuaComponent, FString Key);                                                     // [0xb45320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.GetLuaReflectionType
	// void GetLuaReflectionType(class UObject* InObject, FString Name, ELuaReflectionType& LuaReflectionTypes);                // [0xb45200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAsLuaValue
	// FLuaValue GetLuaComponentByStateAsLuaValue(class AActor* Actor, class UClass* State);                                    // [0xb45100] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAndNameAsLuaValue
	// FLuaValue GetLuaComponentByStateAndNameAsLuaValue(class AActor* Actor, class UClass* State, FString Name);               // [0xb44fa0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByNameAsLuaValue
	// FLuaValue GetLuaComponentByNameAsLuaValue(class AActor* Actor, FString Name);                                            // [0xb44e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentAsLuaValue
	// FLuaValue GetLuaComponentAsLuaValue(class AActor* Actor);                                                                // [0xb44de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_TextToLuaValue
	// FLuaValue Conv_TextToLuaValue(FText& Value);                                                                             // [0xb44cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_StringToLuaValue
	// FLuaValue Conv_StringToLuaValue(FString Value);                                                                          // [0xb44c30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_ObjectToLuaValue
	// FLuaValue Conv_ObjectToLuaValue(class UObject* Object);                                                                  // [0xb44b80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_NameToLuaValue
	// FLuaValue Conv_NameToLuaValue(FName Value);                                                                              // [0xb44ad0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToText
	// FText Conv_LuaValueToText(FLuaValue& Value);                                                                             // [0xb449a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToString
	// FString Conv_LuaValueToString(FLuaValue& Value);                                                                         // [0xb448b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToObject
	// class UObject* Conv_LuaValueToObject(FLuaValue& Value);                                                                  // [0xb447e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToName
	// FName Conv_LuaValueToName(FLuaValue& Value);                                                                             // [0xb44710] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToInt
	// int32_t Conv_LuaValueToInt(FLuaValue& Value);                                                                            // [0xb44640] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFVector
	// FVector Conv_LuaValueToFVector(FLuaValue& Value);                                                                        // [0xb44490] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFloat
	// float Conv_LuaValueToFloat(FLuaValue& Value);                                                                            // [0xb44570] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToClass
	// class UClass* Conv_LuaValueToClass(FLuaValue& Value);                                                                    // [0xb443c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToBool
	// bool Conv_LuaValueToBool(FLuaValue& Value);                                                                              // [0xb442f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_IntToLuaValue
	// FLuaValue Conv_IntToLuaValue(int32_t Value);                                                                             // [0xb44240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_FloatToLuaValue
	// FLuaValue Conv_FloatToLuaValue(float Value);                                                                             // [0xb44190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.Conv_BoolToLuaValue
	// FLuaValue Conv_BoolToLuaValue(bool Value);                                                                               // [0xb440e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaBlueprintFunctionLibrary.AssignLuaValueToLuaState
	// FLuaValue AssignLuaValueToLuaState(class UObject* WorldContextObject, FLuaValue Value, class UClass* State);             // [0xb43f70] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/LuaMachine.LuaValue
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FLuaValue
{ 
	ELuaValueType                                      Type;                                                       // 0x0000   (0x0001)  
	bool                                               Bool;                                                       // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            Integer;                                                    // 0x0004   (0x0004)  
	float                                              Number;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            String;                                                     // 0x0010   (0x0010)  
	class UObject*                                     Object;                                                     // 0x0020   (0x0008)  
	FName                                              FunctionName;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0030   (0x0008)  MISSED
	class ULuaState*                                   LuaState;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/LuaMachine.LuaBlueprintPackage
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class ULuaBlueprintPackage : public UObject
{ 
public:
	TMap<FString, FLuaValue>                           Table;                                                      // 0x0028   (0x0050)  
	FLuaValue                                          SelfTable;                                                  // 0x0078   (0x0048)  


	/// Functions
	// Function /Script/LuaMachine.LuaBlueprintPackage.ReceiveInit
	// void ReceiveInit();                                                                                                      // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaBlueprintPackage.GetSelfLuaTable
	// FLuaValue GetSelfLuaTable();                                                                                             // [0xb4d480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LuaMachine.LuaBlueprintPackage.GetLuaState
	// class UClass* GetLuaState();                                                                                             // [0xb4d440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LuaMachine.LuaCode
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULuaCode : public UDataAsset
{ 
public:
	FText                                              Code;                                                       // 0x0030   (0x0018)  
	bool                                               bCookAsBytecode;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<char>                                       ByteCode;                                                   // 0x0050   (0x0010)  
	bool                                               bCooked;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/LuaMachine.LuaComponent
/// Size: 0x0170 (368 bytes) (0x0000B0 - 0x000170) align 8 MaxSize: 0x0170
class ULuaComponent : public UActorComponent
{ 
public:
	class UClass*                                      LuaState;                                                   // 0x00B0   (0x0008)  
	TMap<FString, FLuaValue>                           Table;                                                      // 0x00B8   (0x0050)  
	TMap<FString, FLuaValue>                           MetaTable;                                                  // 0x0108   (0x0050)  
	bool                                               bLazy;                                                      // 0x0158   (0x0001)  
	bool                                               bLogError;                                                  // 0x0159   (0x0001)  
	bool                                               bImplicitSelf;                                              // 0x015A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x015B   (0x0005)  MISSED
	SDK_UNDEFINED(16,411) /* FMulticastInlineDelegate */ __um(OnLuaError);                                         // 0x0160   (0x0010)  


	/// Functions
	// Function /Script/LuaMachine.LuaComponent.ReceiveLuaMetaNewIndex
	// bool ReceiveLuaMetaNewIndex(FLuaValue Key, FLuaValue Value);                                                             // [0xb4f4c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaComponent.ReceiveLuaMetaIndex
	// FLuaValue ReceiveLuaMetaIndex(FLuaValue Key);                                                                            // [0xb4f3b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaComponent.LuaSetField
	// void LuaSetField(FString Name, FLuaValue Value);                                                                         // [0xb4f280] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaGetField
	// FLuaValue LuaGetField(FString Name);                                                                                     // [0xb4f1b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaComponent.LuaComponentGetState
	// class ULuaState* LuaComponentGetState();                                                                                 // [0xb4f180] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaComponent.LuaCallValueMultiIfNotNil
	// TArray<FLuaValue> LuaCallValueMultiIfNotNil(FLuaValue Value, TArray<FLuaValue> Args);                                    // [0xb4ef90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallValueMulti
	// TArray<FLuaValue> LuaCallValueMulti(FLuaValue Value, TArray<FLuaValue> Args);                                            // [0xb4eda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallValueIfNotNil
	// FLuaValue LuaCallValueIfNotNil(FLuaValue Value, TArray<FLuaValue> Args);                                                 // [0xb4ebc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallValue
	// FLuaValue LuaCallValue(FLuaValue Value, TArray<FLuaValue> Args);                                                         // [0xb4e9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallTableKeyMulti
	// TArray<FLuaValue> LuaCallTableKeyMulti(FLuaValue InTable, FString Key, TArray<FLuaValue> Args);                          // [0xb4e740] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallTableKey
	// FLuaValue LuaCallTableKey(FLuaValue InTable, FString Key, TArray<FLuaValue> Args);                                       // [0xb4e4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallTableIndexMulti
	// TArray<FLuaValue> LuaCallTableIndexMulti(FLuaValue InTable, int32_t Index, TArray<FLuaValue> Args);                      // [0xb4e290] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallTableIndex
	// FLuaValue LuaCallTableIndex(FLuaValue InTable, int32_t Index, TArray<FLuaValue> Args);                                   // [0xb4e080] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallFunctionMulti
	// TArray<FLuaValue> LuaCallFunctionMulti(FString Name, TArray<FLuaValue> Args, bool bGlobal);                              // [0xb4de40] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaComponent.LuaCallFunction
	// FLuaValue LuaCallFunction(FString Name, TArray<FLuaValue> Args, bool bGlobal);                                           // [0xb4dc60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LuaMachine.LuaDelegate
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class ULuaDelegate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED


	/// Functions
	// Function /Script/LuaMachine.LuaDelegate.LuaDelegateFunction
	// void LuaDelegateFunction();                                                                                              // [0xb00010] Final|Native|Public  
};

/// Class /Script/LuaMachine.LuaGlobalNameComponent
/// Size: 0x00C8 (200 bytes) (0x0000B0 - 0x0000C8) align 8 MaxSize: 0x00C8
class ULuaGlobalNameComponent : public UActorComponent
{ 
public:
	class UClass*                                      LuaState;                                                   // 0x00B0   (0x0008)  
	FString                                            LuaGlobalName;                                              // 0x00B8   (0x0010)  
};

/// Struct /Script/LuaMachine.LuaCustomHighlighter
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLuaCustomHighlighter
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	TArray<FString>                                    Tokens;                                                     // 0x0010   (0x0010)  
};

/// Class /Script/LuaMachine.LuaMultiLineEditableTextBox
/// Size: 0x0C20 (3104 bytes) (0x000128 - 0x000C20) align 8 MaxSize: 0x0C20
class ULuaMultiLineEditableTextBox : public UTextLayoutWidget
{ 
public:
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0128   (0x07F8)  
	FTextBlockStyle                                    CodeStyle;                                                  // 0x0920   (0x0270)  
	FLinearColor                                       CommentColor;                                               // 0x0B90   (0x0010)  
	FLinearColor                                       StringColor;                                                // 0x0BA0   (0x0010)  
	FLinearColor                                       KeywordColor;                                               // 0x0BB0   (0x0010)  
	FLinearColor                                       NilColor;                                                   // 0x0BC0   (0x0010)  
	FLinearColor                                       BasicColor;                                                 // 0x0BD0   (0x0010)  
	FLinearColor                                       StdLibColor;                                                // 0x0BE0   (0x0010)  
	int32_t                                            TabSize;                                                    // 0x0BF0   (0x0004)  
	bool                                               bIsReadOnly;                                                // 0x0BF4   (0x0001)  
	bool                                               bHandleTab;                                                 // 0x0BF5   (0x0001)  
	bool                                               bHandleArrows;                                              // 0x0BF6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0BF7   (0x0001)  MISSED
	TArray<FLuaCustomHighlighter>                      CustomTokensMapping;                                        // 0x0BF8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0C08   (0x0018)  MISSED


	/// Functions
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.SetText
	// void SetText(FText InText);                                                                                              // [0xb50260] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.MoveCursorUp
	// void MoveCursorUp();                                                                                                     // [0xb50240] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.MoveCursorRight
	// void MoveCursorRight();                                                                                                  // [0xb50220] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.MoveCursorLeft
	// void MoveCursorLeft();                                                                                                   // [0xb50200] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.MoveCursorDown
	// void MoveCursorDown();                                                                                                   // [0xb501e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.GetText
	// FText GetText();                                                                                                         // [0xb50140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0xb500a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.GetCursorLine
	// int32_t GetCursorLine();                                                                                                 // [0xb50070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.GetCursorColumn
	// int32_t GetCursorColumn();                                                                                               // [0xb50040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LuaMachine.LuaMultiLineEditableTextBox.CursorGoTo
	// void CursorGoTo(int32_t Line, int32_t Column);                                                                           // [0xb4ff70] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LuaMachine.LuaLibsLoader
/// Size: 0x0009 (9 bytes) (0x000000 - 0x000009) align 1 MaxSize: 0x0009
struct FLuaLibsLoader
{ 
	bool                                               bLoadBase;                                                  // 0x0000   (0x0001)  
	bool                                               bLoadCoroutine;                                             // 0x0001   (0x0001)  
	bool                                               bLoadTable;                                                 // 0x0002   (0x0001)  
	bool                                               bLoadIO;                                                    // 0x0003   (0x0001)  
	bool                                               bLoadOS;                                                    // 0x0004   (0x0001)  
	bool                                               bLoadString;                                                // 0x0005   (0x0001)  
	bool                                               bLoadMath;                                                  // 0x0006   (0x0001)  
	bool                                               bLoadUTF8;                                                  // 0x0007   (0x0001)  
	bool                                               bLoadDebug;                                                 // 0x0008   (0x0001)  
};

/// Struct /Script/LuaMachine.LuaDelegateGroup
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLuaDelegateGroup
{ 
	TArray<class ULuaDelegate*>                        LuaDelegates;                                               // 0x0000   (0x0010)  
};

/// Class /Script/LuaMachine.LuaState
/// Size: 0x02F0 (752 bytes) (0x000028 - 0x0002F0) align 16 MaxSize: 0x02F0
class ULuaState : public UObject
{ 
public:
	class ULuaCode*                                    LuaCodeAsset;                                               // 0x0028   (0x0008)  
	FString                                            LuaFilename;                                                // 0x0030   (0x0010)  
	TMap<FString, FLuaValue>                           Table;                                                      // 0x0040   (0x0050)  
	TMap<FString, class UClass*>                       LuaBlueprintPackagesTable;                                  // 0x0090   (0x0050)  
	TMap<FString, class ULuaCode*>                     RequireTable;                                               // 0x00E0   (0x0050)  
	bool                                               bLuaOpenLibs;                                               // 0x0130   (0x0001)  
	FLuaLibsLoader                                     LuaLibsLoader;                                              // 0x0131   (0x0009)  
	bool                                               bAddProjectContentDirToPackagePath;                         // 0x013A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x013B   (0x0005)  MISSED
	TArray<FString>                                    AppendProjectContentDirSubDir;                              // 0x0140   (0x0010)  
	FString                                            OverridePackagePath;                                        // 0x0150   (0x0010)  
	FString                                            OverridePackageCPath;                                       // 0x0160   (0x0010)  
	class ULuaCode*                                    UserDataMetaTableFromCodeAsset;                             // 0x0170   (0x0008)  
	bool                                               bLogError;                                                  // 0x0178   (0x0001)  
	bool                                               bPersistent;                                                // 0x0179   (0x0001)  
	bool                                               bEnableLineHook;                                            // 0x017A   (0x0001)  
	bool                                               bEnableCallHook;                                            // 0x017B   (0x0001)  
	bool                                               bEnableReturnHook;                                          // 0x017C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x017D   (0x0003)  MISSED
	TMap<FString, class ULuaBlueprintPackage*>         LuaBlueprintPackages;                                       // 0x0180   (0x0050)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01D0   (0x0010)  MISSED
	TArray<class ULuaUserDataObject*>                  TrackedLuaUserDataObjects;                                  // 0x01E0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x01F0   (0x0030)  MISSED
	bool                                               bRawLuaFunctionCall;                                        // 0x0220   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6F];                                      // 0x0221   (0x006F)  MISSED
	SDK_UNDEFINED(80,412) /* TMap<TWeakObjectPtr<UObject*>, FLuaDelegateGroup> */ __um(LuaDelegatesMap);           // 0x0290   (0x0050)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x02E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LuaMachine.LuaState.ToByteCode
	// TArray<char> ToByteCode(FString Code, FString CodePath, FString& ErrorString);                                           // [0xb52240] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaState.StructToLuaTable
	// FLuaValue StructToLuaTable(class UScriptStruct* InScriptStruct, TArray<char>& StructData);                               // [0xb52120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LuaMachine.LuaState.SetPropertyFromLuaValue
	// bool SetPropertyFromLuaValue(class UObject* InObject, FString PropertyName, FLuaValue Value);                            // [0xb51fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaState.SetLuaUserDataField
	// void SetLuaUserDataField(FLuaValue UserData, FString Key, FLuaValue Value);                                              // [0xb51e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaStatePreInitialized
	// void ReceiveLuaStatePreInitialized();                                                                                    // [0xb51de0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaStateInitialized
	// void ReceiveLuaStateInitialized();                                                                                       // [0xb51dc0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaReturnHook
	// void ReceiveLuaReturnHook(FLuaDebug& LuaDebug);                                                                          // [0xb51cc0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaLineHook
	// void ReceiveLuaLineHook(FLuaDebug& LuaDebug);                                                                            // [0xb51bc0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaLevelRemovedFromWorld
	// void ReceiveLuaLevelRemovedFromWorld(class ULevel* Level, class UWorld* World);                                          // [0xb51af0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaLevelAddedToWorld
	// void ReceiveLuaLevelAddedToWorld(class ULevel* Level, class UWorld* World);                                              // [0xb51a20] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaError
	// void ReceiveLuaError(FString Message);                                                                                   // [0xb51980] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.ReceiveLuaCallHook
	// void ReceiveLuaCallHook(FLuaDebug& LuaDebug);                                                                            // [0xb51880] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LuaMachine.LuaState.NewLuaUserDataObject
	// FLuaValue NewLuaUserDataObject(class UClass* LuaUserDataObjectClass, bool bTrackObject);                                 // [0xb51780] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaState.LuaGetLocals
	// TMap<FString, FLuaValue> LuaGetLocals(int32_t Level);                                                                    // [0xb51640] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaState.LuaGetInfo
	// FLuaDebug LuaGetInfo(int32_t Level);                                                                                     // [0xb51520] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaState.GetSelfLuaState
	// class UClass* GetSelfLuaState();                                                                                         // [0xb51500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LuaMachine.LuaState.GetLuaValueFromProperty
	// FLuaValue GetLuaValueFromProperty(class UObject* InObject, FString PropertyName);                                        // [0xb513e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaState.GetLuaUserDataField
	// FLuaValue GetLuaUserDataField(FLuaValue UserData, FString Key);                                                          // [0xb51280] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaState.GetLuaBlueprintPackageTable
	// FLuaValue GetLuaBlueprintPackageTable(FString PackageName);                                                              // [0xb511b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LuaMachine.LuaTableAsset
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class ULuaTableAsset : public UDataAsset
{ 
public:
	TMap<FString, FLuaValue>                           Table;                                                      // 0x0030   (0x0050)  
};

/// Class /Script/LuaMachine.LuaUserDataObject
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULuaUserDataObject : public UObject
{ 
public:
	TMap<FString, FLuaValue>                           Table;                                                      // 0x0028   (0x0050)  
	TMap<FString, FLuaValue>                           MetaTable;                                                  // 0x0078   (0x0050)  
	bool                                               bImplicitSelf;                                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/LuaMachine.LuaUserDataObject.UFunctionToLuaValue
	// FLuaValue UFunctionToLuaValue(FString FunctionName);                                                                     // [0xb53230] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaUserDataObject.ReceiveLuaUserDataTableInit
	// void ReceiveLuaUserDataTableInit();                                                                                      // [0xb51dc0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaUserDataObject.ReceiveLuaMetaIndex
	// FLuaValue ReceiveLuaMetaIndex(FLuaValue Key);                                                                            // [0xb53120] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaUserDataObject.ReceiveLuaGC
	// void ReceiveLuaGC();                                                                                                     // [0xb53100] Native|Event|Public|BlueprintEvent 
	// Function /Script/LuaMachine.LuaUserDataObject.LuaSetField
	// void LuaSetField(FString Name, FLuaValue Value);                                                                         // [0xb52fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaUserDataObject.LuaGetField
	// FLuaValue LuaGetField(FString Name);                                                                                     // [0xb52f00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaUserDataObject.LuaCallFunction
	// FLuaValue LuaCallFunction(FString Name, TArray<FLuaValue> Args, bool bGlobal);                                           // [0xb52d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/LuaMachine.LuaUserDataObject.GetObjectUFunctions
	// TArray<FString> GetObjectUFunctions(bool bOnlyPublic);                                                                   // [0xb52be0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LuaMachine.LuaUserDataObject.GetLuaStateInstance
	// class ULuaState* GetLuaStateInstance();                                                                                  // [0xb52bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LuaMachine.LuaUserDataObject.GetLuaState
	// class UClass* GetLuaState();                                                                                             // [0xb4d440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LuaMachine.LuaDebug
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FLuaDebug
{ 
	int32_t                                            CurrentLine;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Source;                                                     // 0x0008   (0x0010)  
	FString                                            Name;                                                       // 0x0018   (0x0010)  
	FString                                            NameWhat;                                                   // 0x0028   (0x0010)  
	FString                                            What;                                                       // 0x0038   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ULuaBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLuaValue) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(ULuaBlueprintPackage) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(ULuaCode) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(ULuaComponent) == 0x0170); // 368 bytes (0x0000B0 - 0x000170)
static_assert(sizeof(ULuaDelegate) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULuaGlobalNameComponent) == 0x00C8); // 200 bytes (0x0000B0 - 0x0000C8)
static_assert(sizeof(FLuaCustomHighlighter) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ULuaMultiLineEditableTextBox) == 0x0C20); // 3104 bytes (0x000128 - 0x000C20)
static_assert(sizeof(FLuaLibsLoader) == 0x0009); // 9 bytes (0x000000 - 0x000009)
static_assert(sizeof(FLuaDelegateGroup) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULuaState) == 0x02F0); // 752 bytes (0x000028 - 0x0002F0)
static_assert(sizeof(ULuaTableAsset) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(ULuaUserDataObject) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(FLuaDebug) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(FLuaValue, Type) == 0x0000);
static_assert(offsetof(FLuaValue, String) == 0x0010);
static_assert(offsetof(FLuaValue, Object) == 0x0020);
static_assert(offsetof(FLuaValue, FunctionName) == 0x0028);
static_assert(offsetof(FLuaValue, LuaState) == 0x0038);
static_assert(offsetof(ULuaBlueprintPackage, Table) == 0x0028);
static_assert(offsetof(ULuaBlueprintPackage, SelfTable) == 0x0078);
static_assert(offsetof(ULuaCode, Code) == 0x0030);
static_assert(offsetof(ULuaCode, ByteCode) == 0x0050);
static_assert(offsetof(ULuaComponent, LuaState) == 0x00B0);
static_assert(offsetof(ULuaComponent, Table) == 0x00B8);
static_assert(offsetof(ULuaComponent, MetaTable) == 0x0108);
static_assert(offsetof(ULuaGlobalNameComponent, LuaState) == 0x00B0);
static_assert(offsetof(ULuaGlobalNameComponent, LuaGlobalName) == 0x00B8);
static_assert(offsetof(FLuaCustomHighlighter, Color) == 0x0000);
static_assert(offsetof(FLuaCustomHighlighter, Tokens) == 0x0010);
static_assert(offsetof(ULuaMultiLineEditableTextBox, WidgetStyle) == 0x0128);
static_assert(offsetof(ULuaMultiLineEditableTextBox, CodeStyle) == 0x0920);
static_assert(offsetof(ULuaMultiLineEditableTextBox, CommentColor) == 0x0B90);
static_assert(offsetof(ULuaMultiLineEditableTextBox, StringColor) == 0x0BA0);
static_assert(offsetof(ULuaMultiLineEditableTextBox, KeywordColor) == 0x0BB0);
static_assert(offsetof(ULuaMultiLineEditableTextBox, NilColor) == 0x0BC0);
static_assert(offsetof(ULuaMultiLineEditableTextBox, BasicColor) == 0x0BD0);
static_assert(offsetof(ULuaMultiLineEditableTextBox, StdLibColor) == 0x0BE0);
static_assert(offsetof(ULuaMultiLineEditableTextBox, CustomTokensMapping) == 0x0BF8);
static_assert(offsetof(FLuaDelegateGroup, LuaDelegates) == 0x0000);
static_assert(offsetof(ULuaState, LuaCodeAsset) == 0x0028);
static_assert(offsetof(ULuaState, LuaFilename) == 0x0030);
static_assert(offsetof(ULuaState, Table) == 0x0040);
static_assert(offsetof(ULuaState, LuaBlueprintPackagesTable) == 0x0090);
static_assert(offsetof(ULuaState, RequireTable) == 0x00E0);
static_assert(offsetof(ULuaState, LuaLibsLoader) == 0x0131);
static_assert(offsetof(ULuaState, AppendProjectContentDirSubDir) == 0x0140);
static_assert(offsetof(ULuaState, OverridePackagePath) == 0x0150);
static_assert(offsetof(ULuaState, OverridePackageCPath) == 0x0160);
static_assert(offsetof(ULuaState, UserDataMetaTableFromCodeAsset) == 0x0170);
static_assert(offsetof(ULuaState, LuaBlueprintPackages) == 0x0180);
static_assert(offsetof(ULuaState, TrackedLuaUserDataObjects) == 0x01E0);
static_assert(offsetof(ULuaTableAsset, Table) == 0x0030);
static_assert(offsetof(ULuaUserDataObject, Table) == 0x0028);
static_assert(offsetof(ULuaUserDataObject, MetaTable) == 0x0078);
static_assert(offsetof(FLuaDebug, Source) == 0x0008);
static_assert(offsetof(FLuaDebug, Name) == 0x0018);
static_assert(offsetof(FLuaDebug, NameWhat) == 0x0028);
static_assert(offsetof(FLuaDebug, What) == 0x0038);
