
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

/// Enum /Script/HardwareMonAndCompare.EHardwareInfo
/// Size: 0x01 (1 bytes)
enum class EHardwareInfo : uint8_t
{
	EHardwareInfo__E_CPUName                                                         = 0,
	EHardwareInfo__E_CPUChipset                                                      = 1,
	EHardwareInfo__E_CPUInfo                                                         = 2,
	EHardwareInfo__E_CPUVendor                                                       = 3,
	EHardwareInfo__E_CPUCores                                                        = 4,
	EHardwareInfo__E_CPUThreads                                                      = 5,
	EHardwareInfo__E_GPUName                                                         = 6,
	EHardwareInfo__E_GPUDescription                                                  = 7,
	EHardwareInfo__E_GPUProvider                                                     = 8,
	EHardwareInfo__E_GPUDriverI                                                      = 9,
	EHardwareInfo__E_GPUDriverU                                                      = 10,
	EHardwareInfo__E_GPUDriverDate                                                   = 11,
	EHardwareInfo__E_GPURHIName                                                      = 12,
	EHardwareInfo__E_OS                                                              = 13,
	EHardwareInfo__E_ComputerName                                                    = 14,
	EHardwareInfo__E_UserName                                                        = 15,
	EHardwareInfo__E_DeviceID                                                        = 16,
	EHardwareInfo__E_DeviceModel                                                     = 17,
	EHardwareInfo__E_DeviceOrientation                                               = 18,
	EHardwareInfo__E_DeviceTemperature                                               = 19,
	EHardwareInfo__E_DeviceVolume                                                    = 20,
	EHardwareInfo__E_Brightness                                                      = 21,
	EHardwareInfo__E_BatteryLevel                                                    = 22
};

/// Enum /Script/HardwareMonAndCompare.EHardwareMonAndCompareProcessDirectoryType
/// Size: 0x01 (1 bytes)
enum class EHardwareMonAndCompareProcessDirectoryType : uint8_t
{
	EHardwareMonAndCompareProcessDirectoryType__E_asitis                             = 0,
	EHardwareMonAndCompareProcessDirectoryType__E_gd                                 = 1,
	EHardwareMonAndCompareProcessDirectoryType__E_ad                                 = 2
};

/// Enum /Script/HardwareMonAndCompare.EHardwareMonAndCompareFilaDialogInitDirType
/// Size: 0x01 (1 bytes)
enum class EHardwareMonAndCompareFilaDialogInitDirType : uint8_t
{
	EHardwareMonAndCompareFilaDialogInitDirType__E_drive_letter                      = 0,
	EHardwareMonAndCompareFilaDialogInitDirType__E_folder_name                       = 1
};

/// Enum /Script/HardwareMonAndCompare.EHardwareMonAndCompareFilaDialogType
/// Size: 0x01 (1 bytes)
enum class EHardwareMonAndCompareFilaDialogType : uint8_t
{
	EHardwareMonAndCompareFilaDialogType__E_file                                     = 0,
	EHardwareMonAndCompareFilaDialogType__E_folder                                   = 1
};

/// Enum /Script/HardwareMonAndCompare.EFileFunctionsHardwareMonAndCompareEncodingOptions
/// Size: 0x01 (1 bytes)
enum class EFileFunctionsHardwareMonAndCompareEncodingOptions : uint8_t
{
	EFileFunctionsHardwareMonAndCompareEncodingOptions__E_AutoDetect                 = 0,
	EFileFunctionsHardwareMonAndCompareEncodingOptions__E_ForceAnsi                  = 1,
	EFileFunctionsHardwareMonAndCompareEncodingOptions__E_ForceUnicode               = 2,
	EFileFunctionsHardwareMonAndCompareEncodingOptions__E_ForceUTF8                  = 3,
	EFileFunctionsHardwareMonAndCompareEncodingOptions__E_ForceUTF8WithoutBOM        = 4
};

