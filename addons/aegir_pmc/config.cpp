class cfgPatches
{
  class NPC_Aegir_PMC
  {
    units[]={"NPC_PMC_Commander","NPC_PMC_AA","NPC_PMC_AA_Assistant","NPC_PMC_Marksman","NPC_PMC_Grenadier","NPC_PMC_AT_Specialist","NPC_PMC_AT_Specialist_Assistant","NPC_PMC_JTAC","NPC_PMC_Rifleman_LAT","NPC_PMC_Rifleman","NPC_PMC_Rifleman_SAW","NPC_PMC_SAW_Assistant","NPC_PMC_2IC","NPC_PMC_Team_Lead","NPC_PMC_Squad_Lead","NPC_PMC_Vehicle_Crew","NPC_PMC_Pilot","NPC_PMC_Crewman","NPC_PMC_MH6M_Littlebird","NPC_PMC_OH6M_Littlebird","NPC_PMC_AH6M_Littlebird","NPC_PMC_MKV_SOC","NPC_PMC_MRZR_4","NPC_PMC_M1239_AUV_CROWS_M2","NPC_PMC_M1245_CROWS_M2","NPC_PMC_M1245_Deploy_CROWS_M2","NPC_PMC_M1238A1_ASV_CROWS_M2","NPC_PMC_M1078A1R_SOV","NPC_PMC_M1084A1R_SOV"};
    weapons[]={"NPC_rhs_weap_hk416d145_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","NPC_rhs_weap_mk18_grip_KAC_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","NPC_rhs_weap_fim92","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","NPC_rhs_weap_m14ebrri_rhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod","NPC_hlc_pistol_P226R_HLC_Optic_Romeo1_RX","NPC_rhs_weap_mk18_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_T1rhsusf_acc_grip2","NPC_rhs_weap_smaw_rhs_weap_optic_smaw","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_su230a_mrdsrhsusf_acc_grip3","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_grip2","NPC_rhs_weap_M136","NPC_rhs_weap_mk18_KAC_bk_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","NPC_rhs_weap_m249_pip_rhsusf_acc_saw_bipod","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","NPC_rhs_weap_hk416d10_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_tanrhsusf_acc_eotech_552","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552"};
    requiredVersion=0.1;
    requiredAddons[]={"cTab","acre_sys_prc152","acre_sys_prc343","A3_Weapons_F","ace_vector","rhsusf_c_weapons","A3_Characters_F","CuratorOnly_Characters_F_BLUFOR","niaweapons_226","rhsusf_c_troops"};
  };
};

class cfgFactionClasses
{
  class NPC_Aegir_PMC
  {
    icon="\npc_common\data\ui\npc_logo_small.paa";
    displayName="Ægir PMC";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class rhs_weap_hk416d145;
  class rhs_weap_mk18_grip_KAC_bk;
  class rhs_weap_fim92;
  class rhs_weap_m4a1_blockII_bk;
  class rhs_weap_m14ebrri;
  class hlc_pistol_P226R;
  class rhs_weap_mk18_m320;
  class rhs_weap_smaw;
  class rhs_weap_m27iar;
  class rhs_weap_M136;
  class rhs_weap_mk18_KAC_bk;
  class rhs_weap_m249_pip;
  class rhs_weap_hk416d10_m320;
  class rhs_weap_hk416d10_LMT;

