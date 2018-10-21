#pragma once

// PWND (4.17.2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StunGun_Base_Projectile.StunGun_Base_Projectile_C
// 0x0008 (0x11B0 - 0x11A8)
class AStunGun_Base_Projectile_C : public ABase_AbilityProjectile_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StunGun_Base_Projectile.StunGun_Base_Projectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDetonate(struct FVector* Location, struct FHitResult* Hit, bool* bDestroy);
	void ExecuteUbergraph_StunGun_Base_Projectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
