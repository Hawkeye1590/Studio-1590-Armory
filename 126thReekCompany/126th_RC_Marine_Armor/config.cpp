class CfgPatches
{
	class 126th_Reek_Company
	{
		units[]=
		{
			"126th_Marine_Recruit",
			"126th_Marine_Cadet",
			"126th_Marine_Trooper",
			"126th_Marine_Senior_Trooper",
			"126th_Marine_Veteran_Trooper",
			"126th_Marine_Lance_Corporal",
			"126th_Marine_Specialist",
			"126th_Marine_Corporal",
			"126th_Marine_Sergeant",
			"126th_Marine_Staff_Sergeant"
		};
		weapons[]=
		{
			"126th_Marine_Recruit_Helmet",
			"126th_Marine_Cadet_Helmet",
			"126th_Marine_Trooper_Helmet",
			"126th_Marine_Senior_Trooper_Helmet",
			"126th_Marine_Veteran_Trooper_Helmet",
			"126th_Marine_Lance_Corporal_Helmet",
			"126th_Marine_Specialist_Helmet",
			"126th_Marine_Corporal__Helmet",
			"126th_Marine_Sergeant_Helmet",
			"126th_Marine_Staff_Sergeant_Helmet",
			"126th_Marine_Recruit_Uniform",
			"126th_Marine_Cadet_Uniform",
			"126th_Marine_Trooper_Uniform",
			"126th_Marine_Senior_Trooper_Uniform",
			"126th_Marine_Veteran_Trooper_Uniform",
			"126th_Marine_Lance_Corporal_Uniform",
			"126th_Marine_Specialist_Uniform",
			"126th_Marine_Corporal_Uniform",
			"126th_Marine_Sergeant_Uniform",
			"126th_Marine_Staff_Sergeant_Uniform"
		};
		author="Hawkeye";
		requiredAddons[]=
		{
			"lsd_armor_bluefor",
			"ls_armor_bluefor"
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
	class 126th_Categ_Marines
	{
		displayName="126th Marines";
		priority=1;
	};
};
class CfgWeapons
{
	class ls_gar_phase2Insulated_helmet;
	class lsd_gar_phase2Insulated_uniform;
	class UniformItem;
	class ItemInfo;
	class 126th_Marine_Recruit_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Recruit Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Recruit_Helmet_CO.paa"
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
	class 126th_Marine_Cadet_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Cadet Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Cadet_Helmet_CO.paa"
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
	class 126th_Marine_Trooper_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Trooper_Helmet_CO.paa"
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
	class 126th_Marine_Senior_Trooper_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Senior Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Senior_Trooper_Helmet_CO.paa"
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
	class 126th_Marine_Veteran_Trooper_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Veteran Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Veteran_Trooper_Helmet_CO.paa"
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
	class 126th_Marine_Lance_Corporal_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Lance Corporal Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Lance_Corporal_Helmet_CO.paa"
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
	class 126th_Marine_Specialist_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Specialist Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Specialist_Helmet_CO.paa"
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
	class 126th_Marine_Corporal__Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Corporal Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Corporal_Helmet_CO.paa"
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
	class 126th_Marine_Sergeant_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Sergeant Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Sergeant_Helmet_CO.paa"
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
	class 126th_Marine_Staff_Sergeant_Helmet: ls_gar_phase2Insulated_helmet
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Staff Sergeant Helmet";
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Staff_Sergeant_Helmet_CO.paa"
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
	class 126th_Marine_Recruit_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Recruit Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Recruit";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Cadet_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Cadet Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Cadet";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Trooper_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Trooper Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Senior_Trooper_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Senior Trooper Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Senior_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Veteran_Trooper_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Veteran Trooper Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Veteran_Trooper";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Lance_Corporal_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Lance Corporal Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Lance_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Specialist_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Specialist Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Specialist";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Corporal_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Corporal Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Corporal";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Sergeant_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Sergeant Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Sergeant";
			containerClass="Supply150";
			mass=40;
		};
	};
	class 126th_Marine_Staff_Sergeant_Uniform: lsd_gar_phase2Insulated_uniform
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="[126th] Marine Staff Sergeant Armor";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="126th_Marine_Staff_Sergeant";
			containerClass="Supply150";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class lsd_blueforClone_base;
	class 126th_Marine_Recruit: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Recruit";
		uniformclass="126th_Marine_Recruit_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Recruit_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Recruit_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Recruit_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Recruit_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
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
	class 126th_Marine_Cadet: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Cadet";
		uniformclass="126th_Marine_Cadet_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Cadet_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Cadet_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Cadet_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Cadet_Helmet",
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
	class 126th_Marine_Trooper: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Trooper";
		uniformclass="126th_Marine_Trooper_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Trooper_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Trooper_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Trooper_Helmet",
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
	class 126th_Marine_Senior_Trooper: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Senior Trooper";
		uniformclass="126th_Marine_Senior_Trooper_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Senior_Trooper_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Senior_Trooper_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Senior_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Senior_Trooper_Helmet",
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
	class 126th_Marine_Veteran_Trooper: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Veteran Trooper";
		uniformclass="126th_Marine_Veteran_Trooper_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Veteran_Trooper_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Veteran_Trooper_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Veteran_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Veteran_Trooper_Helmet",
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
	class 126th_Marine_Lance_Corporal: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Lance_Corporal";
		uniformclass="126th_Marine_Lance_Corporal_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Lance_Corporal_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Lance_Corporal_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Lance_Corporal_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Lance_Corporal_Helmet",
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
	class 126th_Marine_Specialist: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Specialist";
		uniformclass="126th_Marine_Specialist_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Specialist_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Specialist_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Specialist_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Specialist_Helmet",
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
	class 126th_Marine_Corporal: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Corporal";
		uniformclass="126th_Marine_Corporal_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Corporal_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Corporal_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Corporal__Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Corporal__Helmet",
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
	class 126th_Marine_Sergeant: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Sergeant";
		uniformclass="126th_Marine_Sergeant_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Sergeant_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Sergeant_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Sergeant_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Sergeant_Helmet",
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
	class 126th_Marine_Staff_Sergeant: lsd_blueforClone_base
	{
		author="Hawkeye";
		scopecurator=2;
		scope=2;
		displayName="126th Marine Staff Sergeant";
		uniformclass="126th_Marine_Staff_Sergeant_Uniform";
		faction="126th_Reek_Company";
		editorSubcategory="126th_Categ_Marines";
		nakedUniform="lsd_gar_bodyGlove_uniform";
		model="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
		hiddenSelections[]=
		{
			"_upper",
			"_lower",
			"_undersuit"
		};
		hiddenSelectionsTextures[]=
		{
			"126thReekCompany\126th_RC_Marine_Armor\data\Staff_Sergeant_Upper_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Staff_Sergeant_Lower_CO.paa",
			"126thReekCompany\126th_RC_Marine_Armor\data\Softshell_CO.paa"
		};
		linkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Staff_Sergeant_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"lsd_gar_clone_vest",
			"126th_Marine_Staff_Sergeant_Helmet",
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