  class NPC_rhs_weap_hk416d145_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip: rhs_weap_hk416d145
  {
    displayName="HK416 D14.5";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_tan";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_kac_grip";
      };
    };
  };

  class NPC_rhs_weap_mk18_grip_KAC_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip: rhs_weap_mk18_grip_KAC_bk
  {
    displayName="Mk 18 Mod 1 (AFG/SOPMOD Stock)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_g33_xps3";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_kac_grip";
      };
    };
  };

  class NPC_rhs_weap_fim92: rhs_weap_fim92
  {
    displayName="FIM-92F";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip: rhs_weap_m4a1_blockII_bk
  {
    displayName="M4A1 Block II (Black Rail)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_kac_grip";
      };
    };
  };

  class NPC_rhs_weap_m14ebrri_rhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod: rhs_weap_m14ebrri
  {
    displayName="M14 EBR-RI";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_nxs_3515x50_md";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_harris_bipod";
      };
    };
  };

  class NPC_hlc_pistol_P226R_HLC_Optic_Romeo1_RX: hlc_pistol_P226R
  {
    displayName="SigSauer P226R";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="HLC_Optic_Romeo1_RX";
      };
    };
  };

  class NPC_rhs_weap_mk18_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR: rhs_weap_mk18_m320
  {
    displayName="Mk 18 Mod 1 (M320)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
    };
  };

  class NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_T1rhsusf_acc_grip2: rhs_weap_m4a1_blockII_bk
  {
    displayName="M4A1 Block II (Black Rail)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_g33_T1";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_grip2";
      };
    };
  };

  class NPC_rhs_weap_smaw_rhs_weap_optic_smaw: rhs_weap_smaw
  {
    displayName="MK153 Mod 0 SMAW (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_weap_optic_smaw";
      };
    };
  };

  class NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_su230a_mrdsrhsusf_acc_grip3: rhs_weap_m27iar
  {
    displayName="M27 IAR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_su230a_mrds";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_grip3";
      };
    };
  };

  class NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_grip2: rhs_weap_m4a1_blockII_bk
  {
    displayName="M4A1 Block II (Black Rail)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_grip2";
      };
    };
  };

  class NPC_rhs_weap_M136: rhs_weap_M136
  {
    displayName="M136 (HEAT)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_mk18_KAC_bk_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip: rhs_weap_mk18_KAC_bk
  {
    displayName="Mk 18 Mod 1 (Black Rail/SOPMOD Stock)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_tan";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_kac_grip";
      };
    };
  };

  class NPC_rhs_weap_m249_pip_rhsusf_acc_saw_bipod: rhs_weap_m249_pip
  {
    displayName="M249 PIP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_saw_bipod";
      };
    };
  };

  class NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip: rhs_weap_m27iar
  {
    displayName="M27 IAR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_g33_xps3";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_kac_grip";
      };
    };
  };

  class NPC_rhs_weap_hk416d10_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR: rhs_weap_hk416d10_m320
  {
    displayName="HK416 D10 (M320)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
    };
  };

  class NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_tanrhsusf_acc_eotech_552: rhs_weap_hk416d10_LMT
  {
    displayName="HK416 D10 (SOPMOD Stock)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_tan";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_eotech_552";
      };
    };
  };

  class NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552: rhs_weap_hk416d10_LMT
  {
    displayName="HK416 D10 (SOPMOD Stock)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_nt4_black";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_eotech_552";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
    };
  };

};

class cfgVehicles
{
  class B_Soldier_F;
  class rhsusf_falconii_coy;
  class B_Carryall_cbr;
  class B_Kitbag_cbr;
  class RHS_MELB_MH6M;
  class RHS_MELB_H6M;
  class RHS_MELB_AH6M;
  class rhsusf_mkvsoc;
  class rhsusf_mrzr4_d;
  class rhsusf_M1239_M2_socom_d;
  class rhsusf_m1245_m2crows_socom_d;
  class rhsusf_m1245_m2crows_socom_deploy;
  class rhsusf_M1238A1_M2_socom_d;
  class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom;
  class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom;

