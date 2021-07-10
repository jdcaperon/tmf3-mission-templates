/*
	Base Player Loadout
*/

// Weaponless Baseclass
class basetrooper 
{
	displayName = "Unarmed";
	// All Randomized.
	// Pants Beagle used - Blackhawk, Deep Recon, G99, Jeans, Tier 3, Triarius, 
	uniform[] = {
		"Tarkov_Uniforms_26",
		"Tarkov_Uniforms_30",
		"Tarkov_Uniforms_32",
		"Tarkov_Uniforms_36",
		"Tarkov_Uniforms_43",
		"Tarkov_Uniforms_44",
		"Tarkov_Uniforms_50",
		"Tarkov_Uniforms_54",
		//"Tarkov_Uniforms_56", white tex bug
		"Tarkov_Uniforms_60",
		"Tarkov_Uniforms_67",
		//"Tarkov_Uniforms_68", white tex bug
		"Tarkov_Uniforms_338",
		"Tarkov_Uniforms_342",
		"Tarkov_Uniforms_344",
		"Tarkov_Uniforms_348",
		"Tarkov_Uniforms_355",
		"Tarkov_Uniforms_356",
		"Tarkov_Uniforms_98",
		"Tarkov_Uniforms_102",
		"Tarkov_Uniforms_104",
		"Tarkov_Uniforms_108",
		"Tarkov_Uniforms_115",
		"Tarkov_Uniforms_116",
		"Tarkov_Uniforms_410",
		"Tarkov_Uniforms_414",
		"Tarkov_Uniforms_416",
		"Tarkov_Uniforms_420",
		"Tarkov_Uniforms_427",
		"Tarkov_Uniforms_428",
		"Tarkov_Uniforms_146",
		"Tarkov_Uniforms_150",
		"Tarkov_Uniforms_152",
		"Tarkov_Uniforms_163",
		"Tarkov_Uniforms_156",
		"Tarkov_Uniforms_164",
		"Tarkov_Uniforms_170",
		"Tarkov_Uniforms_174",
		"Tarkov_Uniforms_176",
		"Tarkov_Uniforms_180",
		"Tarkov_Uniforms_187",
		"Tarkov_Uniforms_188",
		"Tarkov_Uniforms_194",
		"Tarkov_Uniforms_198",
		"Tarkov_Uniforms_200",
		"Tarkov_Uniforms_204",
		"Tarkov_Uniforms_211",
		"Tarkov_Uniforms_212",
		"Tarkov_Uniforms_242",
		"Tarkov_Uniforms_246",
		"Tarkov_Uniforms_248",
		"Tarkov_Uniforms_252",
		"Tarkov_Uniforms_259",
		"Tarkov_Uniforms_260",
		"Tarkov_Uniforms_530",
		"Tarkov_Uniforms_534",
		"Tarkov_Uniforms_536",
		"Tarkov_Uniforms_540",
		"Tarkov_Uniforms_547",
		"Tarkov_Uniforms_548",
		"Tarkov_Uniforms_266",
		"Tarkov_Uniforms_272",
		"Tarkov_Uniforms_276",
		"Tarkov_Uniforms_270",
		"Tarkov_Uniforms_283",
		"Tarkov_Uniforms_284",
		"Tarkov_Uniforms_290",
		"Tarkov_Uniforms_294",
		"Tarkov_Uniforms_296",
		"Tarkov_Uniforms_300",
		"Tarkov_Uniforms_307",
		"Tarkov_Uniforms_308",
		"Tarkov_Uniforms_602",
		"Tarkov_Uniforms_606",
		"Tarkov_Uniforms_608",
		"Tarkov_Uniforms_612",
		"Tarkov_Uniforms_619",
		"Tarkov_Uniforms_620",
		"Tarkov_Uniforms_624"
	};
	vest[] = {
		"V_PlateCarrier2_blk"
	};
	backpack[] = {
		"B_Kitbag_rgr"
	};
	headgear[] = {
		"H_HelmetSpecB_blk"
	};
	goggles[] = {};
	hmd[] = {
		"NVGoggles"
	};
	// Leave empty to not change faces and Insignias -> example: faces[] = {};
	faces[] = {};
	insignias[] = {};
	
