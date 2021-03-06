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

// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStickyBomb_Base_Projectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.UserConstructionScript");

	AStickyBomb_Base_Projectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnStuck
// (Event, Public, BlueprintEvent)

void AStickyBomb_Base_Projectile_C::OnStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnStuck");

	AStickyBomb_Base_Projectile_C_OnStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnArmedUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsArmed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStickyBomb_Base_Projectile_C::OnArmedUpdated(bool* bIsArmed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnArmedUpdated");

	AStickyBomb_Base_Projectile_C_OnArmedUpdated_Params params;
	params.bIsArmed = bIsArmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnBeginArming
// (Event, Public, BlueprintEvent)

void AStickyBomb_Base_Projectile_C::OnBeginArming()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnBeginArming");

	AStickyBomb_Base_Projectile_C_OnBeginArming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnDetonate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bDestroy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStickyBomb_Base_Projectile_C::OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnDetonate");

	AStickyBomb_Base_Projectile_C_OnDetonate_Params params;
	params.Location = Location;
	params.Hit = Hit;
	params.bDestroy = bDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStickyBomb_Base_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.ReceiveBeginPlay");

	AStickyBomb_Base_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnTeamUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// unsigned char*                 NewTeamNum                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStickyBomb_Base_Projectile_C::OnTeamUpdated(unsigned char* NewTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.OnTeamUpdated");

	AStickyBomb_Base_Projectile_C_OnTeamUpdated_Params params;
	params.NewTeamNum = NewTeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.ExecuteUbergraph_StickyBomb_Base_Projectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStickyBomb_Base_Projectile_C::ExecuteUbergraph_StickyBomb_Base_Projectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StickyBomb_Base_Projectile.StickyBomb_Base_Projectile_C.ExecuteUbergraph_StickyBomb_Base_Projectile");

	AStickyBomb_Base_Projectile_C_ExecuteUbergraph_StickyBomb_Base_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
