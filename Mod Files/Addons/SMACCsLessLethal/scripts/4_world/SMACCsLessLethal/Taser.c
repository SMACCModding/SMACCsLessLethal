


class SMACCs_ShockPistol_ColorBase: MKII_Base
{

//	override float GetChanceToJam() { return 0; }
//	bool CanUnjam() { return false; }
//	bool CanEjectBullet() { return false; }
//
//	override void OnFire(int muzzle_index)
//    {
//        m_BurstCount++;
//        ItemBase m_ShockBattery = ItemBase.Cast(GetInventory().GetAttachmentFromIndex(0));
//        if (m_ShockBattery.GetDisplayName() != "X2 Taser Battery")
//            m_ShockBattery = ItemBase.Cast(GetInventory().GetAttachmentFromIndex(1));
//        m_ShockBattery.AddQuantity( -10 );
//    }
//
//    override bool CanReleaseAttachment(EntityAI attachment)
//    {
//        PlayerBase player = PlayerBase.Cast( GetHierarchyRootPlayer() );
//        if ( player )
//            if ( player.GetItemInHands() != this )
//                return false;
//        Magazine mag = Magazine.Cast(attachment);
//        if (mag != NULL)
//            if (mag.GetAmmoCount() == 2)
//                return true;
//            if (mag.GetAmmoCount() > 0 || !IsChamberEmpty(0))
//                return false;
//        return true;
//    }
};

class SMACCs_ShockPistol_Yellow: SMACCs_ShockPistol_ColorBase {};
class SMACCs_ShockPistol_Black: SMACCs_ShockPistol_ColorBase {};
class SMACCs_Ammo_ShockDart: Ammunition_Base {};
class SMACCs_Mag_ShockCartridge: Magazine_Base {};
class SMACCs_ShockPistol_Battery: Battery9V {};