	//All Randomized. Add Primary Weapon and attachments.
	//Leave Empty to remove all. {"Default"} for using original items the character start with.
	primaryWeapon[] = {};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};
	
	// *WARNING* secondaryAttachments[] arrays are NOT randomized.
	secondaryWeapon[] = {
		"Tier1_Glock19_Urban"
	};
	secondaryAttachments[] = {};
	sidearmWeapon[] = {};
	sidearmAttachments[] = {};
	
	// These are added to the uniform or vest first - overflow goes to backpack if there's any.
	magazines[] = {};
	items[] = {
		"diw_armor_plates_main_plate",
		"greenmag_item_speedloader",
		"ACRE_PRC343"
	};	
	// These are added directly into their respective slots
	linkedItems[] = {
		"ItemWatch",
		"ItemMap",
		"ItemCompass",
		"ItemGPS"
	};
	
	// These are put directly into the backpack.
	backpackItems[] = {};
	
	// This is executed after the unit init is complete. Argument: _this = _unit.
	code = "";
};


class r : basetrooper
{
	displayName = "Rifletrooper";
	primaryWeapon[] = {
		"Tier1_HK416D145_MW13_CTR"
	};
	scope[] = {
		"tier1_exps3_0_g33_riser_black_up"
	};
	bipod[] = {
		"tier1_afg_mlok_black"
	};
	attachment[] = {
		"tier1_mw_ngal_m600v_black_fl"
	};
	silencer[] = {
		"Tier1_Gemtech_Halo"	
	};
	magazines[] += {
		LIST_2("HandGrenade"),
		LIST_2("SmokeShellBlue"),
		"Tier1_15Rnd_9x19_JHP",
		LIST_7(	"Tier1_30Rnd_556x45_M855A1_EMag")
	};
	items[] += {
		LIST_2("FirstAidKit")
	};
	backpackItems[] += {
		LIST_7("diw_armor_plates_main_plate"),
		LIST_2("greenmag_ammo_556x45_basic_60Rnd"),
		LIST_2("FirstAidKit")
	};
	
};


class ar : basetrooper
{
	displayName = "Machinegun";
	primaryWeapon[] = {
		"Tier1_MK46_Mod1_Savit"
	};
	scope[] = {
		"tier1_exps3_0_g33_riser_black_up"
	};
	attachment[] = {
		"Tier1_Mk46Mod1_LA5_M600V_Black_FL"
	};
	silencer[] = {
		"Tier1_Gemtech_Halo"	
	};
	bipod[] = {
		"tier1_saw_bipod_dd"
	};
	magazines[] =
	{
		LIST_2("rhsusf_200rnd_556x45_mixed_box"),
		"Tier1_15Rnd_9x19_JHP"
	};
		items[] += {
	
		LIST_2("FirstAidKit")
	};
	backpackItems[] += {
		LIST_7("diw_armor_plates_main_plate"),
		LIST_4("FirstAidKit")
	};
};

class aar : r
{
	displayName = "Machinegun Ammo Bearer";
	backpack[] = {
		"B_Carryall_cbr"
	};
	backpackItems[] = {
		"greenmag_ammo_556x45_basic_60Rnd",
		LIST_3("greenmag_beltlinked_556x45_basic_200"),
		LIST_6("diw_armor_plates_main_plate")		
	};
};

class sniper : basetrooper 
{
	displayName = "Sniper";
	primaryWeapon[] =
	{
		"RHS_weap_m107"
	};
	scope[] = {
		"Tier1_Razor_Gen3_110_Geissele_Docter"
	};
	bipod[] = {};
	linkedItems[] += {
		"Rangefinder"
	};
	magazines[] = {
		LIST_2("SmokeShellBlue"),
		"Tier1_15Rnd_9x19_JHP",
		LIST_2("rhsusf_mag_10Rnd_STD_50BMG_M33")
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		"ACRE_PRC148",
		LIST_3("FirstAidKit")
	};
	backpackItems[] = {
		LIST_6("diw_armor_plates_main_plate"),
		LIST_2("greenmag_ammo_50BMG_basic_60Rnd"),
		LIST_5("FirstAidKit"),
		LIST_2("Tier1_15Rnd_9x19_JHP")
	};
};

