/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Sklep z bronią";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Pistol_01_F", "", 6500, -1, "" }, //Apex DLC
            { "hgun_ACPC2_F", "", 7000, -1, "" },
            { "hgun_Rook40_F", "", 9850, -1, "" },
            { "hgun_Pistol_heavy_01_F", "", 11500, -1, "" }
        };
        mags[] = {
            { "10Rnd_9x21_Mag", "", 250, -1, "" }, //Apex DLC
            { "9Rnd_45ACP_Mag", "", 200, -1, "" },
            { "16Rnd_9x21_Mag", "", 125, -1, "" },
            { "11Rnd_45ACP_Mag", "", 150, -1, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, -1, "" },
            { "optic_MRD", "", 2500, -1, "" }
        };
    };
	
	
    class rebel {
        name = "Uzbrojenie Rebeliantów";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, -1, "" },
            { "arifle_Katiba_F", "", 30000, -1, "" },
            { "srifle_DMR_01_F", "", 50000, -1, "" },
            { "arifle_SDAR_F", "", 20000, -1, "" },
            { "arifle_AK12_F", "", 22000, -1, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, -1, "" }, //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, -1, "" },
            { "30Rnd_762x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, -1, "" },
            { "10Rnd_762x54_Mag", "", 500, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 125, -1, "" },
            { "30Rnd_580x42_Mag_F", "", 125, -1, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, -1, "" },
            { "optic_Holosight", "", 3600, -1, "" },
            { "optic_Hamr", "", 7500, -1, "" },
            { "acc_flashlight", "", 1000, -1, "" }
        };
    };
	
    class rebel2 {
        name = "Uzbrojenie Mafii";
        side = "civ";
        conditions = "license_civ_rebel2";
        items[] = {
            { "arifle_TRG20_F", "", 25000, -1, "" },
            { "arifle_Katiba_F", "", 30000, -1, "" },
            { "srifle_DMR_01_F", "", 50000, -1, "" },
            { "arifle_SDAR_F", "", 20000, -1, "" },
            { "arifle_AK12_F", "", 22000, -1, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, -1, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, -1, "" }, //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, -1, "" },
            { "30Rnd_762x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, -1, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, -1, "" },
            { "10Rnd_762x54_Mag", "", 500, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 125, -1, "" },
            { "30Rnd_580x42_Mag_F", "", 125, -1, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, -1, "" },
            { "optic_Holosight", "", 3600, -1, "" },
            { "optic_Hamr", "", 7500, -1, "" },
            { "acc_flashlight", "", 1000, -1, "" }
        };
    };
	
	
    class gang {
        name = "Asortyment gangu";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, -1, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, -1, "" },
            { "9Rnd_45ACP_Mag", "", 200, -1, "" },
            { "30Rnd_9x21_Mag", "", 250, -1, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, -1, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, -1, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Wielobranżowy";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, -1, "" },
            { "ItemMap", "", 50, -1, "" },
            { "ItemCompass", "", 50, -1, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, -1, "" },
            { "ItemRadio", "", 150, -1, "" },
           // { "NVGoggles", "", 2000, -1, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, -1, "" },
            { "Chemlight_green", "", 300, -1, "" },
            { "Chemlight_blue", "", 300, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Stacja paliw";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, -1, "" },
            { "ItemMap", "", 250, -1, "" },
            { "ItemCompass", "", 250, -1, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "ItemRadio", "", 150, -1, "" },
            { "FirstAidKit", "", 750, -1, "" },
           // { "NVGoggles", "", 10000, -1, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, -1, "" },
            { "Chemlight_green", "", 1500, -1, "" },
            { "Chemlight_blue", "", 1500, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Wyposażenie funkcjonariusza";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, -1, "" },
            { "FirstAidKit", "", 150, -1, "" },
            { "ItemRadio", "", 150, -1, "" },
           // { "NVGoggles", "", 2000, -1, "" },
           // { "hgun_P07_F", "", 7500, -1, "" },
           // { "hgun_P07_khk_F", "", 7500, -1, "" },
		   
		    { "HandGrenade_Stone", "Flashbang", 500, -1, "call life_coplevel >= 1" },
			{ "SmokeShellYellow", "Gaz łzawiący", 500, -1, "call life_coplevel >= 1" },
            { "hgun_P07_snds_F", "Paralizator", 2000, -1, "call life_coplevel >= 1" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 10000, -1, "call life_coplevel >= 1" },
            { "SMG_05_F", "", 10000, -1, "call life_coplevel >= 1" },
			
            { "arifle_SPAR_01_blk_F", "", 30000, -1, "call life_coplevel >= 2" },
			
            { "arifle_SPAR_01_GL_blk_F", "", 30000, -1, "call life_coplevel >= 3" },
            { "arifle_SPAR_02_blk_F", "", 30000, -1, "call life_coplevel >= 3" },
			
			{ "Rangefinder", "", 500, -1, "" },
            { "arifle_SPAR_03_blk_F", "", 30000, -1, "call life_coplevel >= 4" },
            { "srifle_DMR_03_F", "", 30000, -1, "call life_coplevel >= 4" },
            { "srifle_LRR_F", "", 30000, -1, "call life_coplevel >= 4" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, -1, "call life_coplevel >= 1" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, -1, "call life_coplevel >= 1" },
            { "30Rnd_9x21_Mag_SMG_02", "", 125, -1, "call life_coplevel >= 1" },
			
            { "30Rnd_556x45_Stanag", "", 130, -1, "call life_coplevel >= 2" },
			
            { "150Rnd_556x45_Drum_Mag_F", "", 200, -1, "call life_coplevel >= 3" },
			{ "1Rnd_SmokeYellow_Grenade_shell", "Gaz łzawiący", 200, -1, "call life_coplevel >= 3" },
			
            { "20Rnd_762x51_Mag", "", 200, -1, "call life_coplevel >= 4" },
			{ "7Rnd_408_Mag", "", 200, -1, "call life_coplevel >= 4" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, -1, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, -1, "call life_coplevel >= 1" },//Pistol Flashlight
			{ "acc_flashlight", "", 750, -1, "call life_coplevel >= 1" },
            { "optic_Aco_smg", "", 1200, -1, "call life_coplevel >= 1" },
            { "optic_ACO_grn_smg", "", 1200, -1, "call life_coplevel >= 1" },
            { "optic_Aco", "", 1200, -1, "call life_coplevel >= 1" },
            { "optic_ACO_grn", "", 1200, -1, "call life_coplevel >= 1" },
            { "optic_Holosight_smg_blk_F", "", 1200, -1, "call life_coplevel >= 1" },
            { "optic_Holosight_blk_F", "", 1200, -1, "call life_coplevel >= 1" },
			
            { "muzzle_snds_M", "", 1200, -1, "call life_coplevel >= 2" },
            { "bipod_01_F_blk", "", 1200, -1, "call life_coplevel >= 2" },
			
            { "optic_Arco_blk_F", "", 2500, -1, "call life_coplevel >= 3" },
            { "optic_MRCO", "", 2500, -1, "call life_coplevel >= 3" },
            { "optic_Hamr", "", 2500, -1, "call life_coplevel >= 3" },
            { "optic_ERCO_blk_F", "", 2500, -1, "call life_coplevel >= 3" },
			
            { "muzzle_snds_B", "", 2750, -1, "call life_coplevel >= 4" },
            { "optic_KHS_blk", "", 2750, -1, "call life_coplevel >= 4" },
            { "optic_LRPS", "", 2750, -1, "call life_coplevel >= 4" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "Wyposażenie medyczne";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, -1, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, -1, "" },
            { "ItemRadio", "", 150, -1, "" },
            { "Medikit", "", 150, -1, "" },
           // { "NVGoggles", "", 1200, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
