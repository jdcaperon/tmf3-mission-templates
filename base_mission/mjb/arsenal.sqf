/**
	* Adds curated arsenal to player that disables itself under specified conditions.
	*
	* Faction:
	*
	* Usage - under initPlayerLocal.sqf
	* 0 = execVM 'loadouts\arsenal.sqf';
*/

//Variables
private _unitRole = player getVariable ["tmf_assignGear_role",nil];
private _leaderRole = ["tl","sl"];

arsenal = "building" createVehicleLocal [0,0,0];
player setVariable ["startpos", getPosASL player];


//Define Arsenal Items
private _itemEquipment = 
[
	//Uniforms(not Tarkov)
	"U_B_CombatUniform_mcam_W",
	"U_B_CombatUniform_mcam_WO",
	"U_B_CombatUniform_mcam_tshirt_W",
	"WU_B_GEN_Soldier_F",
	"WU_B_GEN_Commander_F",
	"WU_B_HeliPilotCoveralls",
	"U_B_HeliPilotCoveralls",
	//Vests
	"V_PlateCarrier2_blk",
	//Backpacks
	"B_AssaultPack_rgr",
	"B_Carryall_cbr",
	"B_Kitbag_rgr",
	//Helmets
	"H_Booniehat_oli",
	"H_HelmetSpecB",
	"H_HelmetSpecB_paint1",
	"H_HelmetSpecB_paint2",
	"H_HelmetSpecB_snakeskin",
	"H_HelmetSpecB_sand",
	"H_Cap_oli",
	"H_Cap_tan",
	"H_Cap_blk",
	"H_Bandanna_khk",
	"H_Bandanna_cbr",
	"H_Watchcap_blk",
	"H_HelmetB_Enh_tna_F",
	"H_HelmetSpecB_wdl",
	"rhs_beanie_green",
	"rhsusf_bowman_cap",
	"H_HelmetSpecB_blk",
	"NVGoggles",
	//MISC
	"G_Balaclava_blk",
	"rhs_balaclava",
	//ACRE
	"ACRE_PRC343",
	
	//ACE
	"ACE_Flashlight_XL50",
	"ACE_MapTools",
	"ACE_RangeCard",
	"rhs_6m2_nvg",
	"rhs_6m2_1_nvg",
	
	//BIS
	"ItemCompass",
	"ItemMap",
	"ItemWatch",
	"Laserbatteries",
	"ItemGPS",
	"FirstAidKit",
	//Diwako
	"diw_armor_plates_main_plate",
	//Mod
	"greenmag_item_speedloader"
];

private _itemSpecial =
[
	
	//Binoculars
	
	//BIS
	"Binocular",
	"Laserdesignator",
	"Laserdesignator_01_khk_F",
	"Laserdesignator_03",
	
	//RHS
	"rhsusf_bino_lerca_1200_black",
	"rhsusf_bino_lerca_1200_tan",
	"rhsusf_bino_m24",
	"rhsusf_bino_m24_ard",
	"rhssaf_zrak_rd7j",
	
	
	//Explosives

	//Radios
	"ACRE_PRC148",
	"ACRE_PRC152",
	"ACRE_PRC117F"
];

/* private _itemMedical = 
[
	//Bandages
	"ACE_fieldDressing",
	"ACE_elasticBandage",
	"ACE_packingBandage",
	"ACE_quikclot",
	//Specialized Equipments
	"ACE_splint",
	"ACE_tourniquet"
];

private _itemMedicalAdv = 
[
	//Fluids
	"ACE_bloodIV",
	"ACE_bloodIV_250",
	"ACE_bloodIV_500",
	"ACE_plasmaIV",
	"ACE_plasmaIV_250",
	"ACE_plasmaIV_500",
	"ACE_salineIV",
	"ACE_salineIV_250",
	"ACE_salineIV_500",
	//Medications
	"ACE_adenosine",
	"ACE_epinephrine",
	"ACE_morphine",
	//Specialized Equipments
	"ACE_personalAidKit",
	"ACE_surgicalKit"
]; */