/// Enum /Script/HardwareMonAndCompare.EFileFunctionsHardwareMonAndCompareDirectoryType
/// Size: 0x01 (1 bytes)
enum class EFileFunctionsHardwareMonAndCompareDirectoryType : uint8_t
{
	EFileFunctionsHardwareMonAndCompareDirectoryType__E_gd                           = 0,
	EFileFunctionsHardwareMonAndCompareDirectoryType__E_ad                           = 1
};

/// Enum /Script/HardwareMonAndCompare.EHardwareInfoByTime
/// Size: 0x01 (1 bytes)
enum class EHardwareInfoByTime : uint8_t
{
	EHardwareInfoByTime__E_FPSFrameTime                                              = 0,
	EHardwareInfoByTime__E_FPS                                                       = 1,
	EHardwareInfoByTime__E_Frametime                                                 = 2,
	EHardwareInfoByTime__E_CPUUsage                                                  = 3,
	EHardwareInfoByTime__E_GPUUsage                                                  = 4
};

/// Enum /Script/HardwareMonAndCompare.EHardwareInfoSort
/// Size: 0x01 (1 bytes)
enum class EHardwareInfoSort : uint8_t
{
	EHardwareInfoSort__E_AS                                                          = 0,
	EHardwareInfoSort__E_DS                                                          = 1
};

/// Class /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFileFunctionsHardwareMonAndCompare : public UObject
{ 
public:


	/// Functions
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.writeStringToFile
	// void writeStringToFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString Data, FString FilePath, EFileFunctionsHardwareMonAndCompareEncodingOptions fileEncoding, bool& success); // [0xed2530] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.writeBytesToFile
	// void writeBytesToFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, TArray<char> Bytes, bool& success); // [0xed2340] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.stringToBase64String
	// void stringToBase64String(FString String, FString& base64String);                                                        // [0xed2070] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.setTimeStamp
	// void setTimeStamp(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, FDateTime DateTime); // [0xed1d70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.setReadOnly
	// bool setReadOnly(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, bool bNewReadOnlyValue); // [0xed1c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.readStringFromFile
	// void readStringFromFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, bool& success, FString& Data); // [0xed1a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.readBytesFromFile
	// TArray<char> readBytesFromFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, bool& success); // [0xed18c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.moveFile
	// bool moveFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryTypeTo, FString filePathTo, EFileFunctionsHardwareMonAndCompareDirectoryType directoryTypeFrom, FString filePathFrom); // [0xed1120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.isReadOnly
	// bool isReadOnly(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);                       // [0xed0d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.int64ToString
	// FString int64ToString(int64_t Num);                                                                                      // [0xed0c90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.getTimeStamp
	// FDateTime getTimeStamp(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);                // [0xed09b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.getMD5FromFileAbsolutePath
	// void getMD5FromFileAbsolutePath(FString FilePath, bool& success, FString& MD5);                                          // [0xed0670] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.getMD5FromFile
	// void getMD5FromFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, bool& success, FString& MD5); // [0xed04b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.getFilenameOnDisk
	// FString getFilenameOnDisk(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);             // [0xecfc80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.getFileFunctionsHardwareMonAndCompareTarget
	// class UFileFunctionsHardwareMonAndCompare* getFileFunctionsHardwareMonAndCompareTarget();                                // [0xecfc50] Final|Native|Static|Public 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.getAllFilesFromDirectory
	// void getAllFilesFromDirectory(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, int32_t& Count, TArray<FString>& files, TArray<FString>& filePaths, FString FileType); // [0xecf120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.getAccessTimeStamp
	// FDateTime getAccessTimeStamp(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);          // [0xeceff0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.fileToBase64String
	// void fileToBase64String(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, bool& success, FString& base64String, FString& Filename); // [0xecedc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.fileSizeAbsolutePath
	// int64_t fileSizeAbsolutePath(FString FilePath);                                                                          // [0xececd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.fileSize
	// int64_t fileSize(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);                      // [0xeceba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.fileExistsAbsolutePath
	// bool fileExistsAbsolutePath(FString FilePath);                                                                           // [0xeceab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.fileExists
	// bool fileExists(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);                       // [0xece980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.encryptMessageWithAES
	// FString encryptMessageWithAES(FString Message, FString keyIn256Bit);                                                     // [0xece7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.directoryExists
	// bool directoryExists(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString Path);                      // [0xece6c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.deleteFileAbsolutePath
	// bool deleteFileAbsolutePath(FString FilePath);                                                                           // [0xece5d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.deleteFile
	// bool deleteFile(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);                       // [0xece4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.deleteDirectory
	// bool deleteDirectory(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath);                  // [0xece370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.decryptMessageWithAES
	// FString decryptMessageWithAES(FString encryptedBase64Message, FString keyIn256Bit);                                      // [0xece1e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.createDirectory
	// bool createDirectory(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString Path);                      // [0xece0b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.bytesToBase64String
	// void bytesToBase64String(TArray<char> Bytes, FString& base64String);                                                     // [0xecdf70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.base64StringToString
	// void base64StringToString(FString& String, FString base64String);                                                        // [0xecd570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.base64StringToBytes
	// TArray<char> base64StringToBytes(FString base64String, bool& success);                                                   // [0xecd410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.FileFunctionsHardwareMonAndCompare.addBytesToFileAndCloseIt
	// void addBytesToFileAndCloseIt(EFileFunctionsHardwareMonAndCompareDirectoryType directoryType, FString FilePath, TArray<char> Bytes, bool& success); // [0xecd220] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/HardwareMonAndCompare.HardwareMonAndCompareActor
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class AHardwareMonAndCompareActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0220   (0x0008)  MISSED
};

