#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.ScrollWidgetIntoView
struct UBP_Options_VideoOptions_C_ScrollWidgetIntoView_Params
{
	class UUI_MenuNavigable*                           WidgetInQuestion;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.CloseSetting
struct UBP_Options_VideoOptions_C_CloseSetting_Params
{
	int                                                widgetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.isSettingOpen
struct UBP_Options_VideoOptions_C_isSettingOpen_Params
{
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.GetFirstNonTitleOptionButton
struct UBP_Options_VideoOptions_C_GetFirstNonTitleOptionButton_Params
{
	class UWidget*                                     outputWidget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.GetPreviousNonTitleOptionButton
struct UBP_Options_VideoOptions_C_GetPreviousNonTitleOptionButton_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     outputWidget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.Populate
struct UBP_Options_VideoOptions_C_Populate_Params
{
	class UBP_OptionsScreen_C*                         Options_Screen;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.Change Value
struct UBP_Options_VideoOptions_C_Change_Value_Params
{
	int                                                Option_button_index;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.SetAttentionOnTopElementOfPage
struct UBP_Options_VideoOptions_C_SetAttentionOnTopElementOfPage_Params
{
};

// Function BP_Options_VideoOptions.BP_Options_VideoOptions_C.ExecuteUbergraph_BP_Options_VideoOptions
struct UBP_Options_VideoOptions_C_ExecuteUbergraph_BP_Options_VideoOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