private _itemMod =
[	
	//Optics
	"Tier1_SAW_Bipod_DD",
	"Tier1_Gemtech_Halo",
	"Tier1_EXPS3_0_Black",
	"Tier1_EXPS3_0_G33_Riser_Black_Up",
	"Tier1_RAHG_NGAL_M600V_Black_FL",
	"Tier1_MVG_MLOK_Black",
	"Tier1_AFG_MLOK_Black",
	"Tier1_416_LA5_M600V_Black_FL",
	"Tier1_DBALPL_FL",
	"Tier1_MW_NGAL_M600V_Black_FL",
	"Tier1_SR25_LA5_Side",
	//Muzzle Devices
	
	
	//Bipod & Foregrips
	"rhs_acc_dtk4short",
	"Tier1_Larue_FUG_Black",
	"optic_ERCO_blk_F",
	"Tier1_Romeo4T_BCD_G33_Riser_Black_Up",
	"Tier1_Romeo4T_BCQ_Riser_Black",
	"Tier1_Mk18_LA5_M600V_Black_FL",
	"Tier1_MP7_NGAL_M300C_Black_FL",
	"rhsusf_acc_rotex_mp7",
	//Tactical Devices
	"rhs_acc_pbs1",
	"Tier1_10_LA5_Side",
	"rhs_acc_grip_rk2",
	"rhs_acc_grip_rk6",
	"Tier1_SCAR_NGAL_M300C_FL",
	"Tier1_SOCOM762_2_DE",
	"Tier1_Mk18_NGAL_M300C_Black_FL",
	"rhsgref_acc_zendl",
	"Tier1_Shortdot_Geissele_Docter_Black",
	"Tier1_SOCOM762_2_Black",
	"Tier1_M4BII_NGAL_M300C_Black_FL",
	"Tier1_EXPS3_0_Tano",
	"Tier1_EXPS3_0_G33_Riser_Tano_Up",
	"Tier1_Harris_Bipod_Black",
	"Tier1_Harris_Bipod_Tan",
	"Tier1_Harris_Bipod_MLOK_Black_2",
	"rhs_acc_ekp1",
	"rhs_acc_ekp8_02",
	"rhs_acc_ekp8_18",
	"rhs_acc_pso1m21",
	"rhs_acc_tgpv2"
];

private _itemWeaponRifle =
[
	"Tier1_HK416D145_MW13_CTR_grip3",
	"Tier1_Glock19_Urban",
	"Tier1_Glock19_WAR",
	"rhs_weap_ak105_zenitco01_b33",
	"rhs_weap_ak105_zenitco01_b33_grip1",
	"rhs_weap_ak105_zenitco01_b33_afg",
	"rhsusf_weap_MP7A2",
	"rhs_weap_akm_zenitco01_b33",
	"rhs_weap_mk17_STD",
	"rhs_weap_savz58v_ris",
	"rhs_weap_m14_rail",
	"rhs_weap_m14ebrri",
	"Tier1_SR25_EC",
	"rhs_weap_svdp_npz"
];

private _itemWeaponAR = 
[
	"Tier1_MK46_Mod1_Savit",
	"rhs_weap_pkp"
];

private _itemWeaponMG = 
[
	//mgs

	//bipods

];

private _itemWeaponGL =
[
	"rhs_weap_hk416d145_m320"
];

private _itemWeaponLAT = 
[
	"rhs_weap_M136",
	"rhs_weap_M136_hedp",
	"rhs_weap_M136_hp"
];
private _itemWeaponMAT =
[
	"launch_MRAWS_green_F"
];
private _itemAmmoMAT =
[
	"MRAWS_HEAT_F",
	"MRAWS_HEAT55_F",
	"MRAWS_HE_F"
];

private _itemWeaponPistol = 
[
	"Tier1_Glock19_Urban",
	"Tier1_Glock19_WAR",
	"Tier1_DBALPL_FL"
];

private _itemWeaponAmmo =
[
	//Magazines
	"Tier1_30Rnd_556x45_M855A1_EMag",
	"1Rnd_HE_Grenade_shell",
	"1Rnd_SmokePurple_Grenade_shell",
	"1Rnd_SmokeRed_Grenade_shell",
	"1Rnd_Smoke_Grenade_shell",
	"Tier1_15Rnd_9x19_JHP",
	"HandGrenade",
	"ACE_M84",
	"SmokeShellGreen",
	"SmokeShellRed",
	"SmokeShellPurple",
	"SmokeShellBlue",
	"rhs_30Rnd_545x39_7N10_AK",
	"rhsusf_mag_40Rnd_46x30_FMJ",
	"rhs_30Rnd_762x39mm",
	"rhs_mag_20Rnd_SCAR_762x51_m80_ball",
	"rhs_30Rnd_762x39mm_Savz58",
	"rhsusf_20Rnd_762x51_SR25_m62_Mag",
	"rhsusf_20Rnd_762x51_m80_Mag",
	"rhsusf_20Rnd_762x51_m62_Mag",
	"Tier1_20Rnd_762x51_M61_AP_SR25_Mag",
	"10Rnd_762x54_Mag",
	"ace_10rnd_762x54_tracer_mag",
	//Loose ammo
	"greenmag_ammo_545x39_basic_60Rnd",
	"greenmag_ammo_46x30_basic_60Rnd",
	"greenmag_ammo_762x39_basic_60Rnd",
	"greenmag_ammo_762x51_basic_60Rnd",
	"greenmag_ammo_762x54_basic_60Rnd",
	"greenmag_ammo_9x19_basic_30Rnd",
	"greenmag_ammo_9x21_basic_30Rnd",
	"greenmag_ammo_556x45_basic_60Rnd"
];

