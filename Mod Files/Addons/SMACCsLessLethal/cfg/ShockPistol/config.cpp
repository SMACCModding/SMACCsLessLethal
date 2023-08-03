class CfgPatches {
    class SMACCsLessLethal_ShockPistol {
        units[]=
        {
            "SMACCs_ShockPistol_Battery"
        };
        weapons[]=
        {
			"SMACCs_ShockPistol_Yellow",
			"SMACCs_ShockPistol_Black"
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Data",
			"DZ_Pistols",
			"DZ_Weapons_Ammunition"
        };
		magazines[]=
		{
		    "SMACCs_Ammo_ShockDart",
		    "SMACCs_Mag_ShockCartridge"
		};
		ammo[]=
		{
		    "SMACCs_Bullet_ShockDart"
		};
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoPistol;
class cfgSlots {
	class Slot_SMACCs_ShockPistolBattery {
		name="SMACCs_ShockPistolBattery";
		displayName="X2 Battery";
		ghostIcon="set:dayz_inventory image:batteryd";
	};
};
class cfgVehicles {
    class Battery9V;
    class SMACCs_ShockPistol_Battery: Battery9V {
		displayName="X2 Taser Battery";
		descriptionShort="An Lightweight Taser battery. Used for powering the X2 Taser Pistol.";
		inventorySlot[]=
		{
			"SMACCs_ShockPistolBattery"
        };
		varQuantityInit=40;
		varQuantityMax=40;
//		class EnergyManager {
//			hasIcon=1;
//			switchOnAtSpawn=1;
//			isPassiveDevice=1;
//			energyStorageMax=40;
//			energyAtSpawn=40;
//			convertEnergyToQuantity=1;
//			reduceMaxEnergyByDamageCoef=1;
//			powerSocketsCount=1;
//			compatiblePlugTypes[]={1};
//		};
		quantityBar=0;
        model="\DZ\weapons\attachments\magazine\shockpistol_battery.p3d";
    };
};
class cfgWeapons {
    // Hide vanilla broken shit
    class Shockpistol_Base;
	class Shockpistol: Shockpistol_Base {
	    scope=0;
	};
	class Shockpistol_Black: Shockpistol {
	    scope=0;
	};

	class MKII;
	class SMACCs_ShockPistol_ColorBase: MKII {
		scope=0;
		displayName="X2 Taser";
		descriptionShort="A stiff plastic Taser intended to be a less lethal alternative to normal firearms. Requires a Battery and a Cartridge to function.";
		itemSize[]={3,2};
		model="\dz\weapons\nonlethal\shockpistol\shockpistol.p3d";
		attachments[]=
		{
			"SMACCs_ShockPistolBattery"
        };
		magazines[]=
		{
			"SMACCs_Mag_ShockCartridge"
		};
		chamberableFrom[]=
		{
			"SMACCs_Ammo_ShockDart"
		};
		hiddenSelections[]=
		{
			"camo"
		};
//		class EnergyManager {
//			hasIcon=1;
//			isPassiveDevice=1;
//			energyUsagePerSecond=10;
//			plugType=1;
//			attachmentAction=1;
//		};
		class SemiAuto: Mode_SemiAuto {
			soundSetShot[]=
			{
				"SMACCs_ShockPistol_Shot_SoundSet"
			};
			begin1[]=
			{
				"SMACCsLessLethal\ShockPistol\data\TaserSound",
				0.80000001,
				1,
				80
			};
			begin2[]=
			{
				"SMACCsLessLethal\ShockPistol\data\TaserSound",
				0.80000001,
				1,
				80
			};
			begin3[]=
			{
				"SMACCsLessLethal\ShockPistol\data\TaserSound",
				0.80000001,
				1,
				80
			};
			reloadTime=5;
		};
    };
	class SMACCs_ShockPistol_Yellow: SMACCs_ShockPistol_ColorBase {
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_yel_co.paa"
		};
	};
	class SMACCs_ShockPistol_Black: SMACCs_ShockPistol_ColorBase {
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_bk_co.paa"
		};
	};
};
class cfgMagazines {
    // Hide vanilla broken stuff
    class Magazine_Base;
	class Mag_ShockCartridge: Magazine_Base {
	    scope=0;
	};

    class Mag_MKII_10Rnd;
	class SMACCs_Mag_ShockCartridge: Mag_MKII_10Rnd {
		scope=2;
		displayName="X2 Taser Cartridge";
		descriptionShort="A Duel-Shot Cartridge to go into a X2 Taser, contains two small dart-like electrodes which once fired stick in the skin delivering temporarily incapacitating voltage to the target.";
		model="\DZ\weapons\attachments\magazine\shockpistol_cartridge.p3d";
		itemSize[]={1,1};
		count=2;
		ammo="SMACCs_Bullet_ShockDart";
		ammoItems[]=
		{
			"SMACCs_Ammo_ShockDart"
		};
	};

	class Ammo_22;
	class SMACCs_Ammo_ShockDart: Ammo_22 {
		scope=2;
		displayName="X2 Taser Dart";
		descriptionShort="A small dart-like electrodes which belongs inside of a Taser Cartridge. (Should probably leave on the floor to despawn).";
		count=1;
		ammo="SMACCs_Bullet_ShockDart";
	};
};
class cfgAmmo {
	class Bullet_22;
	class SMACCs_Bullet_ShockDart: Bullet_22 {
		spawnPileType="SMACCs_Ammo_ShockDart";
//		airFriction=-0.0024999999;
		airFriction=-0.01;
		class DamageApplied {
			class Health {
				damage=0;
			};
			class Blood {
				damage=0;
			};
			class Shock {
				damage=1000;
			};
		};
	};
};
class CfgSoundShaders {
    class base_Closure_SoundShader;
    class base_ProfessionalSilenced_closeShot_SoundShader;
    class base_ProfessionalSilenced_midShot_SoundShader;
    class base_ProfessionalSilenced_distShot_SoundShader;
	class SMACCs_ShockPistol_Closure_SoundShader: base_Closure_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.4125376;
	};
	class SMACCs_ShockPistol_closeShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.9952624;
	};
	class SMACCs_ShockPistol_midShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.5848932;
	};
	class SMACCs_ShockPistol_distShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1},
			{"SMACCsLessLethal\ShockPistol\data\TaserSound",1}
		};
		volume=1.5848932;
	};
};
class CfgSoundSets {
    class Pistol_silencerPro_Base_SoundSet;
	class SMACCs_ShockPistol_Shot_SoundSet: Pistol_silencerPro_Base_SoundSet {
		soundShaders[]=
		{
			"SMACCs_ShockPistol_closeShot_SoundShader",
			"SMACCs_ShockPistol_midShot_SoundShader",
			"SMACCs_ShockPistol_distShot_SoundShader",
			"SMACCs_ShockPistol_Closure_SoundShader"
		};
	};
};