class spotter : r 
{
	displayName = "Spotter";
	primaryWeapon[] =
	{
		"Tier1_HK416D145_MW13_CTR"
	};
	bipod[] = {};
	items[] = {
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		"ACRE_PRC148",
		LIST_2("FirstAidKit"),
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class tl : r
{
	displayName = "Team Leader";
	primaryWeapon[] = {
		"rhs_weap_hk416d145_m320",
	};
	bipod[] = {};
	linkedItems[] += {
		"Rangefinder",
	};
	backpackItems[] = {
		LIST_2("FirstAidKit"),
		LIST_2("greenmag_ammo_556x45_basic_60Rnd"),
		LIST_5("diw_armor_plates_main_plate"),
		LIST_5("1Rnd_HE_Grenade_shell"),
		LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_shell"),
		LIST_2("1Rnd_SmokePurple_Grenade_shell"),
		LIST_2("SmokeShell"),
		LIST_2("SmokeShellRed"),
		LIST_2("SmokeShellPurple"),
	};
};

class sl : tl
{
	displayName = "Squad Leader";
	items[] = {
		"diw_armor_plates_main_plate",
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		"ACRE_PRC148",
	};
};

class cls : r
{
	displayName = "Medic";
	traits[] = {
		"medic"
	};
	backpack[] = {
		"B_Carryall_oucamo"
	};
	backpackItems[] =
	{
		LIST_6("diw_armor_plates_main_plate"),
		"greenmag_ammo_556x45_basic_60Rnd",
		"Medikit",
		LIST_2("SmokeShell"),
		LIST_2("SmokeShellBlue"),
		LIST_1("SmokeShellPurple"),
	};
};

class mat : r
{
	displayName = "Antitank Trooper";
	secondaryWeapon[] = {
		"launch_MRAWS_green_F"
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	backpackItems[] =
	{
		LIST_2("MRAWS_HEAT_F"),
		LIST_5("diw_armor_plates_main_plate"),
		LIST_2("greenmag_ammo_556x45_basic_60Rnd")
	};
};

class amat : r
{
	displayName = "Antitank ammo bearer";
	magazines[] += {
		LIST_4("Tier1_30Rnd_556x45_M855A1_EMag")
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		LIST_2("FirstAidKit"),
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	backpackItems[] =
	{
		LIST_4("diw_armor_plates_main_plate"),
		LIST_3("MRAWS_HEAT_F"),
	};
};

class sfsl : sl 
{
	displayName = "SF Team Leader";
	goggles[] = {};
	vest[] = {
		"rhsusf_plateframe_teamleader"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	sidearmWeapon[] = {
		"Tier1_Glock19_WAR_TB"
	};
	sidearmAttachments[] = {
		"Tier1_Agency_Compensator", "Tier1_DBALPL", "Tier1_MRDS"
	};
	items[] += {
		"greenmag_ammo_9x19_basic_60Rnd",
		LIST_3("ACE_CableTie"),
		LIST_2("ACE_IR_Strobe_Item")
	};
	magazines[] = {
		LIST_7("Tier1_30Rnd_556x45_M855A1_EMag"),
		LIST_4("ACE_CTS9"),
		LIST_2("HandGrenade"),
		"Tier1_20Rnd_9x19_JHP"
	};
	backpackItems[] +={
		LIST_3("1Rnd_HE_Grenade_Shell")
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class sfmed : cls
{
	displayName = "SF Medic";
	goggles[] = {};
	vest[] = {
		"rhsusf_plateframe_medic"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	primaryWeapon[] =
	{
		"rhs_weap_m14ebrri"
	};
	scope[] = {
		"Tier1_Razor_Gen3_110_Geissele_Docter"
	};
	bipod[] = {
		"Tier1_Harris_Bipod_Black"
	};
	attachment[] = {
		"Tier1_M4BII_LA5_M300C_Black_FL"
	};
	silencer[] = {
		"Tier1_SOCOM762_2_Black"
	};
	sidearmWeapon[] = {
		"Tier1_Glock19_WAR_TB"
	};
	sidearmAttachments[] = {
		"Tier1_Agency_Compensator", "Tier1_DBALPL", "Tier1_MRDS"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		"ACRE_PRC148",
		"FirstAidKit",
		"greenmag_ammo_9x19_basic_60Rnd",
		LIST_3("ACE_CableTie"),
		LIST_2("ACE_IR_Strobe_Item")
	};
	magazines[] = {
		LIST_4("rhsusf_20Rnd_762x51_m80_Mag"),
		"SmokeShellBlue",
		LIST_2("SmokeShellPurple"),
		LIST_2("SmokeShellRed"),
		LIST_2("HandGrenade"),
		LIST_2("ACE_CTS9"),
		"Tier1_20Rnd_9x19_JHP"
	};
	backpackItems[] =
	{
	LIST_6("diw_armor_plates_main_plate"),
	LIST_2("greenmag_ammo_762x51_basic_60Rnd"),
	"FirstAidKit",
	"Medikit"
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class sfmat : mat
{
	displayName = "SF Antitank trooper";
	goggles[] = {};
	vest[] = {
		"rhsusf_plateframe_rifleman"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	sidearmWeapon[] = {
		"Tier1_Glock19_WAR_TB"
	};
	sidearmAttachments[] = {
		"Tier1_Agency_Compensator", "Tier1_DBALPL", "Tier1_MRDS"
	};
	items[] += {
	"ACRE_PRC148",
	"greenmag_ammo_9x19_basic_60Rnd",
	LIST_3("ACE_CableTie"),
	LIST_2("ACE_IR_Strobe_Item")
	};
	magazines[] = {
		LIST_7("Tier1_30Rnd_556x45_M855A1_EMag"),
		LIST_2("ACE_CTS9"),
		LIST_2("SmokeShellBlue"),
		LIST_1("HandGrenade"),
		"Tier1_20Rnd_9x19_JHP"
	};
	backpackItems[] += {};
	linkedItems[] += {
		"Rangefinder"
	};
};

class sfar : ar
{
	displayName = "SF Machinegunner";
	goggles[] = {};
	vest[] = {
		"rhsusf_plateframe_machinegunner"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"B_Carryall_cbr"
	};
	primaryWeapon[] =
	{
		"Tier1_MK48_Mod1"
	};
	scope[] = {
		"Tier1_EXPS3_0_G33_Riser_Black_Up"
	};
	bipod[] = {
		"Tier1_SAW_Bipod_DD"
	};
	attachment[] = {
		"Tier1_Mk48Mod1_LA5_M600V_Black_FL"
	};
	silencer[] = {
		"Tier1_SOCOM762MG_Black"
	};
	sidearmWeapon[] = {
		"Tier1_Glock19_WAR_TB"
	};
	sidearmAttachments[] = {
		"Tier1_Agency_Compensator", "Tier1_DBALPL", "Tier1_MRDS"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		"ACRE_PRC148",
		"greenmag_ammo_9x19_basic_60Rnd",
		LIST_3("ACE_CableTie"),
		LIST_2("ACE_IR_Strobe_Item"),
		"FirstAidKit"
	};
	magazines[] = {
		LIST_3("rhsusf_100Rnd_762x51"),
		LIST_2("ACE_CTS9"),
		LIST_2("SmokeShellBlue"),
		"HandGrenade",
		"Tier1_20Rnd_9x19_JHP"
	};
	backpackItems[] =
	{
	"rhsusf_100Rnd_762x51",
	"Tier1_20Rnd_9x19_JHP",
	LIST_7("diw_armor_plates_main_plate"),
	LIST_4("FirstAidKit")
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class ceng : basetrooper
{
	displayName = "Combat Engineer";
	headgear[] = {
		"H_HelmetSpecB_Sand"
	};
	vest[] = {
		"rhsusf_mbav_mg"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {
		"B_Bergen_mcamo_F"
	};
	primaryWeapon[] =
	{
		"rhsusf_weap_MP7A2"
	};
	scope[] = {
		"Tier1_EXPS3_0_Black"
	};
	bipod[] = {
		"Tier1_Larue_FUG_Black"
	};
	attachment[] = {
		"Tier1_MP7_NGAL_M300C_Black_FL"
	};
	silencer[] = {
		"rhsusf_acc_rotex_mp7"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		"ACRE_PRC148",
		"ACE_Clacker",
		LIST_4("FirstAidKit")
	};
	magazines[] = {
		LIST_6("rhsusf_mag_40Rnd_46x30_FMJ"),
		LIST_2("ACE_M14"),
		LIST_2("SmokeShellBlue"),
		LIST_2("HandGrenade"),
		LIST_2("ACE_Chemlight_HiBlue"),
		LIST_2("ACE_Chemlight_HiYellow"),
		LIST_2("ACE_Chemlight_UltraHiOrange"),
		"Tier1_15Rnd_9x19_JHP"
	};
	backpackItems[] =
	{
		LIST_4("diw_armor_plates_main_plate"),
		LIST_2("FirstAidKit"),
		LIST_2("greenmag_ammo_46x30_basic_60Rnd"),
		"ACE_Wirecutter",
		LIST_3("APERSTripMine_Wire_Mag"),
		LIST_2("DemoCharge_Remote_Mag"),
		LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
		LIST_2("ACE_FlareTripMine_Mag"),
		"ATMine_Range_Mag",
		"SLAMDirectionalMine_Wire_Mag"
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class crew : basetrooper
{
	displayName = "Crew";
	uniform[] = {
		"Tarkov_Uniforms_32",
		"Tarkov_Uniforms_60",
		"Tarkov_Uniforms_200"
	};
	headgear[] = {
		"H_HelmetCrew_I"
	};
	vest[] = {
		"rhsgref_6b23_khaki"
		//"rhsusf_mbav_mg"
	};
	backpack[] = {};
	primaryWeapon[] =
	{
		"rhsusf_weap_MP7A2"
	};
	scope[] = {
		"Tier1_EXPS3_0_Black"
	};
	bipod[] = {
		"Tier1_Larue_FUG_Black"
	};
	attachment[] = {};
	silencer[] = {};
	sidearmWeapon[] = {};
	items[] = {
		"greenmag_item_speedloader",
		LIST_2("ACRE_PRC148"),
		LIST_2("FirstAidKit"),
		"greenmag_ammo_46x30_basic_60Rnd"
	};
	magazines[] = {
		LIST_3("rhsusf_mag_40Rnd_46x30_FMJ"),
		LIST_2("SmokeShellBlue"),
	};
	backpackItems[] = {};
	linkedItems[] += {
		"Rangefinder"
	};
};

class helocrew : crew
{
	displayName = "Helo Crew";
	uniform[] = {
		"Tarkov_Uniforms_420",
		"Tarkov_Uniforms_342",
		"Tarkov_Uniforms_262",
		"Tarkov_Uniforms_499"
	};
	headgear[] = {
		"H_PilotHelmetHeli_B"
	};
	vest[] = {
		"rhsusf_mbav_light"
		//"rhsusf_mbav_mg"
	};
};

class aircrew : basetrooper
{
	displayName = "Aircrew";
	uniform[] = {
		"U_I_pilotCoveralls"
	};
	headgear[] = {
		"H_PilotHelmetFighter_B"
	};
	hmd[] = {};
	vest[] = {};
	backpack[] = {};
	primaryWeapon[] ={};
	scope[] = {};
	bipod[] = {};
	attachment[] = {};
	silencer[] = {};
	sidearmWeapon[] = {
		"Tier1_Glock19_Urban"
	};
	sidearmAttachments[] = {
		"Tier1_X300U"
	};
	items[] = {
		LIST_1("ACE_IR_Strobe_Item"),
		LIST_2("ACRE_PRC148"),
		LIST_1("FirstAidKit"),
		LIST_1("ACE_Chemlight_UltraHiOrange"),
	};
	magazines[] = {
		LIST_2("Tier1_15Rnd_9x19_JHP"),
		"SmokeShellOrange"
	};
	backpackItems[] = {};
	linkedItems[] += {
		"Rangefinder"
	};
};

class hat : mat
{
	displayName = "Heavy Antitank Trooper";
	secondaryWeapon[] = {
		"launch_I_Titan_short_F"
	};
	items[] = {
		"greenmag_item_speedloader",
		"ACRE_PRC343",
		"ACRE_PRC148",
		LIST_3("FirstAidKit")
	};
	backpack[] = {
		"B_Bergen_mcamo_F"
	};
	backpackItems[] =
	{
		LIST_3("Titan_AT"),
		LIST_4("diw_armor_plates_main_plate"),
		LIST_2("greenmag_ammo_556x45_basic_60Rnd")
	};
	linkedItems[] += {
		"Rangefinder"
	};
};

class ahat : hat
{
	displayName = "Heavy Antitank ammo bearer";
	secondaryWeapon[] = {};
};