private _itemWeaponARAmmo =
[
	//Boxes
	"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",
	"rhsusf_100Rnd_556x45_soft_pouch_coyote",
	"rhsusf_200Rnd_556x45_soft_pouch_coyote",
	"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",
	"rhsusf_200Rnd_556x45_M856A1_soft_pouch_coyote",
	"rhsusf_100Rnd_556x45_M856A1_soft_pouch_coyote",
	"rhsusf_200rnd_556x45_mixed_box",
	"rhs_100Rnd_762x54mmR_green",
	//Loose Belts
	"greenmag_beltlinked_556x45_basic_200",
	"greenmag_beltlinked_762x51_basic_100",
	"greenmag_beltlinked_762x54_basic_100"

];

private _itemMedic =
[
	//BIS
	"Medikit",
	"B_Carryall_oucamo"

];

private _itemWeaponSniper =
[
	//RHS
	"RHS_weap_m107",
	"Tier1_Razor_Gen3_110_Geissele_Docter"

];

private _itemSniper =
[
	//BIS
	"Rangefinder",
	"ACRE_148",
	"U_B_FullGhillie_ard",
	"U_I_FullGhillie_lsh",
	"U_B_FullGhillie_sard",
	"U_O_T_FullGhillie_tna_F",
	"U_B_T_FullGhillie_tna_F"

];

private _itemSF =
[
	//BIS and Mods
	"O_NVGoggles_grn_F",
	"DemoCharge_Remote_Mag",
	"ACE_CTS9",
	"Tier1_20Rnd_9x19_JHP",
	"rhsusf_100Rnd_762x51",
	"ACE_CableTie",
	"ACE_IR_Strobe_Item",
	"rhsusf_plateframe_machinegunner",
	"Tier1_SOCOM762MG_Black",
	"Tier1_Glock19_WAR_TB",
	"Tier1_Agency_Compensator",
	"Tier1_DBALPL",
	"Tier1_MRDS",
	"rhsusf_plateframe_rifleman",
	"Tier1_Razor_Gen3_110_Geissele_Docter",
	"rhsusf_plateframe_medic",
	"rhsusf_plateframe_teamleader",
	"ACE_Clacker",
	"ACE_wirecutter",
	"rhs_mag_100Rnd_556x45_M855A1_cmag",
	"rhs_60Rnd_545X39_7N10_AK",
	"rhs_75Rnd_762x39mm",
	"G_Balaclava_TI_G_blk_F",
	"G_Bandanna_aviator",
	"G_Bandanna_blk",
	"G_aviator",
	"rhsusf_shemagh_gogg_tan",
	"rhsusf_shemagh2_gogg_tan",
	"rhsusf_oakley_goggles_blk",
	"G_Balaclava_TI_blk_f",
	"rhsusf_shemagh_tan",
	"rhsusf_shemagh2_tan"

];

private _itemEngineer =
[
	//BIS and Mods
	"ACRE_148",
	"DemoCharge_Remote_Mag",
	"ACE_Clacker",
	"Toolkit",
	"B_Bergen_mcamo_F",
	"ACE_M14",
	"rhs_charge_sb3kg_mag",
	"rhs_charge_tnt_x2_mag",
	"ACE_wirecutter",
	"ACE_EntrenchingTool",
	"ACE_DeadManSwitch",
	"ACE_DefusalKit",
	"ATMine_Range_Mag",
	"ACE_FlareTripMine_Mag",
	"APERSTripMine_Wire_Mag",
	"SLAMDirectionalMine_Wire_Mag",
	"ClaymoreDirectionalMine_Remote_Mag",
	"TrainingMine_Mag",
	"ACE_UAVBattery",
	"ACE_SpraypaintBlack",
	"ACE_Rope36",
	"ACE_Rope15",
	"MineDetector",
	"ACE_Chemlight_HiBlue",
	"ACE_Chemlight_HiYellow",
	"ACE_Chemlight_UltraHiOrange",
	"rhs_tr8_periscope",
	"rhsusf_bino_leopold_mk4",
	"B_UAV_01_backpack_F",
	"B_UGV_02_Demining_backpack_F",
	"ACE_TacticalLadder_Pack"

];

private _itemWeaponHAT =
[
"launch_I_Titan_short_F"
];

private _itemAmmoHAT =
[
"Titan_AT",
"Rangefinder",
"B_Bergen_mcamo_F"
];

private _itemTankCrew =
[
"rhsusf_weap_MP7A2",
"Tier1_EXPS3_0_Black",
"rhsusf_mag_40Rnd_46x30_FMJ",
"Tier1_Larue_FUG_Black",
"diw_armor_plates_main_plate",
"greenmag_item_speedloader",
"rhsgref_6b23_khaki",
"ACRE_PRC148",
"FirstAidKit",
"greenmag_ammo_46x30_basic_60Rnd",
"SmokeShellBlue",
"H_HelmetCrew_I",
"Rangefinder",
"ItemMap",
"ItemGPS",
"ItemCompass",
"ItemWatch",
"NVGoggles",
"rhsusf_oakley_goggles_blk"
];

