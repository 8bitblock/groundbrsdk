
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/WebBrowserWidget.WebBrowser
/// Size: 0x0150 (336 bytes) (0x000108 - 0x000150) align 8 MaxSize: 0x0150
class UWebBrowser : public UWidget
{ 
public:
	SDK_UNDEFINED(16,540) /* FMulticastInlineDelegate */ __um(OnUrlChanged);                                       // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,541) /* FMulticastInlineDelegate */ __um(OnBeforePopup);                                      // 0x0118   (0x0010)  
	FString                                            InitialURL;                                                 // 0x0128   (0x0010)  
	bool                                               bSupportsTransparency;                                      // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0139   (0x0017)  MISSED


	/// Functions
	// Function /Script/WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
	// void OnUrlChanged__DelegateSignature(FText& Text);                                                                       // [0x235b330] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
	// void OnBeforePopup__DelegateSignature(FString URL, FString Frame);                                                       // [0x235b330] MulticastDelegate|Public|Delegate 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadURL
	// void LoadURL(FString NewURL);                                                                                            // [0x1b0b720] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.LoadString
	// void LoadString(FString Contents, FString DummyURL);                                                                     // [0x1b0b5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/WebBrowserWidget.WebBrowser.GetURL
	// FString GetURL();                                                                                                        // [0x1b0b500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.GetTitleText
	// FText GetTitleText();                                                                                                    // [0x1b0b460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WebBrowserWidget.WebBrowser.ExecuteJavascript
	// void ExecuteJavascript(FString ScriptText);                                                                              // [0x1b0b3c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/WebBrowserWidget.WebBrowserAssetManager
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UWebBrowserAssetManager : public UObject
{ 
public:
	TWeakObjectPtr<class UMaterial*>                   DefaultMaterial;                                            // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0030   (0x0048)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWebBrowser) == 0x0150); // 336 bytes (0x000108 - 0x000150)
static_assert(sizeof(UWebBrowserAssetManager) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(UWebBrowser, InitialURL) == 0x0128);
static_assert(offsetof(UWebBrowserAssetManager, DefaultMaterial) == 0x0028);
