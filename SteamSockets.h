
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/SteamSockets.SteamSocketsNetConnection
/// Size: 0x1BB8 (7096 bytes) (0x001BA8 - 0x001BB8) align 8 MaxSize: 0x1BB8
class USteamSocketsNetConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1BA8   (0x0010)  MISSED
};

/// Class /Script/SteamSockets.SteamSocketsNetDriver
/// Size: 0x0770 (1904 bytes) (0x000760 - 0x000770) align 8 MaxSize: 0x0770
class USteamSocketsNetDriver : public UNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0760   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USteamSocketsNetConnection) == 0x1BB8); // 7096 bytes (0x001BA8 - 0x001BB8)
static_assert(sizeof(USteamSocketsNetDriver) == 0x0770); // 1904 bytes (0x000760 - 0x000770)