private _itemHeloCrew =
[
"rhsusf_weap_MP7A2",
"Tier1_EXPS3_0_Black",
"rhsusf_mag_40Rnd_46x30_FMJ",
"Tier1_Larue_FUG_Black",
"diw_armor_plates_main_plate",
"greenmag_item_speedloader",
"rhsusf_mbav_light",
"ACRE_PRC148",
"FirstAidKit",
"greenmag_ammo_46x30_basic_60Rnd",
"SmokeShellBlue",
"H_PilotHelmetHeli_B",
"Rangefinder",
"ItemMap",
"ItemGPS",
"ItemCompass",
"ItemWatch",
"NVGoggles",
"G_aviator"
];

private _itemAirCrew =
[
"Tier1_Glock19_Urban",
"Tier1_X300U",
"Tier1_15Rnd_9x19_JHP",
"U_I_pilotCoveralls",
"ACE_IR_Strobe_Item",
"greenmag_item_speedloader",
"ACRE_PRC148",
"FirstAidKit",
"greenmag_ammo_9x19_basic_30Rnd",
"ACE_Chemlight_UltraHiOrange",
"SmokeShellOrange",
"H_PilotHelmetFighter_B",
"Rangefinder",
"ItemMap",
"ItemGPS",
"ItemCompass",
"ItemWatch",
"G_aviator"
];


//Add Existing Player Items
{
    _itemEquipment pushBackUnique _x;
}forEach (primaryWeaponItems player);

{
    _itemEquipment pushBackUnique _x;
}forEach (handgunItems player);

_itemEquipment pushBack uniform player;
_itemEquipment pushBack vest player;
_itemEquipment pushBack backpack player;
_itemEquipment pushBack headgear player;

{
    _itemEquipment pushBackUnique _x;
} forEach (assignedItems player);

private _tarkovuniforms = [];
for "_i" from 1 to 623 do {
    _tarkovuniforms pushback ("Tarkov_Uniforms_" + str _i);
};
//Match unitrole name with the classnames in loadout.
switch (true) do 
{
	case (_unitRole == "ar") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponAR + _itemWeaponMG + _itemWeaponPistol + _itemWeaponAmmo + _itemWeaponARAmmo + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "aar") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponAmmo + _itemWeaponARAmmo + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole in _leaderRole) :
	{
		[arsenal, (_itemEquipment + _itemSpecial + _itemMod + _itemWeaponRifle + _itemWeaponGL + _itemWeaponPistol + _itemWeaponAmmo + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "rm_fa") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponAmmo + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "cls") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _tarkovuniforms + _itemMedic)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "mat") :
	{
		[arsenal, (_itemEquipment + _itemWeaponMAT + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _itemAmmoMAT + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
		case (_unitRole == "amat") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _itemAmmoMAT + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
		case (_unitRole == "sniper") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _itemWeaponSniper + _itemSniper + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
		case (_unitRole == "spotter") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _itemSniper + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
		case (_unitRole == "sfsl") :
	{
		[arsenal, (_itemEquipment + _itemSpecial + _itemWeaponAR + _itemWeaponARAmmo + _itemWeaponMAT + _itemAmmoMAT + _itemMedic + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _itemSF + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "ceng") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponAmmo + _itemEngineer + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "crew") :
	{
		[arsenal, (_ItemTankCrew + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "helocrew") :
	{
		[arsenal, (_ItemHeloCrew + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "aircrew") :
	{
		[arsenal, (_ItemAirCrew)] call ace_arsenal_fnc_initBox;
	};
	case (_unitRole == "hat") :
	{
		[arsenal, (_itemEquipment + _itemWeaponHAT + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _itemAmmoHAT + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
		case (_unitRole == "ahat") :
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponPistol + _itemWeaponAmmo + _itemAmmoHAT + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
	default 
	{
		[arsenal, (_itemEquipment + _itemMod + _itemWeaponRifle + _itemWeaponAmmo + _tarkovuniforms)] call ace_arsenal_fnc_initBox;
	};
};

_action = 
[
	"personal_arsenal","Personal Arsenal","\A3\ui_f\data\igui\cfg\weaponicons\MG_ca.paa",
	{
		[arsenal, _player] call ace_arsenal_fnc_openBox
	},
	{ 
		(player distance2d (player getVariable ["startpos",[0,0,0]])) < 200
	},
	{},
	[],
	[0,0,0],
	3
] call ace_interact_menu_fnc_createAction;

["CAManBase", 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;