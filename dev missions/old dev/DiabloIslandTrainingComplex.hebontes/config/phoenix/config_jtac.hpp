class fac {
	name = "FAC";
	description = "Big bada boom";
	traits[] = {
		{"UAVHacker",true}
	};
	customVariables[] = {
		{"YMF_iscom", true, true},
		{"draWhitelisted",TRUE,TRUE},
		{"TFAR_freq_sr",{"100.1","110","120","33","100","75","60","35"},true}
	};
    
	icon = "a3\ui_f\data\map\vehicleicons\iconmanexplosive_ca.paa";

	defaultLoadout[] = {
            {"SPS_hk417_13_vfg_fde_f","","","sps_vortex_spitfire_gen2_x5_RMR_tan",{"20Rnd_762x51_Mag",20},{},""}, 
			{}, 
			{"sps_hk_vp9_stnd_black","","","",{"16Rnd_9x21_Mag",17},{},""}, 
			{"U_tweed_acu_summer_ocp_tuck_trop",{{"kat_IFAK",1},{"ACE_IR_Strobe_Item",1},{"ItemcTabHCam",1},{"ACE_CableTie",4},{"ACE_Flashlight_MX991",1},{"ACE_MapTools",1},{"ACE_microDAGR",1},{"16Rnd_9x21_Mag",2,17}}},
			{"V_tweed_msv_mk2_cell_45_1",{{"kat_IFAK",1},{"SPS_20Rnd_762x51mm_M80A1_EPR",9,20},{"HandGrenade",2,1}}}, 
			{"B_simc_US_Molle_sturm_OCP_RTO",{{"ACE_IR_Strobe_Item",2},{"ACE_SpraypaintBlack",1},{"ACE_SpraypaintBlue",1},{"ACE_SpraypaintGreen",1},{"ACE_SpraypaintRed",1},{"ACE_SpraypaintWhite",1},{"ACE_SpraypaintYellow",1},{"LXIM_vs17_vs17",2},{"ItemAndroidMisc",1},{"ACE_SpottingScope",1},{"ACE_Chemlight_HiGreen",1,1},{"ACE_Chemlight_HiRed",1,1},{"ACE_Chemlight_HiWhite",1,1},{"ACE_Chemlight_IR",2,1},{"ACE_Chemlight_UltraHiOrange",1,1},{"B_IR_Grenade",2,1},{"SmokeShellYellow",2,1},{"SmokeShellPurple",2,1},{"SmokeShellOrange",2,1},{"SmokeShellGreen",2,1},{"SmokeShellBlue",2,1},{"SmokeShellRed",1,1},{"ACE_HandFlare_Yellow",1,1},{"ACE_HandFlare_White",1,1},{"ACE_HandFlare_Red",1,1},{"ACE_HandFlare_Green",1,1},{"MS_Strobe_Mag_2",2,1},{"MS_Strobe_Mag_1",2,1}}},
			"H_tweed_ihps_tasc_rail","",
			{"LXIM_equipment_Vector_Designator","","","",{"Laserbatteries",1},{},""}, 
			{"ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ItemWatch","psq42_blk_icup"}
    };
	arsenalWeapons[] = {};
	arsenalMagazines[] = {};
	arsenalItems[] = {
		"LXIM_vs17_vs17",
		"ACE_SpottingScope",
		"ItemcTabMisc",
		"ItemcTab",
		"ItemAndroidMisc",
		"ACE_artilleryTable",
		"ACE_RangeTable_82mm",
		"ACE_PlottingBoard",
		"LXIM_equipment_Vector_Designator",
		"LXIM_equipment_Vector_Designator_NVG",
		"ACE_VectorDay",
		"ACE_Vector",
		"Laserdesignator",
		"Laserdesignator_03",
		"Camera_lxWS",
		"B_UavTerminal",
		"YMF_vs17_vs17",
		"ACE_UAVBattery",
		"ACE_Kestrel4500"
	};
	arsenalBackpacks[] = {
		"B_simc_US_Molle_sturm_OCP_RTO",
		"B_simc_US_Molle_sturm_OCP_RTO_wasser"
	};
};