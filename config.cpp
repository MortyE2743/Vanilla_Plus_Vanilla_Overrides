class CfgPatches
{
	class TTC_Vanilla_Overrides
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms_AK101",
			"DZ_Weapons_Firearms_aug",
			"DZ_Weapons_Firearms_Famas",
			"DZ_Weapons_Firearms_M4",
			"DZ_Weapons_Firearms_M16A2",
			"DZ_Weapons_Firearms_Scout",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms_AK74",
			"DZ_Weapons_Firearms_SSG82",
			"DZ_Weapons_Firearms_AKM",
			"DZ_Weapons_Firearms_CZ527",
			"DZ_Weapons_Firearms_IZH18",
			"DZ_Weapons_Firearms_SKS",
			"DZ_Weapons_Firearms_MosinNagant",
			"DZ_Weapons_Firearms_SVD",
			"DZ_Weapons_Firearms_VSS"
		};
	};
};
class CfgMods
{
	class TTC_Vanilla_Overrides
	{
		dir="Vanilla_Plus_Vanilla_Overrides";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="TTC_Vanilla_Overrides";
		credits="Morty";
		author="Morty";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
	};
};

//!Firearms
class CfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class Rifle_Base;
	class AK101_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Aug_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Famas_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class M4A1_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"TTC_VP_AR15_Mag_30Rnd",
			"TTC_VP_AR15_Mag_Tan_30Rnd",
			"TTC_VP_AR15_Mag_30Rnd_Coupled",
			"TTC_VP_AR15_Mag_Tan_30Rnd_Coupled"
		};
	};
	class M16A2_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_STANAG_60Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
			"TTC_VP_AR15_Mag_30Rnd",
			"TTC_VP_AR15_Mag_Tan_30Rnd",
			"TTC_VP_AR15_Mag_30Rnd_Coupled",
			"TTC_VP_AR15_Mag_Tan_30Rnd_Coupled"
		};
	};
	class Scout_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class AK74_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer",
			"TTC_VP_Ammo_545x39_7N40"
		};
	};
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer",
			"TTC_VP_Ammo_545x39_7N40"
		};
	};
	class AKM_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class Izh18_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class SKS_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Mag_CLIP762x39_10Rnd",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class Mosin9130_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer",
			"Mag_CLIP762x54_5Rnd",
			"TTC_VP_Ammo_762x54_RBT"
		};
	};
	class SVD_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer",
			"TTC_VP_Ammo_762x54_RBT"
		};
	};
	class VSS_Base: Rifle_Base
	{
		chamberableFrom[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP",
			"TTC_VP_Ammo_9x39_PAB"
		};
	};
};
//!Magazines
class CfgMagazines
{
	class Magazine_Base;
	class Mag_FAMAS_25Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_STANAG_60Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_Aug_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_Scout_5Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"TTC_VP_Ammo_556x45_M855",
			"TTC_VP_Ammo_556x45_M855A1",
			"TTC_VP_Ammo_556x45_SSAAP"
		};
	};
	class Mag_AK74_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer",
			"TTC_VP_Ammo_545x39_7N40"
		};
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer",
			"TTC_VP_Ammo_545x39_7N40"
		};
	};
	class Mag_SSG82_5rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer",
			"TTC_VP_Ammo_545x39_7N40"
		};
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class Mag_AKM_Palm30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class Mag_CZ527_5rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"TTC_VP_Ammo_762x39_7N27"
		};
	};
	class Mag_SVD_10Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer",
			"TTC_VP_Ammo_762x54_RBT"
		};
	};
	class Mag_VSS_10Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP",
			"TTC_VP_Ammo_9x39_PAB"
		};
	};
	class Mag_VAL_20Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP",
			"TTC_VP_Ammo_9x39_PAB"
		};
	};
	class Mag_Vikhr_30Rnd: Magazine_Base
	{
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP",
			"TTC_VP_Ammo_9x39_PAB"
		};
	};
};
	
	
	
	
	