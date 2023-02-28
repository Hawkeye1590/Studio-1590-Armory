class CfgPatches
{
	class 15th_Airborne_Brigade
	{
		units[]={};
		weapons[]={};
		author="Hawkeye";
		requiredAddons[]=
		{
			"SDT_armor",
			"SWLB_clones"
		};
	};
};
class CfgFactionClasses
{
	class EdCat_15th
	{
		displayName="15th Airborne Brigade";
		side=1;
		priority=2;
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_15th_Airborne_Brigade
	{
		displayName="15th Airborne Brigade";
		priority=1;
	};
};
class CfgWeapons
{
	class SDT_Airborne_Helmet;
	class SWLB_clone_uniform;
	class UniformItem;
	class ItemInfo;
	class CT_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Trooper Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CT_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa",
			"\SDT_armor\data\Airborne\AB_Helmet_CO.paa"
		};
	};
	class SCT_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Senior Trooper Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\SCT_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa"
		};
	};
	class VCT_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Veteran Trooper Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\VCT_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa"
		};
	};
	class CSP_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Specialist Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CSP_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa"
		};
	};
	class LCP_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Lance Corporal Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\LCP_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa"
		};
	};
	class CP_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Corporal Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CP_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa"
		};
	};
	class SCP_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Senior Corporal Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\SCP_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa"
		};
	};
	class CS_AB_Helmet_CO: SDT_Airborne_Helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Sergeant Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CS_AB_Helmet_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\AB_Rebreather_CO.paa"
		};
	};
	class 15th_Airborne_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 15th_Airborne_Senior_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Senior Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Senior_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 15th_Airborne_Veteran_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Veteran Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Veteran_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 15th_Airborne_Specialist_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Specialist Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Specialist";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 15th_Airborne_Lance_Corporal_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Lance Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Lance_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 15th_Airborne_Corporal_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 15th_Airborne_Senior_Corporal_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Senior Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Senior_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 15th_Airborne_Sergeant_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[15th] Airborne Clone Sergeant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="15th_Airborne_Sergeant";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class 15th_Airborne_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Clone Trooper";
		uniformclass="15th_Airborne_Trooper_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CT_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CT_AB_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CT_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CT_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 15th_Airborne_Senior_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Senior Clone Trooper";
		uniformclass="15th_Airborne_Senior_Trooper_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\SCT_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\SCT_AB_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"SCT_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"SCT_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 15th_Airborne_Veteran_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Veteran Clone Trooper";
		uniformclass="15th_Airborne_Veteran_Trooper_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\VCT_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\VCT_AB_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"VCT_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"VCT_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 15th_Airborne_Specialist: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Specialist";
		uniformclass="15th_Airborne_Specialist_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CSP_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CSP_AB_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CSP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CSP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 15th_Airborne_Lance_Corporal: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Lance_Corporal";
		uniformclass="15th_Airborne_Lance_Corporal_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\LCP_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\LCP_AB_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"LCP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"LCP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 15th_Airborne_Corporal: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Corporal";
		uniformclass="15th_Airborne_Corporal_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CP_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CP_AB_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 15th_Airborne_Senior_Corporal: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Senior Corporal";
		uniformclass="15th_Airborne_Senior_Corporal_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\SCP_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\SCP_AB_Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"SCP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"SCP_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 15th_Airborne_Sergeant: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="15th Airborne Sergeant";
		uniformclass="15th_Airborne_Sergeant_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_15th";
		hiddenSelectionsTextures[]=
		{
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CS_AB_Upper_CO.paa",
			"15thAirborneBrigade\15th_AB_Airborne_Armor\data\CS_AB_Body Lower_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CS_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CS_AB_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
};
class cfgMods
{
	author="Hawkeye";
	timepacked="";
};
