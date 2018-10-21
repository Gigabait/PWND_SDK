// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Law_ReEntry_FX.Law_ReEntry_FX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALaw_ReEntry_FX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_ReEntry_FX.Law_ReEntry_FX_C.UserConstructionScript");

	ALaw_ReEntry_FX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_ReEntry_FX.Law_ReEntry_FX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALaw_ReEntry_FX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_ReEntry_FX.Law_ReEntry_FX_C.ReceiveBeginPlay");

	ALaw_ReEntry_FX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Law_ReEntry_FX.Law_ReEntry_FX_C.ExecuteUbergraph_Law_ReEntry_FX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALaw_ReEntry_FX_C::ExecuteUbergraph_Law_ReEntry_FX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Law_ReEntry_FX.Law_ReEntry_FX_C.ExecuteUbergraph_Law_ReEntry_FX");

	ALaw_ReEntry_FX_C_ExecuteUbergraph_Law_ReEntry_FX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
