class CfgPatches
{
	class 126th_Reek_Company
	{
		units[]=
		{
			"126th_Recruit",
			"126th_Cadet",
			"126th_Trooper",
			"126th_Senior_Trooper",
			"126th_Veteran_Trooper",
			"126th_Lance_Corporal",
			"126th_Specialist"
		};
		weapons[]=
		{
			"126th_Recruit_Helmet_P2",
			"126th_Cadet_Helmet_P2",
			"126th_Trooper_Helmet_P2",
			"126th_Senior_Trooper_Helmet_P2",
			"126th_Veteran_Trooper_Helmet_P2",
			"126th_Lance_Corporal_Helmet_P2",
			"126th_Specialist_Helmet_P2",
			"126th_Recruit_Uniform",
			"126th_Cadet_Uniform",
			"126th_Trooper_Uniform",
			"126th_Senior_Trooper_Uniform",
			"126th_Veteran_Trooper_Uniform",
			"126th_Lance_Corporal_Uniform",
			"126th_Specialist_Uniform"
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
	class 126th_Categ_Phase_2
	{
		displayName="126th Phase 2 Troopers";
		priority=2;
	};
};
class CfgWeapons
{
	class SWLB_clone_P2_helmet;
	class SWLB_clone_uniform;
	class UniformItem;
	class ItemInfo;
	class 126th_Recruit_Helmet_P2: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Recruit Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Recruit_Helmet_P2_CO.paa"
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
	class 126th_Cadet_Helmet_P2: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Cadet Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Cadet_Helmet_P2_CO.paa"
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
	class 126th_Trooper_Helmet_P2: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Trooper_Helmet_P2_CO.paa"
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
	class 126th_Senior_Trooper_Helmet_P2: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Senior Clone Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Senior_Trooper_Helmet_P2_CO.paa"
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
	class 126th_Veteran_Trooper_Helmet_P2: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Veteran Clone Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Veteran_Trooper_Helmet_P2_CO.paa"
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
	class 126th_Lance_Corporal_Helmet_P2: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Lance Corporal Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Lance_Corporal_Helmet_P2_CO.paa"
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
	class 126th_Specialist_Helmet_P2: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Specialist Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Specialist_Helmet_P2_CO.paa"
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
	class 126th_Recruit_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Recruit Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Recruit";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Cadet_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Cadet Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Cadet";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Senior_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Senior Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Senior_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Veteran_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Veteran Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Veteran_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Lance_Corporal_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Lance Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Lance_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Specialist_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Clone Specialist Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Specialist";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class 126th_Recruit: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Clone Recruit";
		uniformclass="126th_Recruit_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Recruit_Upper_CO.paa",
			"126thReekCompany\126th_RC_Infantry_Armor\data\Recruit_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Recruit_Helmet_P2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Recruit_Helmet_P2",
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
	class 126th_Cadet: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Clone Cadet";
		uniformclass="126th_Cadet_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Cadet_Upper_CO.paa",
			"126thReekCompany\126th_RC_Infantry_Armor\data\Cadet_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Cadet_Helmet_P2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Cadet_Helmet_P2",
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
	class 126th_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Clone Trooper";
		uniformclass="126th_Trooper_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Trooper_Upper_CO.paa",
			"126thReekCompany\126th_RC_Infantry_Armor\data\Trooper_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Trooper_Helmet_P2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Trooper_Helmet_P2",
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
	class 126th_Senior_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Senior Clone Trooper";
		uniformclass="126th_Senior_Trooper_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Senior_Trooper_Upper_CO.paa",
			"126thReekCompany\126th_RC_Infantry_Armor\data\Senior_Trooper_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Senior_Trooper_Helmet_P2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Senior_Trooper_Helmet_P2",
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
	class 126th_Veteran_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Veteran Clone Trooper";
		uniformclass="126th_Veteran_Trooper_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Veteran_Trooper_Upper_CO.paa",
			"126thReekCompany\126th_RC_Infantry_Armor\data\Veteran_Trooper_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Veteran_Trooper_Helmet_P2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Veteran_Trooper_Helmet_P2",
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
	class 126th_Lance_Corporal: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Lance_Corporal";
		uniformclass="126th_Lance_Corporal_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Lance_Corporal_Upper_CO.paa",
			"126thReekCompany\126th_RC_Infantry_Armor\data\Lance_Corporal_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Lance_Corporal_Helmet_P2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Lance_Corporal_Helmet_P2",
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
	class 126th_Specialist: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Specialist";
		uniformclass="126th_Specialist_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Phase_2";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Infantry_Armor\data\Specialist_Upper_CO.paa",
			"126thReekCompany\126th_RC_Infantry_Armor\data\Specialist_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Specialist_Helmet_P2",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"126th_Specialist_Helmet_P2",
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
