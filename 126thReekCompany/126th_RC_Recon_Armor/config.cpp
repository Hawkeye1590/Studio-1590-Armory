class CfgPatches
{
	class 126th_Reek_Company
	{
		units[]=
		{
			"126th_ARF_Trooper"
		};
		weapons[]=
		{
			"126th_ARF_Trooper_Helmet_Base",
			"126th_ARF_Trooper_Helmet_Des",
			"126th_ARF_Trooper_Helmet_Multi",
			"126th_ARF_Trooper_Helmet_Urb",
			"126th_ARF_Trooper_Helmet_Wood",
			"126th_ARF_Trooper_Helmet_Snow",
			"126th_ARF_Trooper_Uniform_Base",
			"126th_ARF_Trooper_Uniform_Des",
			"126th_ARF_Trooper_Uniform_Multi",
			"126th_ARF_Trooper_Uniform_Urb",
			"126th_ARF_Trooper_Uniform_Wood",
			"126th_ARF_Trooper_Uniform_Snow"
		};
		author="Hawkeye";
		requiredAddons[]=
		{
			"SWLB_clones"
		};
	};
};
class CfgFactionClasses
{
	class 126th_Reek_Company
	{
		displayName="126th Reek Company";
	};
};
class CfgEditorSubcategories
{
	class 126th_Categ_ARF
	{
		displayName="126th Recon Troopers";
		priority=3;
	};
};
class CfgWeapons
{
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class SWLB_clone_uniform;
	class UniformItem;
	class ItemInfo;
	class 126th_ARF_Trooper_Helmet_Base: SWLB_clone_ARF_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Helmet_Base.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=20;
				passThrough=0.5;
			};
			class Face
			{
				hitPointName="HitFace";
				armor=20;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Helmet_Des: SWLB_clone_ARF_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Helmet [Desert]";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Helmet_Des.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=20;
				passThrough=0.5;
			};
			class Face
			{
				hitPointName="HitFace";
				armor=20;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Helmet_Multi: SWLB_clone_ARF_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Helmet [Multicam]";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Helmet_Multi.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=20;
				passThrough=0.5;
			};
			class Face
			{
				hitPointName="HitFace";
				armor=20;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Helmet_Urb: SWLB_clone_ARF_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Helmet [Urban]";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Helmet_Urb.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=20;
				passThrough=0.5;
			};
			class Face
			{
				hitPointName="HitFace";
				armor=20;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Helmet_Wood: SWLB_clone_ARF_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Helmet [Woodland]";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Helmet_Wood.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=20;
				passThrough=0.5;
			};
			class Face
			{
				hitPointName="HitFace";
				armor=20;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Helmet_Snow: SWLB_clone_ARF_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Helmet [Snow]";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Helmet_Snow.paa"
		};
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.40000001;
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName="HitHead";
				armor=20;
				passThrough=0.5;
			};
			class Face
			{
				hitPointName="HitFace";
				armor=20;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Uniform_Base: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_ARF_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_ARF_Trooper_Uniform_Des: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Armor [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_ARF_Trooper_Des";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_ARF_Trooper_Uniform_Multi: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Armor [Multicam]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_ARF_Trooper_Multi";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_ARF_Trooper_Uniform_Urb: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Armor [Urban]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_ARF_Trooper_Urb";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_ARF_Trooper_Uniform_Wood: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Armor [Woodland]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_ARF_Trooper_Wood";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_ARF_Trooper_Uniform_Snow: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Recon Trooper Armor [Snow]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_ARF_Trooper_Snow";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class 126th_ARF_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Recon Trooper";
		uniformclass="126th_ARF_Trooper_Uniform_Base";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_ARF";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Upper_Base.paa",
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Lower_Base.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Base",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Base",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="SWLB_clone_backpack";
		armor=20;
		explosionShielding=5;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitPointName="HitChest";
				armor=80;
				PassThrough=0.30000001;
			};
			class Neck
			{
				hitPointName="HitNeck";
				armor=80;
				PassThrough=0.30000001;
			};
			class Body
			{
				hitPointName="HitBody";
				armor=80;
				PassThrough=0.30000001;
			};
			class Pelvis
			{
				hitPointName="HitPelvis";
				armor=80;
				PassThrough=0.30000001;
			};
			class Diaphragm
			{
				hitPointName="HitDiaphragm";
				armor=80;
				PassThrough=0.30000001;
			};
			class Legs
			{
				hitPointName="HitLegs";
				armor=45;
				passThrough=0.30000001;
			};
			class Arms
			{
				hitPointName="HitArms";
				armor=45;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Des: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Desert Recon Trooper";
		uniformclass="126th_ARF_Trooper_Uniform_Des";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_ARF";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Upper_Des.paa",
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Lower_Des.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Des",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Des",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="SWLB_clone_backpack";
		armor=20;
		explosionShielding=5;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitPointName="HitChest";
				armor=80;
				PassThrough=0.30000001;
			};
			class Neck
			{
				hitPointName="HitNeck";
				armor=80;
				PassThrough=0.30000001;
			};
			class Body
			{
				hitPointName="HitBody";
				armor=80;
				PassThrough=0.30000001;
			};
			class Pelvis
			{
				hitPointName="HitPelvis";
				armor=80;
				PassThrough=0.30000001;
			};
			class Diaphragm
			{
				hitPointName="HitDiaphragm";
				armor=80;
				PassThrough=0.30000001;
			};
			class Legs
			{
				hitPointName="HitLegs";
				armor=45;
				passThrough=0.30000001;
			};
			class Arms
			{
				hitPointName="HitArms";
				armor=45;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Multi: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Multicam Recon Trooper";
		uniformclass="126th_ARF_Trooper_Uniform_Multi";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_ARF";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Upper_Multi.paa",
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Lower_Multi.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Multi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Multi",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="SWLB_clone_backpack";
		armor=20;
		explosionShielding=5;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitPointName="HitChest";
				armor=80;
				PassThrough=0.30000001;
			};
			class Neck
			{
				hitPointName="HitNeck";
				armor=80;
				PassThrough=0.30000001;
			};
			class Body
			{
				hitPointName="HitBody";
				armor=80;
				PassThrough=0.30000001;
			};
			class Pelvis
			{
				hitPointName="HitPelvis";
				armor=80;
				PassThrough=0.30000001;
			};
			class Diaphragm
			{
				hitPointName="HitDiaphragm";
				armor=80;
				PassThrough=0.30000001;
			};
			class Legs
			{
				hitPointName="HitLegs";
				armor=45;
				passThrough=0.30000001;
			};
			class Arms
			{
				hitPointName="HitArms";
				armor=45;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Urb: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Urban Recon Trooper";
		uniformclass="126th_ARF_Trooper_Uniform_Urb";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_ARF";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Upper_Urb.paa",
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Lower_Urb.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Urb",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Urb",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="SWLB_clone_backpack";
		armor=20;
		explosionShielding=5;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitPointName="HitChest";
				armor=80;
				PassThrough=0.30000001;
			};
			class Neck
			{
				hitPointName="HitNeck";
				armor=80;
				PassThrough=0.30000001;
			};
			class Body
			{
				hitPointName="HitBody";
				armor=80;
				PassThrough=0.30000001;
			};
			class Pelvis
			{
				hitPointName="HitPelvis";
				armor=80;
				PassThrough=0.30000001;
			};
			class Diaphragm
			{
				hitPointName="HitDiaphragm";
				armor=80;
				PassThrough=0.30000001;
			};
			class Legs
			{
				hitPointName="HitLegs";
				armor=45;
				passThrough=0.30000001;
			};
			class Arms
			{
				hitPointName="HitArms";
				armor=45;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Wood: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Woodland Recon Trooper";
		uniformclass="126th_ARF_Trooper_Uniform_Wood";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_ARF";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Upper_Wood.paa",
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Lower_Wood.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Wood",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Wood",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="SWLB_clone_backpack";
		armor=20;
		explosionShielding=5;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitPointName="HitChest";
				armor=80;
				PassThrough=0.30000001;
			};
			class Neck
			{
				hitPointName="HitNeck";
				armor=80;
				PassThrough=0.30000001;
			};
			class Body
			{
				hitPointName="HitBody";
				armor=80;
				PassThrough=0.30000001;
			};
			class Pelvis
			{
				hitPointName="HitPelvis";
				armor=80;
				PassThrough=0.30000001;
			};
			class Diaphragm
			{
				hitPointName="HitDiaphragm";
				armor=80;
				PassThrough=0.30000001;
			};
			class Legs
			{
				hitPointName="HitLegs";
				armor=45;
				passThrough=0.30000001;
			};
			class Arms
			{
				hitPointName="HitArms";
				armor=45;
				passThrough=0.30000001;
			};
		};
	};
	class 126th_ARF_Trooper_Snow: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Snow Recon Trooper";
		uniformclass="126th_ARF_Trooper_Uniform_Snow";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_ARF";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Upper_Snow.paa",
			"126thReekCompany\126th_RC_Recon_Armor\data\ARF_Trooper_Lower_Snow.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Snow",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_ARF_Trooper_Helmet_Snow",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		weapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SWLW_DC15A",
			"Throw",
			"Put"
		};
		backpack="SWLB_clone_backpack";
		armor=20;
		explosionShielding=5;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitPointName="HitChest";
				armor=80;
				PassThrough=0.30000001;
			};
			class Neck
			{
				hitPointName="HitNeck";
				armor=80;
				PassThrough=0.30000001;
			};
			class Body
			{
				hitPointName="HitBody";
				armor=80;
				PassThrough=0.30000001;
			};
			class Pelvis
			{
				hitPointName="HitPelvis";
				armor=80;
				PassThrough=0.30000001;
			};
			class Diaphragm
			{
				hitPointName="HitDiaphragm";
				armor=80;
				PassThrough=0.30000001;
			};
			class Legs
			{
				hitPointName="HitLegs";
				armor=45;
				passThrough=0.30000001;
			};
			class Arms
			{
				hitPointName="HitArms";
				armor=45;
				passThrough=0.30000001;
			};
		};
	};
};
class cfgMods
{
	author="Hawkeye";
	timepacked="1673398200";
};
