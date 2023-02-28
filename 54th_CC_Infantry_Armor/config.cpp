class CfgPatches
{
	class 54th_Cygnus
	{
		units[]={};
		weapons[]={};
		author="Hawkeye";
		requiredAddons[]=
		{
			"SWLB_clones"
		};
	};
};
class CfgFactionClasses
{
	class EdCat_54th
	{
		displayName="54th Cygnus Company";
		side=1;
		priority=2;
	};
};
class CfgEditorSubcategories
{
	class EdSubcat_54th_Cygnus
	{
		displayName="54th Cygnus";
		priority=1;
	};
};
class CfgWeapons
{
	class SWLB_clone_P2_helmet;
	class SWLB_clone_uniform;
	class UniformItem;
	class ItemInfo;
	class CT_Helmet_CO: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CT_Helmet_CO.paa"
		};
	};
	class SCT_Helmet_CO: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Senior Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\SCT_Helmet_CO.paa"
		};
	};
	class VCT_Helmet_CO: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Veteran Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\VCT_Helmet_CO.paa"
		};
	};
	class LCP_Helmet_CO: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Lance Corporal Helmet";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\LCP_Helmet_CO.paa"
		};
	};
	class CP_Helmet_CO: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Corporal Helmet";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CP_Helmet_CO.paa"
		};
	};
	class CS_Helmet_CO: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Sergeant Helmet";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CS_Helmet_CO.paa"
		};
	};
	class 54th_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="54th_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 54th_Senior_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Senior Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="54th_Senior_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 54th_Veteran_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Veteran Clone Trooper Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="54th_Veteran_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 54th_Lance_Corporal_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Lance Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="54th_Lance_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 54th_Corporal_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Corporal Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="54th_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 54th_Sergeant_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[54th] Clone Sergeant Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="54th_Sergeant";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class 54th_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="54th Clone Trooper";
		uniformclass="54th_Trooper_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_54th";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CT_Upper Armor_CO.paa",
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CT_Lower Armor_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CT_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CT_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 54th_Senior_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="54th Senior Clone Trooper";
		uniformclass="54th_Senior_Trooper_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_54th";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\SCT_Upper Armor_CO.paa",
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\SCT_Lower Armor_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"SCT_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"SCT_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 54th_Veteran_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="54th Veteran Clone Trooper";
		uniformclass="54th_Veteran_Trooper_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_54th";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\VCT_Upper Armor_CO.paa",
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\VCT_Lower Armor_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"VCT_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"VCT_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 54th_Lance_Corporal: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="54th Lance_Corporal";
		uniformclass="54th_Lance_Corporal_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_54th";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\LCP_Upper Armor_CO.paa",
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\LCP_Lower Armor_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"LCP_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"LCP_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 54th_Corporal: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="54th Corporal";
		uniformclass="54th_Corporal_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_54th";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CP_Upper Armor_CO.paa",
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CP_Lower Armor_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CP_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CP_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 54th_Sergeant: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="54th Sergeant";
		uniformclass="54th_Sergeant_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_54th";
		hiddenSelectionsTextures[]=
		{
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CS_Upper Armor_CO.paa",
			"54thCygnusCompany\54th_CC_Infantry_Armor\data\CS_Lower Armor_CO.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CS_Helmet_CO",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"CS_Helmet_CO",
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