/// Class /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary
/// Size: 0x0248 (584 bytes) (0x000028 - 0x000248) align 8 MaxSize: 0x0248
class UHardwareMonAndCompareBPLibrary : public UBlueprintFunctionLibrary
{ 
public:
	SDK_UNDEFINED(16,495) /* FMulticastInlineDelegate */ __um(ontickEventDelegate);                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,496) /* FMulticastInlineDelegate */ __um(onstartCPU_GPUUsageReaderEventDelegate);             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,497) /* FMulticastInlineDelegate */ __um(onfileDialogEventDelegate);                          // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1F0];                                     // 0x0058   (0x01F0)  MISSED


	/// Functions
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.tickEventDelegate__DelegateSignature
	// void tickEventDelegate__DelegateSignature(float FrameTime);                                                              // [0x235b330] MulticastDelegate|Public|Delegate 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.tickEventDelegate
	// void tickEventDelegate(float FrameTime);                                                                                 // [0xed21c0] Final|Native|Public  
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.stopProcess
	// void stopProcess(bool& success, FString internalProcessID);                                                              // [0xed1f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.stopCPU_GPUUsageReader
	// void stopCPU_GPUUsageReader();                                                                                           // [0xed1f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.stopAllProcesses
	// void stopAllProcesses();                                                                                                 // [0xed1f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.startCPU_GPUUsageReaderEventDelegate__DelegateSignature
	// void startCPU_GPUUsageReaderEventDelegate__DelegateSignature();                                                          // [0x235b330] MulticastDelegate|Public|Delegate 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.startCPU_GPUUsageReaderEventDelegate
	// void startCPU_GPUUsageReaderEventDelegate();                                                                             // [0xb00010] Final|Native|Public  
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.startCPU_GPUUsageReader
	// class UHardwareMonAndCompareBPLibrary* startCPU_GPUUsageReader();                                                        // [0xed1ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.powershellProcessEventGPUThread
	// void powershellProcessEventGPUThread(FString Data);                                                                      // [0xed16e0] Final|Native|Private 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.powershellProcessEventFileDialogThread
	// void powershellProcessEventFileDialogThread(FString Data);                                                               // [0xed15f0] Final|Native|Private 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.powershellProcessEventCPUThread
	// void powershellProcessEventCPUThread(FString Data);                                                                      // [0xed1500] Final|Native|Private 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.openFileDialog
	// class UHardwareMonAndCompareBPLibrary* openFileDialog(EHardwareMonAndCompareFilaDialogType Type, EHardwareMonAndCompareFilaDialogInitDirType initialDirectoryType, FString initialDirectory, FString Filter); // [0xed1310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.launchProcess
	// class UHardwareMonAndCompareProcessObject* launchProcess(bool& success, FString& internalProcessID, FString executableFile, EHardwareMonAndCompareProcessDirectoryType directoryType, FString Parameters, bool inHidden); // [0xed0e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramUsedMegabyte
	// int32_t getVramUsedMegabyte();                                                                                           // [0xed0c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramUsedGigabyte
	// int32_t getVramUsedGigabyte();                                                                                           // [0xed0c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramUsedByte
	// int64_t getVramUsedByte();                                                                                               // [0xed0c00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramTotalMegabyte
	// int32_t getVramTotalMegabyte();                                                                                          // [0xed0bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramTotalGigabyte
	// int32_t getVramTotalGigabyte();                                                                                          // [0xed0ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramTotalByte
	// int64_t getVramTotalByte();                                                                                              // [0xed0b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramFreeMegabyte
	// int32_t getVramFreeMegabyte();                                                                                           // [0xed0b40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramFreeGigabyte
	// int32_t getVramFreeGigabyte();                                                                                           // [0xed0b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getVramFreeByte
	// int64_t getVramFreeByte();                                                                                               // [0xed0ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamUsedMegabyte
	// int32_t getRamUsedMegabyte();                                                                                            // [0xed0980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamUsedGigabyte
	// int32_t getRamUsedGigabyte();                                                                                            // [0xed0950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamUsedByte
	// int64_t getRamUsedByte();                                                                                                // [0xed0920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamTotalMegabyte
	// int32_t getRamTotalMegabyte();                                                                                           // [0xed08f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamTotalGigabyte
	// int32_t getRamTotalGigabyte();                                                                                           // [0xed08c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamTotalByte
	// int64_t getRamTotalByte();                                                                                               // [0xed0890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamFreeMegabyte
	// int32_t getRamFreeMegabyte();                                                                                            // [0xed0860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamFreeGigabyte
	// int32_t getRamFreeGigabyte();                                                                                            // [0xed0830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getRamFreeByte
	// int64_t getRamFreeByte();                                                                                                // [0xed0800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getHardwareMonAndCompareLib
	// class UHardwareMonAndCompareBPLibrary* getHardwareMonAndCompareLib();                                                    // [0xed0480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getHardwareInfoPure
	// FString getHardwareInfoPure(EHardwareInfo part);                                                                         // [0xed03e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getHardwareInfo
	// FString getHardwareInfo(EHardwareInfo part);                                                                             // [0xed0340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getGPUUsage
	// int32_t getGPUUsage();                                                                                                   // [0xed0310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getGPUListPure
	// TArray<FGPUListStruct> getGPUListPure();                                                                                 // [0xed0280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getGPUList
	// TArray<FGPUListStruct> getGPUList();                                                                                     // [0xed0280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getGPUInfoFromListPure
	// void getGPUInfoFromListPure(FString gpuName, bool& found, FString& Name, float& score);                                  // [0xed00a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getGPUInfoFromList
	// void getGPUInfoFromList(FString gpuName, bool& found, FString& Name, float& score);                                      // [0xecfec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getFullHardwareInfo
	// TMap<FString, FString> getFullHardwareInfo();                                                                            // [0xecfdd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getDriveInfoPure
	// void getDriveInfoPure(TArray<FSDriveInfo>& driveInfo);                                                                   // [0xecfb90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getDriveInfo
	// void getDriveInfo(TArray<FSDriveInfo>& driveInfo);                                                                       // [0xecfad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getCPUUsage
	// TMap<int32_t, int32_t> getCPUUsage();                                                                                    // [0xecfa00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getCPUListPure
	// TArray<FCPUListStruct> getCPUListPure();                                                                                 // [0xecf960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getCPUList
	// TArray<FCPUListStruct> getCPUList();                                                                                     // [0xecf960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getCPUInfoFromListPure
	// void getCPUInfoFromListPure(FString cpuName, bool& found, FString& Name, float& score, FString& defaultClock, int32_t& cores); // [0xecf6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.getCPUInfoFromList
	// void getCPUInfoFromList(FString cpuName, bool& found, FString& Name, float& score, FString& defaultClock, int32_t& cores); // [0xecf440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.fileDialogEventDelegate__DelegateSignature
	// void fileDialogEventDelegate__DelegateSignature(FString absoluteDir);                                                    // [0x235b330] MulticastDelegate|Public|Delegate 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.fileDialogEventDelegate
	// void fileDialogEventDelegate(FString absoluteDir);                                                                       // [0xe61730] Final|Native|Public  
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.breakGPUStruct
	// void breakGPUStruct(FGPUListStruct gpuStruct, FString& Name, FString& score);                                            // [0xecdd70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.breakDriveInfo
	// void breakDriveInfo(FSDriveInfo driveInfo, FString& Name, int64_t& totalBytes, int64_t& freeBytes, int32_t& totalMegabyte, int32_t& freeMegabyte, int32_t& totalGigabyte, int32_t& freeGigabyte); // [0xecda20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareBPLibrary.breakCPUStruct
	// void breakCPUStruct(FCPUListStruct cpuStruct, FString& Name, FString& score, FString& clock, FString& cores);            // [0xecd6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/HardwareMonAndCompare.HardwareMonAndCompareGraphWidget
