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

// BlueprintGeneratedClass FiestaBoyz_Base_Projectile.FiestaBoyz_Base_Projectile_C
// 0x0000 (0x11A8 - 0x11A8)
class AFiestaBoyz_Base_Projectile_C : public ABase_AbilityProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FiestaBoyz_Base_Projectile.FiestaBoyz_Base_Projectile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