  class NPC_PMC_Commander: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Commander";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d145_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d145_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellPurple","SmokeShellPurple","SmokeShellPurple","SmokeShellOrange","SmokeShellOrange","SmokeShellOrange","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellYellow","SmokeShellYellow","SmokeShellYellow","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellPurple","SmokeShellPurple","SmokeShellPurple","SmokeShellOrange","SmokeShellOrange","SmokeShellOrange","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","SmokeShellBlue","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Commander_pack";
  };

  class NPC_PMC_AA: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="AA";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"NPC_rhs_weap_mk18_grip_KAC_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","NPC_rhs_weap_fim92","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_mk18_grip_KAC_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","NPC_rhs_weap_fim92","Put","Throw"};
    items[]={"ACRE_PRC343","ACRE_PRC152","ItemcTab","ItemAndroid"};
    respawnItems[]={"ACRE_PRC343","ACRE_PRC152","ItemcTab","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","SmokeShell","SmokeShell","SmokeShellGreen","rhs_fim92_mag"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","SmokeShell","SmokeShell","SmokeShellGreen","rhs_fim92_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2","FPGP_PC_Tan_1","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2","FPGP_PC_Tan_1","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_AA_pack";
  };

  class NPC_PMC_AA_Assistant: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="AA Assistant";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    respawnItems[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","SmokeShell","SmokeShell","SmokeShellGreen","rhs_fim92_mag","rhs_fim92_mag"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","SmokeShell","SmokeShell","SmokeShellGreen","rhs_fim92_mag","rhs_fim92_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2","FPGP_PC_Tan_4","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2","FPGP_PC_Tan_4","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_AA_Assistant_pack";
  };

  class NPC_PMC_Marksman: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Marksman";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"NPC_rhs_weap_m14ebrri_rhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod","NPC_hlc_pistol_P226R_HLC_Optic_Romeo1_RX","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_m14ebrri_rhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod","NPC_hlc_pistol_P226R_HLC_Optic_Romeo1_RX","Put","Throw"};
    items[]={"ACRE_PRC152","ACRE_PRC343"};
    respawnItems[]={"ACRE_PRC152","ACRE_PRC343"};
    magazines[]={"hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhs_mag_m67","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShell","SmokeShell","SmokeShell"};
    respawnMagazines[]={"hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m80_Mag","rhs_mag_m67","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShell","SmokeShell","SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4","FPGP_PC_Tan_4","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_4","FPGP_PC_Tan_4","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Marksman_pack";
  };

  class NPC_PMC_Grenadier: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Grenadier";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"NPC_rhs_weap_mk18_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_mk18_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_m714_White","rhs_mag_m714_White","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","rhs_mag_m715_Green","rhs_mag_m715_Green","rhs_mag_m713_Red","SmokeShell","SmokeShell","HandGrenade","HandGrenade","ACE_Chemlight_HiWhite","ACE_Chemlight_HiWhite"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_m714_White","rhs_mag_m714_White","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","rhs_mag_m715_Green","rhs_mag_m715_Green","rhs_mag_m713_Red","SmokeShell","SmokeShell","HandGrenade","HandGrenade","ACE_Chemlight_HiWhite","ACE_Chemlight_HiWhite"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Grenadier_pack";
  };

  class NPC_PMC_AT_Specialist: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="AT Specialist";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_T1rhsusf_acc_grip2","NPC_rhs_weap_smaw_rhs_weap_optic_smaw","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_g33_T1rhsusf_acc_grip2","NPC_rhs_weap_smaw_rhs_weap_optic_smaw","Put","Throw"};
    items[]={"ItemAndroid","ItemcTab","ACRE_PRC152","ACRE_PRC343"};
    respawnItems[]={"ItemAndroid","ItemcTab","ACRE_PRC152","ACRE_PRC343"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_smaw_HEAA","rhs_mag_smaw_SR"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_smaw_HEAA","rhs_mag_smaw_SR"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_AT_Specialist_pack";
  };

  class NPC_PMC_AT_Specialist_Assistant: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="AT Specialist Assistant";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_su230a_mrdsrhsusf_acc_grip3","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_su230a_mrdsrhsusf_acc_grip3","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_smaw_HEAA","rhs_mag_smaw_HEAA"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_smaw_HEAA","rhs_mag_smaw_HEAA"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_AT_Specialist_Assistant_pack";
  };

  class NPC_PMC_JTAC: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="JTAC";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_hk416d145_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_hk416d145_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ItemcTab","ItemAndroid","ACRE_PRC152","ACRE_PRC343"};
    respawnItems[]={"ItemcTab","ItemAndroid","ACRE_PRC152","ACRE_PRC343"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellPurple","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","SmokeShellPurple","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_JTAC_pack";
  };

  class NPC_PMC_Rifleman_LAT: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Rifleman LAT";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_grip2","NPC_rhs_weap_M136","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMRrhsusf_acc_grip2","NPC_rhs_weap_M136","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Rifleman_LAT_pack";
  };

  class NPC_PMC_Rifleman: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Rifleman";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_mk18_KAC_bk_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_mk18_KAC_bk_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid","ToolKit"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid","ToolKit"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Rifleman_pack";
  };

  class NPC_PMC_Saboteur: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Saboteur";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_mk18_KAC_bk_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_mk18_KAC_bk_rhsusf_acc_nt4_tanrhsusf_acc_ACOG_RMRrhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","IEDUrbanSmall_Remote_Mag","IEDUrbanSmall_Remote_Mag","IEDUrbanBig_Remote_Mag"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","IEDUrbanSmall_Remote_Mag","IEDUrbanSmall_Remote_Mag","IEDUrbanBig_Remote_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Rifleman_pack";
    canDeactivateMines = true;              // Can this character deactivate mines?
    engineer = true;    
  };

  class NPC_PMC_Rifleman_SAW: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Rifleman SAW";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"NPC_rhs_weap_m249_pip_rhsusf_acc_saw_bipod","NPC_hlc_pistol_P226R_HLC_Optic_Romeo1_RX","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_m249_pip_rhsusf_acc_saw_bipod","NPC_hlc_pistol_P226R_HLC_Optic_Romeo1_RX","Put","Throw"};
    items[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    respawnItems[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    magazines[]={"hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    respawnMagazines[]={"hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2","FPGP_PC_Tan_7","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","FPGP_2_OpscoreMar_Snakeskin_Tan_ct_2","FPGP_PC_Tan_7","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Rifleman_SAW_pack";
  };

  class NPC_PMC_SAW_Assistant: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="SAW Assistant";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    respawnItems[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_6","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_6","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_SAW_Assistant_pack";
  };

  class NPC_PMC_2IC: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="2IC";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    respawnItems[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_6","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_6","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_2IC_pack";
  };

  class NPC_PMC_Team_Lead: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Team Lead";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_hk416d10_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR","Put","Throw"};
    respawnWeapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_hk416d10_m320_rhsusf_acc_nt4_blackrhsusf_acc_ACOG_RMR","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","ACE_Chemlight_HiWhite","ACE_Chemlight_HiWhite"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","SmokeShell","SmokeShell","HandGrenade","HandGrenade","ACE_Chemlight_HiWhite","ACE_Chemlight_HiWhite"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Team_Lead_pack";
  };

  class NPC_PMC_Squad_Lead: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Squad Lead";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","Put","Throw"};
    respawnWeapons[]={"rhsusf_bino_lerca_1200_black","NPC_rhs_weap_m27iar_rhsusf_acc_nt4_blackrhsusf_acc_g33_xps3rhsusf_acc_kac_grip","Put","Throw"};
    items[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    respawnItems[]={"ACRE_PRC152","ACRE_PRC343","ItemcTab","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch","rhsusf_200Rnd_556x45_M855_mixed_soft_pouch"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_6","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhsusf_bino_lerca_1200_black","FPGP_2_OpscoreMar_Snakeskin_Tan_Amp_2","FPGP_PC_Tan_6","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Squad_Lead_pack";
  };

  class NPC_PMC_Vehicle_Crew: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Vehicle Crew";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt2_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_tanrhsusf_acc_eotech_552","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_tanrhsusf_acc_eotech_552","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull","SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_blk_ct_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_blk_ct_2","FPGP_PC_Tan_3","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Vehicle_Crew_pack";
  };

  class NPC_PMC_Pilot: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Pilot";
    uniformClass="FPGP2_Uni_Cryepants_khk_flannel_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","rhsusf_hgu56p_visor_green","rhsusf_shemagh_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","rhsusf_hgu56p_visor_green","rhsusf_shemagh_tan"};
    backpack="NPC_PMC_Pilot_pack";
  };

  class NPC_PMC_Crewman: B_Soldier_F
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="Crewman";
    uniformClass="FPGP2_Uni_Cryepants_khk_Shirt1_1_U";
    weapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","Put","Throw"};
    respawnWeapons[]={"ACE_VectorDay","NPC_rhs_weap_hk416d10_LMT_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","Put","Throw"};
    items[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    respawnItems[]={"ItemcTab","ACRE_PRC152","ACRE_PRC343","ItemAndroid"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellRed","ACE_Chemlight_HiWhite","ACE_Chemlight_HiBlue","ACE_Chemlight_HiGreen","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellGreen"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ACE_VectorDay","FPGP_2_OpscoreMar_Snakeskin_blk_Ct_1","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_PMC_Crewman_pack";
  };

  class NPC_PMC_MH6M_Littlebird: RHS_MELB_MH6M
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="MH-6M Littlebird";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa","rhsusf\addons\rhsusf_melb\data\decals\sn\blank_ca.paa"};
    crew="NPC_PMC_Pilot";
    typicalCargo[]={"NPC_PMC_Pilot"};
  };

  class NPC_PMC_OH6M_Littlebird: RHS_MELB_H6M
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="OH-6M Littlebird";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa","rhsusf\addons\rhsusf_melb\data\decals\sn\blank_ca.paa"};
    crew="NPC_PMC_Pilot";
    typicalCargo[]={"NPC_PMC_Pilot"};
  };

  class NPC_PMC_AH6M_Littlebird: RHS_MELB_AH6M
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="AH-6M Littlebird";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa","rhsusf\addons\rhsusf_melb\data\decals\sn\blank_ca.paa"};
    crew="NPC_PMC_Pilot";
    typicalCargo[]={"NPC_PMC_Pilot"};
  };

  class NPC_PMC_MKV_SOC: rhsusf_mkvsoc
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="MK-V SOC";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_markvsoc\data\hull_co.paa"};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };

  class NPC_PMC_MRZR_4: rhsusf_mrzr4_d
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="MRZR 4";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_mrzr\data\blue_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\yel_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\red_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\grn_grn_mud_co.paa","rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_mud_co.paa","","","","","","",""};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };

  class NPC_PMC_M1239_AUV_CROWS_M2: rhsusf_M1239_M2_socom_d
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="M1239 AUV (CROWS/M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_socomauv\data\m1239_main_wd_co.paa","rhsusf\addons\rhsusf_socomauv\data\m1239_wheels_wd_co.paa","rhsusf\addons\rhsusf_socomauv\decals\auv_socom_decal_ca.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","",""};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };

  class NPC_PMC_M1245_CROWS_M2: rhsusf_m1245_m2crows_socom_d
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="M1245 (CROWS/M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matva1_wd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matva1qnet_wd_ca.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa","126map\data\gfx\picturemap.paa"};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };

  class NPC_PMC_M1245_Deploy_CROWS_M2: rhsusf_m1245_m2crows_socom_deploy
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="M1245 Deploy (CROWS/M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matva1_wd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matva1qnet_wd_ca.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa","126map\data\gfx\picturemap.paa"};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };

  class NPC_PMC_M1238A1_ASV_CROWS_M2: rhsusf_M1238A1_M2_socom_d
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="M1238A1 ASV (CROWS/M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_rg33\data\m1238a1_main_wd_co.paa","rhsusf\addons\rhsusf_rg33\data\m1238a1_wheels_wd_co.paa","rhsusf\addons\rhsusf_rg33\data\m1238a1_markings_ca.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","","","","",""};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };

  class NPC_PMC_M1078A1R_SOV: rhsusf_M1078A1R_SOV_M2_D_fmtv_socom
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="M1078A1R SOV";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };

  class NPC_PMC_M1084A1R_SOV: rhsusf_M1084A1R_SOV_M2_D_fmtv_socom
  {
    faction="NPC_Aegir_PMC";
    side=1;
    displayName="M1084A1R SOV";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_PMC_Vehicle_Crew";
    typicalCargo[]={"NPC_PMC_Vehicle_Crew"};
  };


  class NPC_PMC_Commander_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellYellow {count=3;magazine="SmokeShellYellow";};
     class _xx_SmokeShellRed {count=3;magazine="SmokeShellRed";};
     class _xx_SmokeShellPurple {count=3;magazine="SmokeShellPurple";};
     class _xx_SmokeShellOrange {count=3;magazine="SmokeShellOrange";};
     class _xx_SmokeShellGreen {count=3;magazine="SmokeShellGreen";};
     class _xx_SmokeShellBlue {count=3;magazine="SmokeShellBlue";};
     class _xx_ACE_Chemlight_HiWhite {count=1;magazine="ACE_Chemlight_HiWhite";};
     class _xx_ACE_Chemlight_HiBlue {count=1;magazine="ACE_Chemlight_HiBlue";};
     class _xx_ACE_Chemlight_HiGreen {count=1;magazine="ACE_Chemlight_HiGreen";};
     class _xx_HandGrenade {count=4;magazine="HandGrenade";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_AA_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_fim92_mag {count=1;magazine="rhs_fim92_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_AA_Assistant_pack: B_Carryall_cbr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_fim92_mag {count=2;magazine="rhs_fim92_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Marksman_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_m67 {count=1;magazine="rhs_mag_m67";};
     class _xx_SmokeShellGreen {count=3;magazine="SmokeShellGreen";};
     class _xx_SmokeShellRed {count=3;magazine="SmokeShellRed";};
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Grenadier_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_m715_Green {count=2;magazine="rhs_mag_m715_Green";};
     class _xx_rhs_mag_m713_Red {count=1;magazine="rhs_mag_m713_Red";};
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_HandGrenade {count=2;magazine="HandGrenade";};
     class _xx_ACE_Chemlight_HiWhite {count=2;magazine="ACE_Chemlight_HiWhite";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_AT_Specialist_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_smaw_HEAA {count=1;magazine="rhs_mag_smaw_HEAA";};
     class _xx_rhs_mag_smaw_SR {count=1;magazine="rhs_mag_smaw_SR";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_AT_Specialist_Assistant_pack: B_Kitbag_cbr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_smaw_HEAA {count=2;magazine="rhs_mag_smaw_HEAA";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_JTAC_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=3;magazine="SmokeShellRed";};
     class _xx_SmokeShellPurple {count=1;magazine="SmokeShellPurple";};
     class _xx_SmokeShellGreen {count=3;magazine="SmokeShellGreen";};
     class _xx_ACE_Chemlight_HiWhite {count=1;magazine="ACE_Chemlight_HiWhite";};
     class _xx_ACE_Chemlight_HiBlue {count=1;magazine="ACE_Chemlight_HiBlue";};
     class _xx_ACE_Chemlight_HiGreen {count=1;magazine="ACE_Chemlight_HiGreen";};
     class _xx_HandGrenade {count=4;magazine="HandGrenade";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Rifleman_LAT_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Rifleman_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=3;magazine="SmokeShellRed";};
     class _xx_ACE_Chemlight_HiWhite {count=1;magazine="ACE_Chemlight_HiWhite";};
     class _xx_ACE_Chemlight_HiBlue {count=1;magazine="ACE_Chemlight_HiBlue";};
     class _xx_ACE_Chemlight_HiGreen {count=1;magazine="ACE_Chemlight_HiGreen";};
     class _xx_HandGrenade {count=4;magazine="HandGrenade";};
     class _xx_SmokeShellGreen {count=2;magazine="SmokeShellGreen";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Saboteur_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=1;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
     class _xx_ACE_Chemlight_HiWhite {count=1;magazine="ACE_Chemlight_HiWhite";};
     class _xx_ACE_Chemlight_HiBlue {count=1;magazine="ACE_Chemlight_HiBlue";};
     class _xx_ACE_Chemlight_HiGreen {count=1;magazine="ACE_Chemlight_HiGreen";};
     class _xx_HandGrenade {count=2;magazine="HandGrenade";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Rifleman_SAW_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_rhsusf_200Rnd_556x45_M855_mixed_soft_pouch {count=1;magazine="rhsusf_200Rnd_556x45_M855_mixed_soft_pouch";};
     class _xx_rhs_mag_m67 {count=3;magazine="rhs_mag_m67";};
    };
    class TransportItems
    {
     class _xx_ItemcTab {count=1;name="ItemcTab";};
     class _xx_ItemAndroid {count=1;name="ItemAndroid";};
    };
    class TransportWeapons{};
  };


  class NPC_PMC_SAW_Assistant_pack: B_Kitbag_cbr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_rhs_mag_m67 {count=3;magazine="rhs_mag_m67";};
     class _xx_rhsusf_200Rnd_556x45_M855_mixed_soft_pouch {count=3;magazine="rhsusf_200Rnd_556x45_M855_mixed_soft_pouch";};
    };
    class TransportItems
    {
     class _xx_ItemcTab {count=1;name="ItemcTab";};
     class _xx_ItemAndroid {count=1;name="ItemAndroid";};
    };
    class TransportWeapons{};
  };


  class NPC_PMC_2IC_pack: B_Kitbag_cbr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_rhs_mag_m67 {count=3;magazine="rhs_mag_m67";};
     class _xx_rhsusf_200Rnd_556x45_M855_mixed_soft_pouch {count=3;magazine="rhsusf_200Rnd_556x45_M855_mixed_soft_pouch";};
    };
    class TransportItems
    {
     class _xx_ItemcTab {count=1;name="ItemcTab";};
     class _xx_ItemAndroid {count=1;name="ItemAndroid";};
    };
    class TransportWeapons{};
  };


  class NPC_PMC_Team_Lead_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_HandGrenade {count=2;magazine="HandGrenade";};
     class _xx_ACE_Chemlight_HiWhite {count=2;magazine="ACE_Chemlight_HiWhite";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Squad_Lead_pack: B_Kitbag_cbr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_rhs_mag_m67 {count=3;magazine="rhs_mag_m67";};
     class _xx_rhsusf_200Rnd_556x45_M855_mixed_soft_pouch {count=3;magazine="rhsusf_200Rnd_556x45_M855_mixed_soft_pouch";};
    };
    class TransportItems
    {
     class _xx_ItemcTab {count=1;name="ItemcTab";};
     class _xx_ItemAndroid {count=1;name="ItemAndroid";};
    };
    class TransportWeapons{};
  };


  class NPC_PMC_Vehicle_Crew_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=3;magazine="SmokeShellRed";};
     class _xx_ACE_Chemlight_HiWhite {count=1;magazine="ACE_Chemlight_HiWhite";};
     class _xx_ACE_Chemlight_HiBlue {count=1;magazine="ACE_Chemlight_HiBlue";};
     class _xx_ACE_Chemlight_HiGreen {count=1;magazine="ACE_Chemlight_HiGreen";};
     class _xx_HandGrenade {count=4;magazine="HandGrenade";};
     class _xx_SmokeShellGreen {count=2;magazine="SmokeShellGreen";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Pilot_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=3;magazine="SmokeShellRed";};
     class _xx_ACE_Chemlight_HiWhite {count=1;magazine="ACE_Chemlight_HiWhite";};
     class _xx_ACE_Chemlight_HiBlue {count=1;magazine="ACE_Chemlight_HiBlue";};
     class _xx_ACE_Chemlight_HiGreen {count=1;magazine="ACE_Chemlight_HiGreen";};
     class _xx_HandGrenade {count=4;magazine="HandGrenade";};
     class _xx_SmokeShellGreen {count=2;magazine="SmokeShellGreen";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_PMC_Crewman_pack: rhsusf_falconii_coy
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=3;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=3;magazine="SmokeShellRed";};
     class _xx_ACE_Chemlight_HiWhite {count=1;magazine="ACE_Chemlight_HiWhite";};
     class _xx_ACE_Chemlight_HiBlue {count=1;magazine="ACE_Chemlight_HiBlue";};
     class _xx_ACE_Chemlight_HiGreen {count=1;magazine="ACE_Chemlight_HiGreen";};
     class _xx_HandGrenade {count=4;magazine="HandGrenade";};
     class _xx_SmokeShellGreen {count=2;magazine="SmokeShellGreen";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
class cfgGroups
{  
  class WEST
  {
    name="BLUFOR";
    class Aegir_PMC
    {
      name="Aegir PMC";

      class Infantry
      {
        name="Infantry";

        class NPC_B_Command_Team
        {
          name="Command Team";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_Commander";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_2IC";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_PMC_JTAC";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
        };
        class NPC_B_Assault_Squad
        {
          name="Assault Squad";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_Team_Lead";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_PMC_Team_Lead";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_PMC_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="NPC_PMC_Rifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="NPC_PMC_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="NPC_PMC_Rifleman_LAT";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="NPC_PMC_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=1;
            vehicle="NPC_PMC_Marksman";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
        };
        class NPC_B_AT_Team
        {
          name="AT Team";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_Team_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_PMC_AT_Specialist_Assistant";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_PMC_AT_Specialist_Assistant";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_AA_Team
        {
          name="AA Team";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_Team_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_PMC_AA";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_PMC_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_MG_Team
        {
          name="MG Team";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_Team_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_Rifleman_SAW";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_PMC_SAW_Assistant";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_PMC_SAW_Assistant";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Recon_Team
        {
          name="Recon Team";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_Team_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_Marksman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_PMC_Saboteur";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_PMC_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class NPC_B_Motorized_Squad_(M1245)
        {
          name="Motorized Squad (M1245)";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_M1245_CROWS_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_M1245_Deploy_CROWS_M2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Motorized_Squad_(M1238A1)
        {
          name="Motorized Squad (M1238A1)";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_M1238A1_ASV_CROWS_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_M1238A1_ASV_CROWS_M2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Motorized_Recon_Team
        {
          name="Motorized Recon Team";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_M1078A1R_SOV";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

      };
      class Support
      {
        name="Support Infantry";

      };
      class Airborne
      {
        name="Airborne";

        class NPC_B_AH_6M_Squadron
        {
          name="AH 6M Squadron";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_AH6M_Littlebird";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_AH6M_Littlebird";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_MH_6M_Squadron
        {
          name="MH 6M Squadron";
          faction="NPC_Aegir_PMC";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_PMC_MH6M_Littlebird";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_PMC_MH6M_Littlebird";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Air
      {
        name="Air";

      };
    };
  };
};
