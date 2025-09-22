
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

#pragma pack(push, 0x1)

/// Struct /Script/WwiseObjectUtils.AkUInt32Wrapper
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAkUInt32Wrapper
{ 
	uint32_t                                           UInt32Value;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/WwiseObjectUtils.AkUniqueID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FAkUniqueID : FAkUInt32Wrapper
{ 
};

/// Struct /Script/WwiseObjectUtils.AkUInt64Wrapper
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FAkUInt64Wrapper
{ 
	uint64_t                                           UInt64Value;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/WwiseObjectUtils.AkOutputDeviceID
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FAkOutputDeviceID : FAkUInt64Wrapper
{ 
};

#pragma pack(pop)


static_assert(sizeof(FAkUInt32Wrapper) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAkUniqueID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FAkUInt64Wrapper) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkOutputDeviceID) == 0x0008); // 8 bytes (0x000008 - 0x000008)
