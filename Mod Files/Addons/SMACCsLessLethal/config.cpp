class CfgPatches {
	class SMACCsLessLethal {
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods {
	class SMACCsLessLethal {
		name="SMACCsLessLethal";
		author="SMACC";
		credits="";
		version="0.1";
		type="mod";
		dependencies[]=
		{
			"World",
			"Mission"
		};
		class defs {
			class worldScriptModule {
				value="";
				files[]=
				{
				    "SMACCsLessLethal/scripts/4_world"
				};
			};
			class missionScriptModule {
				value="";
				files[]=
				{
                    "SMACCsLessLethal/scripts/common" //For the "Def"
				};
			};
		};
	};
};