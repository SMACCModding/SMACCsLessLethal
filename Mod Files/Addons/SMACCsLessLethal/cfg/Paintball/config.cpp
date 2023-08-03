class CfgPatches {
    class SMACCsLessLethal_ShockPistol {
        units[]={};
        weapons[]=
        {
            "SMACCs_PaintballGun_Black",
			"SMACCs_PaintballGun_Red",
			"SMACCs_PaintballGun_Blue",
			"SMACCs_PaintballGun_White"
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition"
        };
		magazines[]=
		{
		    "SMACCs_Ammo_Paintball",
		    "SMACCs_Mag_PaintballDrum"
		};
		ammo[]=
		{
		    "SMACCs_Bullet_Paintball"
		};
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class cfgWeapons {
    class Ruger1022;
    class SMACCs_PaintballGun_ColorBase: Ruger1022 {
        scope=0;
		weight=1500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		attachments[]=
		{
			"weaponOpticsHunting"
		};
		chamberableFrom[]=
		{
			"SMACCs_Ammo_Paintball"
		};
		magazines[]=
		{
			"SMACCs_Mag_PaintballDrum"
		};
		class SemiAuto: Mode_SemiAuto {
			soundSetShot[]=
			{
				"SMACCs_PaintballGun_Shot_SoundSet"
			};
			begin1[]=
			{
				"SMACCsLessLethal\Paintball\data\PaintballGunSound",
				0.80000001,
				1,
				80
			};
			begin2[]=
			{
				"SMACCsLessLethal\Paintball\data\PaintballGunSound",
				0.80000001,
				1,
				80
			};
			begin3[]=
			{
				"SMACCsLessLethal\Paintball\data\PaintballGunSound",
				0.80000001,
				1,
				80
			};
		};
		class NoiseShoot {
			strength=5;
			type="shot";
		};
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=5000;
                };
            };
        };
		hiddenSelections[]=
		{
			"camo"
		};
    };
    class SMACCs_PaintballGun_Black: SMACCs_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\Ruger1022\data\ruger1022_black_co.paa"
		};
    };
    class SMACCs_PaintballGun_Red: SMACCs_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"SMACCsLessLethal\Paintball\data\PaintballGun_Red_co.paa"
		};
    };
    class SMACCs_PaintballGun_Blue: SMACCs_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"SMACCsLessLethal\Paintball\data\PaintballGun_Blue_co.paa"
		};
    };
    class SMACCs_PaintballGun_White: SMACCs_PaintballGun_ColorBase {
        scope=2;
		hiddenSelectionsTextures[]=
		{
			"SMACCsLessLethal\Paintball\data\PaintballGun_White_co.paa"
		};
    };
};
class cfgMagazines {
    class Mag_AKM_Drum75Rnd;
	class SMACCs_Mag_PaintballDrum: Mag_AKM_Drum75Rnd {
		scope=2;
		displayName="Paintball Drum";
		descriptionShort="";
		weight=500;
		count=200;
		ammo="SMACCs_Bullet_Paintball";
		ammoItems[]=
		{
			"SMACCs_Ammo_Paintball"
		};
		tracersEvery=1;
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=5000;
                };
            };
        };
	};

	class Ammo_22;
	class SMACCs_Ammo_Paintball: Ammo_22 {
		scope=2;
		displayName="Paintball Round";
		descriptionShort="Something Something Something";
		count=200;
		ammo="SMACCs_Bullet_Paintball";
	};
};
class cfgAmmo {
	class Bullet_22;
	class SMACCs_Bullet_Paintball: Bullet_22 {
		spawnPileType="SMACCs_Ammo_Paintball";
		class DamageApplied {
			class Health {
				damage=0;
			};
			class Blood {
				damage=0;
			};
			class Shock {
				damage=20;
			};
		};
	};
};
class CfgSoundShaders {
    class base_Closure_SoundShader;
    class base_ProfessionalSilenced_closeShot_SoundShader;
    class base_ProfessionalSilenced_midShot_SoundShader;
    class base_ProfessionalSilenced_distShot_SoundShader;
	class SMACCs_PaintballGun_Closure_SoundShader: base_Closure_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.4125376;
	};
	class SMACCs_PaintballGun_closeShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.9952624;
	};
	class SMACCs_PaintballGun_midShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.5848932;
	};
	class SMACCs_PaintballGun_distShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader {
		samples[]=
		{
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1},
			{"SMACCsLessLethal\Paintball\data\PaintballGunSound",1}
		};
		volume=1.5848932;
	};
};
class CfgSoundSets {
    class Pistol_silencerPro_Base_SoundSet;
	class SMACCs_PaintballGun_Shot_SoundSet: Pistol_silencerPro_Base_SoundSet {
		soundShaders[]=
		{
			"SMACCs_PaintballGun_closeShot_SoundShader",
			"SMACCs_PaintballGun_midShot_SoundShader",
			"SMACCs_PaintballGun_distShot_SoundShader",
			"SMACCs_PaintballGun_Closure_SoundShader"
		};
	};
};