/// Size: 0x01E8 (488 bytes) (0x000108 - 0x0001E8) align 8 MaxSize: 0x01E8
class UHardwareMonAndCompareGraphWidget : public UWidget
{ 
public:
	EHardwareInfoByTime                                Type;                                                       // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	int32_t                                            MinValue;                                                   // 0x010C   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x0110   (0x0004)  
	int32_t                                            valueSteps;                                                 // 0x0114   (0x0004)  
	int32_t                                            desiredSteps;                                               // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FSlateFontInfo                                     BaseFont;                                                   // 0x0120   (0x0058)  
	FLinearColor                                       fontColor;                                                  // 0x0178   (0x0010)  
	float                                              backgroundLineThickness;                                    // 0x0188   (0x0004)  
	float                                              LineThickness;                                              // 0x018C   (0x0004)  
	float                                              Speed;                                                      // 0x0190   (0x0004)  
	int32_t                                            maxLinesOnScreen;                                           // 0x0194   (0x0004)  
	FLinearColor                                       backgroundLineColor;                                        // 0x0198   (0x0010)  
	FLinearColor                                       LineColor;                                                  // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x01B8   (0x0030)  MISSED


	/// Functions
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareGraphWidget.tickEventDelegate
	// void tickEventDelegate(float FrameTime);                                                                                 // [0xed2240] Final|Native|Public  
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareGraphWidget.RefreshGraph
	// void RefreshGraph();                                                                                                     // [0xecd200] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HardwareMonAndCompare.HardwareMonAndCompareProcessObject
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UHardwareMonAndCompareProcessObject : public UObject
{ 
public:
	FString                                            InaccessibleUProperty;                                      // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,498) /* FMulticastInlineDelegate */ __um(onHardwareMonitorProcessEvent);                      // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareProcessObject.processOutput
	// void processOutput(FString Data);                                                                                        // [0xed17d0] Final|Native|Public  
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareProcessObject.HardwareMonitorProcessEvent__DelegateSignature
	// void HardwareMonitorProcessEvent__DelegateSignature(FString internalProcessID, FString Output);                          // [0x235b330] MulticastDelegate|Public|Delegate 
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareProcessObject.HardwareMonitorProcessEvent
	// void HardwareMonitorProcessEvent(FString internalProcessID, FString Output);                                             // [0xecd080] Final|Native|Public  
};

/// Class /Script/HardwareMonAndCompare.HardwareMonAndCompareWidget
/// Size: 0x01E0 (480 bytes) (0x000108 - 0x0001E0) align 8 MaxSize: 0x01E0
class UHardwareMonAndCompareWidget : public UWidget
{ 
public:
	FText                                              Text;                                                       // 0x0108   (0x0018)  
	FSlateFontInfo                                     BaseFont;                                                   // 0x0120   (0x0058)  
	EHardwareInfoByTime                                Type;                                                       // 0x0178   (0x0001)  
	EHardwareInfoSort                                  colorSort;                                                  // 0x0179   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x017A   (0x0002)  MISSED
	FLinearColor                                       FontColorA;                                                 // 0x017C   (0x0010)  
	int32_t                                            FontColorA_MinValue;                                        // 0x018C   (0x0004)  
	FLinearColor                                       FontColorB;                                                 // 0x0190   (0x0010)  
	int32_t                                            FontColorB_MinValue;                                        // 0x01A0   (0x0004)  
	FLinearColor                                       FontColorC;                                                 // 0x01A4   (0x0010)  
	int32_t                                            FontColorC_MinValue;                                        // 0x01B4   (0x0004)  
	int32_t                                            CPUCore;                                                    // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x24];                                      // 0x01BC   (0x0024)  MISSED


