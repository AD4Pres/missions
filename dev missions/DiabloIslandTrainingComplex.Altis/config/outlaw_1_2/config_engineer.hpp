class engineer12 {
	name = "Combat Engineer";
	description = "makes things go boom or not to go boom";
	traits[] = {
		{"Engineer",true}
	};
	customVariables[] = {
		{"ace_isEngineer",2,true},
		{"TFAR_freq_sr",{"100.1","120","120.1","33","100","75","60","35"},true},
        {"YMF_teamcolor", "YELLOW", true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconmanengineer_ca.paa";

	defaultLoadout[] = {
            {"SPS_hk417_13_vfg_fde_f","","","sps_vortex_spitfire_gen2_x5_RMR_tan",{"20Rnd_762x51_Mag",20},{},""}, 
			{}, 
			{"sps_hk_vp9_stnd_black","","","",{"16Rnd_9x21_Mag",17},{},""}, 
			{"U_tweed_acu_summer_ocp_blench",{{"ACE_IR_Strobe_Item",1},{"ItemcTabHCam",1},{"ACE_CableTie",4},{"ACE_Flashlight_MX991",1},{"ACE_MapTools",1},{"ACE_microDAGR",1},{"16Rnd_9x21_Mag",2,17}}},
			{"V_tweed_msv_mk2_cell_45_1",{{"kat_IFAK",1}, {"SPS_20Rnd_762x51mm_M80A1_EPR",9,20},{"HandGrenade",2,1}}}, 
			{"B_simc_US_Molle_sturm_OCP_etool",{{"ACE_DefusalKit",1}, {"ACE_EntrenchingTool",1}, {"ACE_Flashlight_MX991",1}, {"ACE_Clacker",1}, {"ACE_wirecutter",1}, {"B_IR_Grenade",1,1}, {"ACE_M14",1,1}, {"SmokeShellBlue",1,1}, {"SmokeShellPurple",1,1}, {"SmokeShellRed",1,1}, {"SmokeShell",2,1}, {"ClaymoreDirectionalMine_Remote_Mag",1,1}, {"DemoCharge_Remote_Mag",2,1}, {"tsp_popperCharge_mag",3,1}, {"tsp_stickCharge_mag",1,1}}},
			"H_tweed_ihps_tasc_rail","",
			{"Binocular","","","",{},{},""}, 
			{"ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ItemWatch","psq42_blk_icup"}
    };
	
	arsenalWeapons[] = {
		"SPS_hk417_13_afg_black_f",
		"SPS_hk417_13_afg_fde_f",
		"SPS_hk417_13_afg_ral8000_f",
		"SPS_hk417_13_vfg_black_f",
		"SPS_hk417_13_vfg_fde_f",
		"SPS_hk417_13_vfg_ral8000_f",
		"SPS_hk417_13_glm_fde_f",
		"SPS_hk417_13_glm_ral8000_f",
		"SPS_hk417_16_afg_black_f",
		"SPS_hk417_16_afg_fde_f",
		"SPS_hk417_16_vfg_black_f",
		"SPS_hk417_16_vfg_fde_f",
		"SPS_hk417_16_vfg_ral8000_f",
		"SPS_hk417_16_glm_black_f",
		"SPS_hk417_16_glm_ral8000_f",
		"SPS_hk417_16_glm_fde_f",
		"SPS_EOTech_Black50",
		"SPS_EOTech_Tan",
		"SPS_EOTech_Black",
		"SPS_EOTech_Tan50",
		"SPS_Optic_SnB_US_3_20_RMR_RAL8000",
		"sps_vortex_spitfire_gen2_x5_RMR_tan",
		"SPS_Optic_SnB_US_3_20_RMR_Black",
		"sps_vortex_spitfire_gen2_x5_RMR_black",
		"DBAL_A4_IR_Pointer",
		"DBAL_A4_Top_Rwd_High_IR_Pointer",
		"sps_M300C",
		"DBAL_A4_Top_Fwd_IR_Pointer",
		"sps_M300C_MAWL_ext_IR_tan",
		"DBAL_A4_Top_Mid_IR_Pointer_Tan",
		"sps_M300C_MAWL_IR_tan",
		"DBAL_A4_Top_Mid_IR_Pointer",
		"sps_M300C_RAID_IR_tan",
		"sps_M300C_MAWL_IR",
		"sps_M300C_RAID_high_IR_tan",
		"DBAL_A4_Top_Mid_LAMG_IR_Pointer",
		"sps_M300C_RAID_high_ext_IR_tan",
		"DBAL_A4_Top_Fwd_High_IR_Pointer_Tan",
		"sps_M300C_RAID_LAMG_IR",
		"sps_M300C_MAWL_LAMG_IR_tan",
		"sps_M300C_RAID_IR",
		"sps_M300C_MAWL_smr_IR",
		"DBAL_A4_Top_Rwd_IR_Pointer_Tan",
		"DBAL_A4_Top_Rwd_IR_Pointer",
		"DBAL_A4_Top_Rwd_LAMG_IR_Pointer",
		"sps_M300C_MAWL_smr_IR_tan",
		"DBAL_A4_Top_Fwd_IR_Pointer_Tan",
		"sps_M300C_RAID_ext_IR",
		"DBAL_A4_Top_Rwd_High_IR_Pointer_Tan",
		"sps_M300C_tan",
		"DBAL_A4_Top_Fwd_LAMG_IR_Pointer",
		"sps_M300C_MAWL_high_ext_IR",
		"sps_M300C_MAWL_ext_IR",
		"sps_M300C_RAID_smr_IR_tan",
		"sps_M300C_MAWL_high_IR",
		"DBAL_A4_Top_Fwd_LAMG_IR_Pointer_Tan",
		"sps_M300C_MAWL_high_IR_tan",
		"DBAL_A4_Top_Mid_High_IR_Pointer",
		"DBAL_A4_Top_Mid_High_IR_Pointer_Tan",
		"sps_M300C_MAWL_high_ext_IR_tan",
		"sps_M300C_RAID_ext_IR_tan",
		"DBAL_A4_Top_Rwd_LAMG_IR_Pointer_Tan",
		"sps_M300C_RAID_smr_IR",
		"sps_M300C_RAID_high_IR",
		"DBAL_A4_IR_Pointer_Tan",
		"sps_M300C_RAID_LAMG_IR_tan",
		"DBAL_A4_Top_Mid_LAMG_IR_Pointer_Tan",
		"sps_M300C_MAWL_LAMG_IR",
		"sps_M300C_RAID_high_ext_IR",
		"DBAL_A4_Top_Fwd_High_IR_Pointer",
		"muzzle_snds_HX762_black_H",
		"muzzle_snds_HX762_RAL8000_H",
		"muzzle_snds_HX762_raw_H",
		"muzzle_snds_HX762_grey_H",
		"muzzle_snds_HXQD762_FDE_H",
		"muzzle_snds_One_FDE_H",
		"muzzle_snds_One_Sand_H",
		"muzzle_snds_HXQD762_black_H",
		"muzzle_snds_HX762_FDE_H",
		"sps_atlas_bipod_m_blk",
		"muzzle_snds_One_black_H",
		"sps_vortex_spitfire_gen2_x5_black",
		"sps_vortex_spitfire_gen2_x5_tan",
		"SPS_Optic_SnB_US_3_20_RMR_FDE",
		"LXIM_equipment_ace_xm157_prototype"
	};
	arsenalMagazines[] = {
		"SPS_20Rnd_762x51mm_M80A1_EPR_Tracer",
		"SPS_20Rnd_762x51mm_M80A1_EPR_IR",
		"SPS_20Rnd_762x51mm_M80A1_EPR",
		"ACE_HuntIR_M203",
		"1Rnd_HE_Grenade_shell",
		"CUP_FlareYellow_M203",
		"CUP_1Rnd_HE_M203",
		"CUP_1Rnd_HEDP_M203",
		"CUP_FlareRed_M203",
		"CUP_1Rnd_StarCluster_Green_M203",
		"CUP_1Rnd_StarCluster_Red_M203",
		"CUP_FlareWhite_M203",
		"CUP_1Rnd_StarFlare_Red_M203",
		"CUP_FlareGreen_M203",
		"CUP_1Rnd_StarFlare_White_M203",
		"CUP_1Rnd_StarFlare_Green_M203",
		"CUP_1Rnd_StarCluster_White_M203",
		"1Rnd_SmokeBlue_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeOrange_Grenade_shell",
		"1Rnd_SmokePurple_Grenade_shell",
		"1Rnd_SmokeRed_Grenade_shell",
		"1Rnd_Smoke_Grenade_shell",
		"1Rnd_SmokeYellow_Grenade_shell"
	};
	arsenalItems[] = {
		"ACE_wirecutter",
        "ACE_FlareTripMine_Mag",
		"SLAMDirectionalMine_Wire_Mag",
		"ClaymoreDirectionalMine_Remote_Mag",
		"SatchelCharge_Remote_Mag",
		"ATMine_Range_Mag",
		"DemoCharge_Remote_Mag",
		"lxim_breaching_BreachingCharge_Mag",
		"ToolKit",
		"MineDetector",
		"ACE_Clacker",
		"ACE_M26_Clacker",
		"ACE_EntrenchingTool",
		"ACE_DefusalKit"
	};
	arsenalBackpacks[] = {};
};