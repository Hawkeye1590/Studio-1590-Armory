class CfgPatches
{
	class 159th_Clone_Battalion
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
class CfgWeapons
{
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P2_helmet;
	class SWLB_clone_P1_2_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_uniform;
	class UniformItem;
	class ItemInfo;
	class 159th_Phase_2_Trooper_Helmet: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Trooper P2 Helmet (159thCB)";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Phase_2_Trooper_Helmet.paa"
		};
	};
	class 159th_Phase_1_Cadet_Helmet: SWLB_clone_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Cadet P1 Helmet (159thCB)";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Phase_1_Cadet_Helmet.paa"
		};
	};
	class 159th_Phase_2_Cadet_Helmet: SWLB_clone_P2_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Cadet P2 Helmet (159thCB)";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Phase_2_Cadet_Helmet.paa"
		};
	};
	class 159th_Phase_1_Trooper_Helmet: SWLB_clone_P1_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Trooper P1 Helmet (159thCB)";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Phase_1_Trooper_Helmet.paa"
		};
	};
	class 159th_Trooper_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Trooper uniform armor (159thCB)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="159thCB_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 159th_Cadet_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Cadet uniform armor (159thCB)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="159thCB_Cadet";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 159th_NCO_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone NCO uniform armor (159thCB)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="159thCB_NCO";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 159th_Medic_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Medic uniform armor (159thCB)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="159thCB_Medic";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 159th_Antitank_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Antitank uniform armor (159thCB)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="159thCB_Antitank_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 159th_AutoRifle_Uniform: SWLB_clone_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone AutoRifle uniform armor (159thCB)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="159thCB_AutoRifle_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class 159thCB_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Clone Trooper";
		uniformclass="159th_Trooper_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_159th";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Trooper_Clone_Upper.paa",
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Clone_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 159thCB_Cadet: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Cadet";
		uniformclass="159th_Cadet_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_159th";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Cadet_Clone_Upper.paa",
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Clone_Cadet_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_1_Cadet_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_1_Cadet_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 159thCB_NCO: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="NCO";
		uniformclass="159th_NCO_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_159th";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_NCO_Clone_Upper.paa",
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Clone_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 159thCB_Medic: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Medic";
		uniformclass="159th_Medic_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_159th";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Medic_Clone_Upper.paa",
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Clone_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 159thCB_Antitank_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="Antitank";
		uniformclass="159th_Antitank_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_159th";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_AntiTank_Clone_Upper.paa",
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Clone_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 159thCB_AutoRifle_Trooper: SWLB_clone_base_P2
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="AutoRifle";
		uniformclass="159th_AutoRifle_Uniform";
		faction="SWLB_GAR";
		editorSubcategory="SWLA_Categ_159th";
		hiddenSelectionsTextures[]=
		{
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_AutoRifle_Clone_Upper.paa",
			"159thCloneBattalion\159th_CB_Infantry_Armor\data\159th_Clone_Lower.paa"
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"159th_Phase_2_Trooper_Helmet",
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
	timepacked="1611965285";
};
