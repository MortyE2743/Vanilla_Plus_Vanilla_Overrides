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
			"DZ_Weapons_Magazines"
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
};
	
	
	
	
	