	/// Functions
	// Function /Script/HardwareMonAndCompare.HardwareMonAndCompareWidget.tickEventDelegate
	// void tickEventDelegate(float FrameTime);                                                                                 // [0xed22c0] Final|Native|Public  
};

/// Struct /Script/HardwareMonAndCompare.CPUListStruct
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FCPUListStruct
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/HardwareMonAndCompare.SDriveInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSDriveInfo
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/HardwareMonAndCompare.GPUListStruct
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGPUListStruct
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/HardwareMonAndCompare.SSystemUsage
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FSSystemUsage
{ 
	unsigned char                                      UnknownData00_2[0xB8];                                      // 0x0000   (0x00B8)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFileFunctionsHardwareMonAndCompare) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AHardwareMonAndCompareActor) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UHardwareMonAndCompareBPLibrary) == 0x0248); // 584 bytes (0x000028 - 0x000248)
static_assert(sizeof(UHardwareMonAndCompareGraphWidget) == 0x01E8); // 488 bytes (0x000108 - 0x0001E8)
static_assert(sizeof(UHardwareMonAndCompareProcessObject) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UHardwareMonAndCompareWidget) == 0x01E0); // 480 bytes (0x000108 - 0x0001E0)
static_assert(sizeof(FCPUListStruct) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSDriveInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGPUListStruct) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSSystemUsage) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, Type) == 0x0108);
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, BaseFont) == 0x0120);
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, fontColor) == 0x0178);
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, backgroundLineColor) == 0x0198);
static_assert(offsetof(UHardwareMonAndCompareGraphWidget, LineColor) == 0x01A8);
static_assert(offsetof(UHardwareMonAndCompareProcessObject, InaccessibleUProperty) == 0x0028);
static_assert(offsetof(UHardwareMonAndCompareWidget, Text) == 0x0108);
static_assert(offsetof(UHardwareMonAndCompareWidget, BaseFont) == 0x0120);
static_assert(offsetof(UHardwareMonAndCompareWidget, Type) == 0x0178);
static_assert(offsetof(UHardwareMonAndCompareWidget, colorSort) == 0x0179);
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorA) == 0x017C);
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorB) == 0x0190);
static_assert(offsetof(UHardwareMonAndCompareWidget, FontColorC) == 0x01A4);
