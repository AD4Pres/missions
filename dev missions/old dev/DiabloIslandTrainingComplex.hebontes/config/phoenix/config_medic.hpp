class medicp {
	name = "Flight Medic";
	description = "MEDIC!";
	traits[] = {
		{"Medic",true}
	};
	customVariables[] = {
		{"ace_medical_medicClass",2,true},
		{"TFAR_freq_sr",{"100.1","82","35.1","33","100","75","60","35"},true}
	};
	icon = "a3\ui_f\data\map\vehicleicons\iconmanmedic_ca.paa";

	defaultLoadout[] = {
            {"SPS_hk417_13_vfg_fde_f","","","sps_vortex_spitfire_gen2_x5_RMR_tan",{"20Rnd_762x51_Mag",20},{},""},
			{},
			{"sps_hk_vp9_stnd_black","","","",{"16Rnd_9x21_Mag",17},{},""},
			{"U_tweed_acu_summer_ocp_tuck_trop",{{"kat_IFAK",1},{"ACE_IR_Strobe_Item",1},{"ItemcTabHCam",1},{"ACE_CableTie",4},{"ACE_Flashlight_MX991",1},{"ACE_MapTools",1},{"ACE_microDAGR",1},{"16Rnd_9x21_Mag",2,17}}},
			{"V_tweed_msv_mk2_cell_45_1",{{"kat_IFAK",1},{"ACE_quikclot",11},{"SPS_20Rnd_762x51mm_M80A1_EPR",9,20},{"HandGrenade",2,1}}},{"B_simc_US_Molle_sturm_OCP_RTO",{{"ACE_quikclot",2},{"ACE_fieldDressing",15},{"ACE_morphine",6},{"ACE_epinephrine",6},{"ACE_salineIV_250",6},{"ACE_suture",6},{"ACE_splint",8},{"ACE_elasticBandage",14},{"ACE_packingBandage",14},{"ACE_painkillers",2,10}}},
			"H_tweed_ihps_tasc_rail","",
			{"Binocular","","","",{"Laserbatteries",1},{},""},
			{"ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ItemWatch","psq42_blk_icup"}
    };
	arsenalWeapons[] = {
        "SPS_hk337_hk_ctr_fde_f",
        "SPS_hk337_t_afg_ral8000_f",
        "SPS_hk337_t_afg_fde_f",
        "SPS_hk337_t_afg_black_f",
        "SPS_hk337_t_ctr_afg_ral8000_f",
        "SPS_hk337_t_ctr_afg_fde_f",
        "SPS_hk337_t_ctr_afg_black_f",
        "SPS_hk337_hk_ctr_afg_ral8000_f",
        "SPS_hk337_hk_ctr_afg_fde_f",
        "SPS_hk337_hk_ctr_afg_black_f",
        "SPS_hk337_afg_ral8000_f",
        "SPS_hk337_afg_fde_f",
        "SPS_hk337_afg_black_f",
        "SPS_hk337_hk_ctr_black_f",
        "SPS_hk337_hk_ctr_ral8000_f",
        "SPS_hk337_t_ctr_black_f",
        "SPS_hk337_t_ctr_fde_f",
        "SPS_hk337_t_ctr_ral8000_f",
        "SPS_hk337_black_f",
        "SPS_hk337_fde_f",
        "SPS_hk337_ral8000_f",
        "SPS_hk337_t_black_f",
        "SPS_hk337_t_fde_f",
        "SPS_hk337_t_ral8000_f",
        "SPS_hk337_vfg_black_f",
        "SPS_hk337_vfg_fde_f",
        "SPS_hk337_vfg_ral8000_f",
        "SPS_hk337_hk_ctr_vfg_black_f",
        "SPS_hk337_hk_ctr_vfg_fde_f",
        "SPS_hk337_hk_ctr_vfg_ral8000_f",
        "SPS_hk337_t_ctr_vfg_black_f",
        "SPS_hk337_t_ctr_vfg_fde_f",
        "SPS_hk337_t_ctr_vfg_ral8000_f",
        "SPS_hk337_t_vfg_black_f",
        "SPS_hk337_t_vfg_ral8000_f",
        "SPS_hk337_t_vfg_fde_f",
        "SPS_EOTech_Black_3xMAG_up",
        "SPS_EOTech_Tan50",
        "sps_aimpoint_T1_Black",
        "SPS_EOTech_Tan_3xMAG_up",
        "ACE_optic_SOS_PIP",
        "sps_aimpoint_T1_Sand",
        "lxim_equipment_xm157_prototype",
        "sps_aimpoint_T1_3xMAG_up",
        "SPS_EOTech_Black",
        "SPS_EOTech_Tan",
        "sps_vortex_spitfire_gen2_x5_black",
        "sps_vortex_spitfire_gen2_x5_RMR_black",
        "sps_aimpoint_T1_Black50",
        "sps_aimpoint_T1_3xMAG_up_Black",
        "SPS_EOTech_Vudu_Black",
        "lxim_equipment_optic_DMS",
        "sps_aimpoint_T1_Sand50",
        "sps_vortex_spitfire_gen2_x5_RMR_tan",
        "SPS_EOTech_Black50",
        "sps_vortex_spitfire_gen2_x5_tan",
        "sps_M300C",
        "DBAL_A4_Top_Mid_IR_Pointer_Tan",
        "DBAL_A4_IR_Pointer",
        "DBAL_A4_Top_Fwd_IR_Pointer",
        "sps_M300C_MAWL_ext_IR_tan",
        "sps_M300C_MAWL_IR_tan",
        "DBAL_A4_Top_Mid_LAMG_IR_Pointer",
        "DBAL_A4_Top_Mid_IR_Pointer",
        "sps_M300C_RAID_IR_tan",
        "sps_M300C_MAWL_IR",
        "sps_M300C_MAWL_LAMG_IR_tan",
        "sps_M300C_RAID_LAMG_IR",
        "sps_M300C_RAID_IR",
        "sps_M300C_MAWL_smr_IR",
        "sps_M300C_MAWL_smr_IR_tan",
        "DBAL_A4_Top_Rwd_LAMG_IR_Pointer",
        "DBAL_A4_Top_Rwd_IR_Pointer_Tan",
        "DBAL_A4_Top_Rwd_IR_Pointer",
        "DBAL_A4_Top_Fwd_IR_Pointer_Tan",
        "sps_M300C_RAID_ext_IR",
        "DBAL_A4_Top_Fwd_LAMG_IR_Pointer",
        "sps_M300C_tan",
        "sps_M300C_MAWL_ext_IR",
        "ACE_DBAL_A3_Green",
        "sps_M300C_RAID_smr_IR_tan",
        "DBAL_A4_Top_Fwd_LAMG_IR_Pointer_Tan",
        "sps_M300C_RAID_ext_IR_tan",
        "DBAL_A4_Top_Rwd_LAMG_IR_Pointer_Tan",
        "sps_M300C_RAID_smr_IR",
        "DBAL_A4_IR_Pointer_Tan",
        "sps_M300C_RAID_LAMG_IR_tan",
        "sps_M300C_MAWL_LAMG_IR",
        "DBAL_A4_Top_Mid_LAMG_IR_Pointer_Tan",
        "muzzle_snds_HX762_black_H",
        "muzzle_snds_HX762_RAL8000_H",
        "muzzle_snds_HX762_raw_H",
        "muzzle_snds_HX762_grey_H",
        "muzzle_snds_HXQD762_FDE_H",
        "muzzle_snds_One_FDE_H",
        "muzzle_snds_One_Sand_H",
        "muzzle_snds_HXQD762_black_H",
        "muzzle_snds_HX762_FDE_H",
        "muzzle_snds_One_black_H",
        "sps_aimpoint_T1_Black_High",
        "sps_aimpoint_T1_Black_High50",
        "sps_aimpoint_T1_High",
        "sps_aimpoint_T1_High50",
        "DBAL_A4_Top_Fwd_High_IR_Pointer_Tan",
        "DBAL_A4_Top_Rwd_High_IR_Pointer_Tan",
        "DBAL_A4_Top_Fwd_High_IR_Pointer",
        "DBAL_A4_Top_Mid_High_IR_Pointer",
        "DBAL_A4_Top_Rwd_High_IR_Pointer",
        "sps_M300C_MAWL_high_ext_IR",
        "sps_M300C_MAWL_high_IR_tan",
        "sps_M300C_MAWL_high_IR",
        "sps_M300C_RAID_high_ext_IR_tan",
        "sps_M300C_RAID_high_ext_IR",
        "sps_M300C_RAID_high_IR_tan",
        "sps_M300C_RAID_high_IR",
        "sps_M300C_MAWL_high_ext_IR_tan",
        "DBAL_A4_Top_Mid_High_IR_Pointer_Tan",
        "optic_DMS_weathered_F",
        "optic_DMS_weathered_Kir_F",
        "optic_DMS"
    };
    arsenalMagazines[] = {
        "SPS_HKG3PMAG_30Rnd_300BLK_110_T",
        "SPS_HKG3PMAG_30Rnd_300BLK_110_B",
        "SPS_HKG3PMAG_30Rnd_300BLK_110_S"
    };
	arsenalItems[] = {
		"FIR_Fighter_Pilot_Nomex",
		"FIR_Fighter_Pilot_Nomex2",
		"FIR_Fighter_Pilot_Nomex3",
		"FIR_Fighter_Pilot_Nomex4",
		"FIR_Fighter_Pilot_Nomex5",
		"FIR_Fighter_Pilot_Nomex6",
		"FIR_Fighter_Pilot_Nomex7",
		"FIR_Fighter_Pilot_Nomex8",
		"FIR_Fighter_Pilot_USAF_Agg_Nomex7",
		"FIR_Fighter_Pilot_USAF_agg_64agrs_Nomex6",
		"FIR_Fighter_Pilot_USAF_agg_64agrs_Nomex7",
		"FIR_Fighter_Pilot_USAF_Agg_Nomex6",
		"FIR_Fighter_Pilot_USAF_agg_64agrs_Nomex5",
		"FIR_Fighter_Pilot_USAF_Agg_Nomex5",
		"FIR_Fighter_Pilot_USAF_agg_64agrs_Nomex4",
		"FIR_Fighter_Pilot_USAF_agg_64agrs_Nomex3",
		"FIR_Fighter_Pilot_USAF_Agg_Nomex3",
		"FIR_Fighter_Pilot_USAF_Agg_Nomex2",
		"FIR_Fighter_Pilot_USAF_Agg_Nomex4",
		"FIR_Fighter_Pilot_USAF_agg_64agrs_Nomex2",
		"FIR_Fighter_Pilot_USAF_agg_64agrs_Nomex",
		"FIR_Fighter_Pilot_USAF_Agg_Nomex",
		"FIR_HGU56P_Skull_Death",
		"FIR_HGU56P_Skull",
		"FIR_hgu26p",
		"FIR_hgu26p_camo",
		"FIR_HGU33P",
		"FIR_HGU33P_VF1",
		"FIR_HGU33P_VF84",
		"FIR_USHelmetType2",
		"FIR_USHelmetType2_USMC",
		"FIR_USHelmetType2_Navy",
		"FIR_USHelmetType2_VF103",
		"FIR_USHelmetType2_VF154",
		"FIR_USHelmetType1",
		"FIR_USHelmetType1_Navy",
		"FIR_USHelmetType1_VF31",
		"FIR_USHelmetType1_Agg",
		"FIR_HGU55PJ",
		"FIR_HGU84P",
		"FIR_HGU84P_Green",
		"FIR_HGU84P_Marpat_D",
		"FIR_HGU84P_Marpat_W",
		"FIR_HGU84P_Custom_Example",
		"FIR_HGU84P_Black",
		"FIR_USHelmetType1_USMC",
		"FIR_USHelmetType2_USAF_80s",
		"FIR_HGU33P_VF111",
		"H_PilotHelmetHeli_B",
		"H_CrewHelmetHeli_B",
		"FIR_USARMY_Heli_Uniform_Multicam",
		"FIR_USARMY_Heli_Uniform",
		"kat_IV_16",
		"kat_aatKit",
		"kat_accuvac",
		"ACE_adenosine",
		"ACE_epinephrine",
		"kat_AFAK",
		"kat_X_AED",
		"kat_amiodarone",
		"kat_CarbonateItem",
		"kat_atropine",
		"kat_AED",
		"ACE_elasticBandage",
		"ACE_packingBandage",
		"kat_crossPanel",
		"ACE_bodyBag",
		"kat_plate",
		"kat_Bubble_Wrap_Item",
		"kat_BVM",
		"kat_CaffeineItem",
		"kat_chestSeal",
		"kat_clamp",
		"ACE_EarPlugs",
		"kat_vacuum",
		"kat_EACA",
		"kat_etomidate",
		"kat_IO_FAST",
		"kat_fentanyl",
		"KAT_Empty_bloodIV_250",
		"KAT_Empty_bloodIV_500",
		"kat_flumazenil",
		"kat_guedel",
		"ACE_fieldDressing",
		"kat_IFAK",
		"kat_ketamine",
		"kat_larynx",
		"kat_lidocaine",
		"kat_lorazepam",
		"kat_suction",
		"kat_MFAK",
		"kat_nalbuphine",
		"kat_naloxone",
		"kat_ncdKit",
		"kat_nitroglycerin",
		"kat_norepinephrine",
		"kat_PainkillerItem",
		"kat_PenthroxItem",
		"kat_PervitinItem",
		"kat_phenylephrine",
		"kat_Pulseoximeter",
		"kat_oxygenTank_300_Item",
		"kat_oxygenTank_150_Item",
		"kat_pocketBVM",
		"kat_retractor",
		"ACE_quikclot",
		"kat_scalpel",
		"kat_sealant",
		"ACE_splint",
		"kat_stethoscope",
		"ACE_surgicalKit",
		"ACE_suture",
		"ACE_tourniquet",
		"kat_TXA",
		"ACE_personalAidKit"
		
	};
	arsenalBackpacks[] = {
		"lxim_backpack_Backpack_Kitbag_Medic_Black",
		"lxim_backpack_Backpack_Kitbag_Medic_RGR",
		"lxim_backpack_Backpack_Kitbag_Medic_Tan",
		"lxim_backpack_Backpack_Kitbag_Medic_White",
		"lxim_backpack_Backpack_Kitbag_Medic_Coyote",
		"lxim_backpack_Backpack_Kitbag_Medic_MTP",
		"lxim_backpack_Backpack_Kitbag_Medic_Sage",
		"lxim_backpack_Backpack_Kitbag_Medic_Green"
	};
};