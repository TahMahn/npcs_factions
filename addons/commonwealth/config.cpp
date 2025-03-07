class cfgPatches
{
  class NPC_Commonwealth
  {
    units[]={"NPC_CW_Commander","NPC_CW_2IC","NPC_CW_JTAC","NPC_CW_UAV_Operator","NPC_CW_Medic","NPC_CW_Squad_Lead","NPC_CW_Team_Lead","NPC_CW_Grenadier","NPC_CW_AT_Specialist","NPC_CW_AT_Assistant","NPC_CW_AA_Specialist","NPC_CW_AA_Assistant","NPC_CW_Machinegunner","NPC_CW_MG_Assistant","NPC_CW_Autorifleman","NPC_CW_AR_Assistant","NPC_CW_Marksman","NPC_CW_Sniper","NPC_CW_Spotter","NPC_CW_Explosives_Specialist","NPC_CW_Engineer","NPC_CW_Rifleman","NPC_CW_Crewman","NPC_CW_Driver","NPC_CW_Heli_Pilot","NPC_CW_Pilot","NPC_CW_M1126_M2","NPC_CW_M1126_Mk19","NPC_CW_M1134","NPC_CW_M142_HIMARS","NPC_CW_M252","NPC_CW_M109A6","NPC_CW_M6A2","NPC_CW_M2A3_BUSK_III","NPC_CW_M2A2ODS_BUSK_I","NPC_CW_M1A2SEPv2","NPC_CW_M1A2SEPv1_TUSK_II","NPC_M1A1AIM_TUSK_I","NPC_CW_FIM_92F_DMS","NPC_CW_M2HB_M3_AA","NPC_CW_M2HB_M3","NPC_CW_M41A4_TOW","NPC_CW_Mk19_M3","NPC_CW_M977A4_B_Repair","NPC_CW_M977A4_B_Ammo","NPC_CW_M1085A1P2B_CBPS_Medic","NPC_CW_M978A4_B_Fuel","NPC_CW_M1084A1P2_B_M2_Flatbed","NPC_CW_M1083A1P2_B_M2","NPC_CW_M1083A1P2_B_M2_Flatbed","NPC_CW_M1083A1P2_B","NPC_CW_M1083A1P2_B_Flatbed","NPC_CW_M977A4_B_Repair_M2","NPC_CW_M977A4_B_Ammo_M2","NPC_CW_M1232","NPC_CW_M1232_M2","NPC_CW_M1232_Mk19","NPC_CW_M1237_Mk19","NPC_CW_M1237_M2","NPC_M1151A1_CROWS_M2","NPC_M1151A1_CROWS_Mk19","NPC_CW_M1151A1","NPC_CW_M1045A2_M220A2","NPC_CW_M1025A2_M2","NPC_CW_M1025A2_Mk19","NPC_CW_M1025A2_Unarmed","NPC_CW_UH_60M","NPC_CW_UH_60M_MEV","NPC_CW_UH_60M_Unarmed","NPC_CW_CH_47F_Cargo","NPC_CW_CH_47F","NPC_CW_AH_64D","NPC_CW_MH_6M_Little_Bird","NPC_CW_AH_6M_Little_Bird","NPC_CW_MKV_SOC","NPC_CW_C_130J","NPC_CW_C_130J_Cargo","NPC_CW_A10A","NPC_CW_FA_181_Black_Wasp_II"};
    weapons[]={"NPC_rhsusf_weap_m9","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhs_weap_maaws_rhs_optic_maaws","NPC_rhs_weap_fim92","NPC_rhs_weap_m240B","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_xps3","NPC_rhs_weap_m249_pip_ris_rhsusf_acc_ELCANrhsusf_acc_saw_bipod","NPC_rhs_weap_sr25_ec_rhsusf_acc_anpeq15side_bkoptic_DMSrhsusf_acc_harris_bipod","NPC_rhs_weap_XM2010_rhsusf_acc_anpeq15side_bkrhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod","NPC_rhs_weap_hk416d10_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_compm4","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F","rhsusf_c_troops","A3_Characters_F","CuratorOnly_Characters_F_BLUFOR","A3_Weapons_F_Items","rhsusf_c_weapons","A3_Drones_F_Weapons_F_Gamma_Items"};
    skipWhenMissingDependencies = 1;
  };
};

class cfgFactionClasses
{
  class NPC_Commonwealth
  {
    icon="";
    displayName="[NPC] Commonwealth";
    side=1;
    priority=1;
  };
};


class cfgWeapons
{
  class rhsusf_weap_m9;
  class rhs_weap_m4a1_blockII_bk;
  class rhs_weap_m4a1_blockII_M203_bk;
  class rhs_weap_m4a1_blockII;
  class rhs_weap_maaws;
  class rhs_weap_fim92;
  class rhs_weap_m240B;
  class rhs_weap_m249_pip_ris;
  class rhs_weap_sr25_ec;
  class rhs_weap_XM2010;
  class rhs_weap_hk416d10;
  class rhsusf_weap_MP7A2;

  class NPC_rhsusf_weap_m9: rhsusf_weap_m9
  {
    displayName="M9 Beretta";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR: rhs_weap_m4a1_blockII_bk
  {
    displayName="M4A1 Block II (Black Rail)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_SFMB556";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
    };
  };

  class NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR: rhs_weap_m4a1_blockII_M203_bk
  {
    displayName="M4A1 Block II (Black Rail/M203)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_SFMB556";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
    };
  };

  class NPC_rhs_weap_m4a1_blockII_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR: rhs_weap_m4a1_blockII
  {
    displayName="M4A1 Block II";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_SFMB556";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ACOG_RMR";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
    };
  };

  class NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552: rhs_weap_m4a1_blockII_M203_bk
  {
    displayName="M4A1 Block II (Black Rail/M203)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_SFMB556";
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

  class NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552: rhs_weap_m4a1_blockII_bk
  {
    displayName="M4A1 Block II (Black Rail)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_SFMB556";
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

  class NPC_rhs_weap_maaws_rhs_optic_maaws: rhs_weap_maaws
  {
    displayName="M3 MAAWS";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_optic_maaws";
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

  class NPC_rhs_weap_m240B: rhs_weap_m240B
  {
    displayName="M240B";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_m4a1_blockII_rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_xps3: rhs_weap_m4a1_blockII
  {
    displayName="M4A1 Block II";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_eotech_xps3";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
    };
  };

  class NPC_rhs_weap_m249_pip_ris_rhsusf_acc_ELCANrhsusf_acc_saw_bipod: rhs_weap_m249_pip_ris
  {
    displayName="M249 PIP (RIS)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ELCAN";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_saw_bipod";
      };
    };
  };

  class NPC_rhs_weap_sr25_ec_rhsusf_acc_anpeq15side_bkoptic_DMSrhsusf_acc_harris_bipod: rhs_weap_sr25_ec
  {
    displayName="Mk 11 Mod 0 (EC)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_DMS";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_harris_bipod";
      };
    };
  };

  class NPC_rhs_weap_XM2010_rhsusf_acc_anpeq15side_bkrhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod: rhs_weap_XM2010
  {
    displayName="M2010 ESR";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_nxs_3515x50_md";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_harris_bipod";
      };
    };
  };

  class NPC_rhs_weap_hk416d10_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_compm4: rhs_weap_hk416d10
  {
    displayName="HK416 D10";
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
        item="rhsusf_acc_compm4";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_anpeq15side_bk";
      };
    };
  };

  class NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds: rhsusf_weap_MP7A2
  {
    displayName="MP7A2";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_mrds";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhsusf_acc_wmx_bk";
      };
    };
  };

};

class cfgVehicles
{
  class B_Soldier_F;
  class B_UAV_01_backpack_F;
  class rhsusf_assault_eagleaiii_ocp;
  class rhsusf_falconii_mc;
  class B_Kitbag_mcamo;
  class rhsusf_stryker_m1126_m2_wd;
  class rhsusf_stryker_m1126_mk19_wd;
  class rhsusf_stryker_m1134_wd;
  class rhsusf_M142_usarmy_WD;
  class RHS_M252_WD;
  class rhsusf_m109_usarmy;
  class RHS_M6_wd;
  class RHS_M2A3_BUSKIII_wd;
  class RHS_M2A2_BUSKI_WD;
  class rhsusf_m1a2sep2wd_usarmy;
  class rhsusf_m1a2sep1tuskiiwd_usarmy;
  class rhsusf_m1a1aim_tuski_wd;
  class RHS_Stinger_AA_pod_WD;
  class RHS_M2StaticMG_WD;
  class RHS_M2StaticMG_MiniTripod_WD;
  class RHS_TOW_TriPod_WD;
  class RHS_MK19_TriPod_WD;
  class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd;
  class rhsusf_M977A4_AMMO_BKIT_usarmy_wd;
  class rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy;
  class rhsusf_M978A4_BKIT_usarmy_wd;
  class rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy;
  class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy;
  class rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy;
  class rhsusf_M1083A1P2_B_WD_fmtv_usarmy;
  class rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy;
  class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd;
  class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd;
  class rhsusf_M1232_usarmy_wd;
  class rhsusf_M1232_M2_usarmy_wd;
  class rhsusf_M1232_MK19_usarmy_wd;
  class rhsusf_M1237_MK19_usarmy_wd;
  class rhsusf_M1237_M2_usarmy_wd;
  class rhsusf_m1151_m2crows_usarmy_wd;
  class rhsusf_m1151_mk19crows_usarmy_wd;
  class rhsusf_m1151_usarmy_wd;
  class rhsusf_m1045_w;
  class rhsusf_m1025_w_m2;
  class rhsusf_m1025_w_mk19;
  class rhsusf_m1025_w;
  class RHS_UH60M;
  class RHS_UH60M_MEV2;
  class RHS_UH60M2;
  class RHS_CH_47F_cargo;
  class RHS_CH_47F;
  class RHS_AH64D_wd;
  class RHS_MELB_MH6M;
  class RHS_MELB_AH6M;
  class rhsusf_mkvsoc;
  class RHS_C130J;
  class RHS_C130J_Cargo;
  class RHS_A10;
  class B_Plane_Fighter_01_F;

  class NPC_CW_Commander: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Commander";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Rangefinder","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShell","SmokeShellGreen","SmokeShellRed"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShell","SmokeShellGreen","SmokeShellRed"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Rangefinder","rhs_8point_marpatwd","rhsusf_iotv_ocp","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Rangefinder","rhs_8point_marpatwd","rhsusf_iotv_ocp","G_Aviator"};
    backpack="";
  };

  class NPC_CW_2IC: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="2IC";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Rangefinder","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Rangefinder","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp","G_Tactical_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Rangefinder","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp","G_Tactical_Black"};
    backpack="";
  };

  class NPC_CW_JTAC: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="JTAC";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Laserdesignator","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Laserdesignator","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp_Repair","G_Tactical_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Laserdesignator","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp_Repair","G_Tactical_Black"};
    backpack="";
  };

  class NPC_CW_UAV_Operator: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="UAV Operator";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Laserdesignator","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","B_UavTerminal","Laserdesignator","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp_Repair","G_Tactical_Black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","B_UavTerminal","Laserdesignator","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp_Repair","G_Tactical_Black"};
    backpack="NPC_CW_UAV_Operator_pack";
  };

  class NPC_CW_Medic: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Medic";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Laserdesignator","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Laserdesignator","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Laserdesignator","rhsusf_mich_helmet_marpatwd_alt","rhsusf_iotv_ocp_Medic","rhsusf_shemagh2_od"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Laserdesignator","rhsusf_mich_helmet_marpatwd_alt","rhsusf_iotv_ocp_Medic","rhsusf_shemagh2_od"};
    backpack="NPC_CW_Medic_pack";
  };

  class NPC_CW_Squad_Lead: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Squad Lead";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M583A1_white","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M583A1_white","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Squadleader","rhsusf_shemagh_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Squadleader","rhsusf_shemagh_gogg_tan"};
    backpack="NPC_CW_Squad_Lead_pack";
  };

  class NPC_CW_Team_Lead: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Team Lead";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_ACOG_RMR","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp_Teamleader","rhsusf_shemagh_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_headset","rhsusf_iotv_ocp_Teamleader","rhsusf_shemagh_tan"};
    backpack="NPC_CW_Team_Lead_pack";
  };

  class NPC_CW_Grenadier: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Grenadier";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_M203_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M583A1_white","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M397_HET","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M433_HEDP","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M583A1_white","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Grenadier","rhsusf_shemagh_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Grenadier","rhsusf_shemagh_gogg_tan"};
    backpack="NPC_CW_Grenadier_pack";
  };

  class NPC_CW_AT_Specialist: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="AT Specialist";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhs_weap_maaws_rhs_optic_maaws","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhs_weap_maaws_rhs_optic_maaws","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_AT_Specialist_pack";
  };

  class NPC_CW_AT_Assistant: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="AT Assistant";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_AT_Assistant_pack";
  };

  class NPC_CW_AA_Specialist: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="AA Specialist";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhs_weap_fim92","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhs_weap_fim92","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_AA_Specialist_pack";
  };

  class NPC_CW_AA_Assistant: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="AA Assistant";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_AA_Assistant_pack";
  };

  class NPC_CW_Machinegunner: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Machinegunner";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m240B","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m240B","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellRed","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51"};
    respawnMagazines[]={"SmokeShellRed","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_Machinegunner_pack";
  };

  class NPC_CW_MG_Assistant: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="MG Assistant";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_xps3","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_xps3","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellRed","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51"};
    respawnMagazines[]={"SmokeShellRed","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_MG_Assistant_pack";
  };

  class NPC_CW_Autorifleman: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Autorifleman";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m249_pip_ris_rhsusf_acc_ELCANrhsusf_acc_saw_bipod","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m249_pip_ris_rhsusf_acc_ELCANrhsusf_acc_saw_bipod","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellRed","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
    respawnMagazines[]={"SmokeShellRed","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_SAW","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_SAW","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_Autorifleman_pack";
  };

  class NPC_CW_AR_Assistant: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="AR Assistant";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_xps3","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_xps3","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellRed","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
    respawnMagazines[]={"SmokeShellRed","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_AR_Assistant_pack";
  };

  class NPC_CW_Marksman: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Marksman";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_sr25_ec_rhsusf_acc_anpeq15side_bkoptic_DMSrhsusf_acc_harris_bipod","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_sr25_ec_rhsusf_acc_anpeq15side_bkoptic_DMSrhsusf_acc_harris_bipod","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellRed","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","ACE_CTS9","ACE_CTS9"};
    respawnMagazines[]={"SmokeShellRed","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","ACE_CTS9","ACE_CTS9"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_tan"};
    backpack="NPC_CW_Marksman_pack";
  };

  class NPC_CW_Sniper: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Sniper";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Rangefinder","NPC_rhs_weap_XM2010_rhsusf_acc_anpeq15side_bkrhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_rhs_weap_XM2010_rhsusf_acc_anpeq15side_bkrhsusf_acc_nxs_3515x50_mdrhsusf_acc_harris_bipod","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellRed","HandGrenade","HandGrenade","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"};
    respawnMagazines[]={"SmokeShellRed","HandGrenade","HandGrenade","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_booniehat2_marpatwd","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_booniehat2_marpatwd","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_tan"};
    backpack="";
  };

  class NPC_CW_Spotter: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Spotter";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Rangefinder","NPC_rhs_weap_hk416d10_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_compm4","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_rhs_weap_hk416d10_rhsusf_acc_nt4_blackrhsusf_acc_anpeq15side_bkrhsusf_acc_compm4","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShellRed","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"SmokeShellRed","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_booniehat2_marpatwd","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_booniehat2_marpatwd","rhsusf_iotv_ocp_Rifleman","rhsusf_shemagh2_tan"};
    backpack="";
  };

  class NPC_CW_Explosives_Specialist: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Explosives Specialist";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag","SLAMDirectionalMine_Wire_Mag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","SatchelCharge_Remote_Mag","SLAMDirectionalMine_Wire_Mag","SLAMDirectionalMine_Wire_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Repair","rhsusf_shemagh_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Repair","rhsusf_shemagh_gogg_tan"};
    backpack="NPC_CW_Explosives_Specialist_pack";
  };

  class NPC_CW_Engineer: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Engineer";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","HandGrenade","HandGrenade","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Repair","rhsusf_shemagh_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd_alt_headset","rhsusf_iotv_ocp_Repair","rhsusf_shemagh_gogg_tan"};
    backpack="NPC_CW_Engineer_pack";
  };

  class NPC_CW_Rifleman: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Rifleman";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_m4a1_blockII_bk_rhsusf_acc_SFMB556rhsusf_acc_anpeq15side_bkrhsusf_acc_eotech_552","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"rhsusf_mag_15Rnd_9x19_JHP","SmokeShellRed","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd","rhsusf_iotv_ocp_Repair","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_mich_helmet_marpatwd","rhsusf_iotv_ocp_Repair","rhsusf_shemagh2_gogg_tan"};
    backpack="NPC_CW_Rifleman_pack";
  };

  class NPC_CW_Crewman: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Crewman";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP","SmokeShellRed","rhsusf_mag_40Rnd_46x30_AP"};
    respawnMagazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP","SmokeShellRed","rhsusf_mag_40Rnd_46x30_AP"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_lwh_helmet_marpatwd_headset_blk2","rhsusf_iotv_ocp","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_lwh_helmet_marpatwd_headset_blk2","rhsusf_iotv_ocp","rhsusf_shemagh2_gogg_tan"};
    backpack="";
  };

  class NPC_CW_Driver: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Driver";
    uniformClass="rhs_uniform_FROG01_wd";
    weapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP","SmokeShellRed","rhsusf_mag_40Rnd_46x30_AP"};
    respawnMagazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP","SmokeShellRed","rhsusf_mag_40Rnd_46x30_AP"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_lwh_helmet_marpatwd_headset_blk2","rhsusf_iotv_ocp","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_lwh_helmet_marpatwd_headset_blk2","rhsusf_iotv_ocp","rhsusf_shemagh2_gogg_tan"};
    backpack="";
  };

  class NPC_CW_Heli_Pilot: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Heli Pilot";
    uniformClass="rhs_uniform_g3_blk";
    weapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP"};
    respawnMagazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_ihadss"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_ihadss"};
    backpack="";
  };

  class NPC_CW_Pilot: B_Soldier_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Pilot";
    uniformClass="rhs_uniform_g3_blk";
    weapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhsusf_weap_MP7A2_rhsusf_acc_wmx_bkrhsusf_acc_mrds","NPC_rhsusf_weap_m9","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP"};
    respawnMagazines[]={"rhsusf_mag_40Rnd_46x30_AP","rhsusf_mag_40Rnd_46x30_AP"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_hgu56p_visor_mask"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_hgu56p_visor_mask"};
    backpack="";
  };

  class NPC_CW_M1126_M2: rhsusf_stryker_m1126_m2_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1126 M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\f_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\-_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\1_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\1_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\hulldecals_stryker_wd\rhsusf_hulldecal_wolfwd_ca.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1126_Mk19: rhsusf_stryker_m1126_mk19_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1126 Mk19";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\f_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\-_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\2_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\1_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\hulldecals_stryker_wd\rhsusf_hulldecal_catwd_ca.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1134: rhsusf_stryker_m1134_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1134";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1134_int_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\n_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\-_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\3_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\2_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\hulldecals_stryker_wd\rhsusf_hulldecal_wolfwd_ca.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M142_HIMARS: rhsusf_M142_usarmy_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M142 HIMARS";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_himars\data\m142_cab_co.paa","rhsusf\addons\rhsusf_himars\data\m142_rear_co.paa","rhsusf\addons\rhsusf_himars\data\m142_chassis_co.paa","rhsusf\addons\rhsusf_himars\data\m142_wheel_co.paa","rhsusf\addons\rhsusf_himars\data\m142_int_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M252: RHS_M252_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M252";
    hiddenSelectionsTextures[]={};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M109A6: rhsusf_m109_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M109A6";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_wd_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_wd_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_wd_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"};
    crew="NPC_CW_Crewman";
    typicalCargo[]={"NPC_CW_Crewman"};
  };

  class NPC_CW_M6A2: RHS_M6_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M6A2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",""};
    crew="NPC_CW_Crewman";
    typicalCargo[]={"NPC_CW_Crewman"};
  };

  class NPC_CW_M2A3_BUSK_III: RHS_M2A3_BUSKIII_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M2A3 BUSK III";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_buskiii_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buskiii_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\buskiii_co.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"};
    crew="NPC_CW_Crewman";
    typicalCargo[]={"NPC_CW_Crewman"};
  };

  class NPC_CW_M2A2ODS_BUSK_I: RHS_M2A2_BUSKI_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M2A2ODS BUSK I";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_buski_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa","rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa"};
    crew="NPC_CW_Crewman";
    typicalCargo[]={"NPC_CW_Crewman"};
  };

  class NPC_CW_M1A2SEPv2: rhsusf_m1a2sep2wd_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1A2SEPv2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_01_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2_wd_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskia2_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_wd_co.paa","","","","rhsusf\addons\rhsusf_decals\data\labels\armyplt_abrams_wd\6_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\barrelart_abrams_wd\2_ca.paa",""};
    crew="NPC_CW_Crewman";
    typicalCargo[]={"NPC_CW_Crewman"};
  };

  class NPC_CW_M1A2SEPv1_TUSK_II: rhsusf_m1a2sep1tuskiiwd_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1A2SEPv1 TUSK II";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_01_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv1tuskii_wd_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_tuskiia2_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","","","","","rhsusf\addons\rhsusf_decals\data\labels\armyplt_abrams_wd\3_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\barrelart_abrams_wd\53_ca.paa",""};
    crew="NPC_CW_Crewman";
    typicalCargo[]={"NPC_CW_Crewman"};
  };

  class NPC_M1A1AIM_TUSK_I: rhsusf_m1a1aim_tuski_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1A1AIM TUSK I";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_01_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aimtusk_wd_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_tuski_wd_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_tuski_wd_co.paa","rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1slat_wd_co.paa","","","","","","rhsusf\addons\rhsusf_decals\data\labels\armyplt_abrams_wd\9_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\barrelart_abrams_wd\47_ca.paa",""};
    crew="NPC_CW_Crewman";
    typicalCargo[]={"NPC_CW_Crewman"};
  };

  class NPC_CW_FIM_92F_DMS: RHS_Stinger_AA_pod_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="FIM 92F DMS";
    hiddenSelectionsTextures[]={};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M2HB_M3_AA: RHS_M2StaticMG_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M2HB M3 AA";
    hiddenSelectionsTextures[]={};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M2HB_M3: RHS_M2StaticMG_MiniTripod_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M2HB M3";
    hiddenSelectionsTextures[]={};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M41A4_TOW: RHS_TOW_TriPod_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M41A4 TOW";
    hiddenSelectionsTextures[]={};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_Mk19_M3: RHS_MK19_TriPod_WD
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="Mk19 M3";
    hiddenSelectionsTextures[]={};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M977A4_B_Repair: rhsusf_M977A4_REPAIR_BKIT_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M977A4 B Repair";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hemtt_a4\data\cab_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\bkit_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\cargo_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\chassis_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M977A4_B_Ammo: rhsusf_M977A4_AMMO_BKIT_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M977A4 B Ammo";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hemtt_a4\data\cab_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\bkit_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\cargo_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\chassis_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1085A1P2B_CBPS_Medic: rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1085A1P2B CBPS Medic";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M978A4_B_Fuel: rhsusf_M978A4_BKIT_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M978A4 B Fuel";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hemtt_a4\data\cab_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\bkit_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\fuel_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\chassis_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1084A1P2_B_M2_Flatbed: rhsusf_M1084A1P2_B_M2_WD_fmtv_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1084A1P2 B M2 Flatbed";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1083A1P2_B_M2: rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1083A1P2 B M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1083A1P2_B_M2_Flatbed: rhsusf_M1083A1P2_B_M2_WD_flatbed_fmtv_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1083A1P2 B M2 Flatbed";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1083A1P2_B: rhsusf_M1083A1P2_B_WD_fmtv_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1083A1P2 B";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1083A1P2_B_Flatbed: rhsusf_M1083A1P2_B_WD_flatbed_fmtv_usarmy
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1083A1P2 B Flatbed";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_fmtv\data\fmtv_cab_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_wheel_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_25trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_bkit_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis1_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trear_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_canvas2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_shelter_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_hospital_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_5trearlhc_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_chassis2_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovchassis_wd_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovcab_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovrear_w_co.paa","rhsusf\addons\rhsusf_fmtv\data\fmtv_sovkit_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M977A4_B_Repair_M2: rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M977A4 B Repair M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hemtt_a4\data\cab_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\bkit_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\cargo_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\chassis_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M977A4_B_Ammo_M2: rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M977A4 B Ammo M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hemtt_a4\data\cab_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\bkit_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\cargo_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_hemtt_a4\data\chassis_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1232: rhsusf_M1232_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1232";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_rg33l\data\rg33_body_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_chassis_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_accessory2_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_wheels_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_rg33l\decals\rg33_usarmy_decal_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1232_M2: rhsusf_M1232_M2_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1232 M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_rg33l\data\rg33_body_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_chassis_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_accessory2_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_wheels_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_rg33l\decals\rg33_usarmy_decal_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1232_Mk19: rhsusf_M1232_MK19_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1232 Mk19";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_rg33l\data\rg33_body_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_chassis_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_accessory2_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_wheels_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_rg33l\decals\rg33_usarmy_decal_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1237_Mk19: rhsusf_M1237_MK19_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1237 Mk19";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_rg33l\data\rg33_body_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_chassis_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_accessory2_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_wheels_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_rg33l\decals\rg33_usarmy_decal_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1237_M2: rhsusf_M1237_M2_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1237 M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_rg33l\data\rg33_body_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_chassis_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_accessory2_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_wheels_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_rg33l\decals\rg33_usarmy_decal_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_M1151A1_CROWS_M2: rhsusf_m1151_m2crows_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1151A1 CROWS M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_M1151A1_CROWS_Mk19: rhsusf_m1151_mk19crows_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1151A1 CROWS Mk19";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1151A1: rhsusf_m1151_usarmy_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1151A1";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1045A2_M220A2: rhsusf_m1045_w
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1045A2 M220A2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1043_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa","","","",""};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1025A2_M2: rhsusf_m1025_w_m2
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1025A2 M2";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa","","","",""};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1025A2_Mk19: rhsusf_m1025_w_mk19
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1025A2 Mk19";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa","","","",""};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_M1025A2_Unarmed: rhsusf_m1025_w
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="M1025A2 Unarmed";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\a2_parts_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_w_co.paa","rhsusf\addons\rhsusf_hmmwv\unitdecals\101stab_502reg_2ndbn_a12_w_co.paa","","","",""};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_UH_60M: RHS_UH60M
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="UH 60M";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_UH_60M_MEV: RHS_UH60M_MEV2
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="UH 60M MEV";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_mev_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_mev_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_UH_60M_Unarmed: RHS_UH60M2
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="UH 60M Unarmed";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa","rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_CH_47F_Cargo: RHS_CH_47F_cargo
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="CH 47F Cargo";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa","rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_CH_47F: RHS_CH_47F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="CH 47F";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa","rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa","rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa","rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_AH_64D: RHS_AH64D_wd
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="AH 64D";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa","rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa","rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa","#(argb,8,8,3)color(0,0,0,1.0,co)","#(argb,8,8,3)color(0,0,0,1.0,co)","#(argb,8,8,3)color(0,0,0,1.0,co)","#(argb,8,8,3)color(0,0,0,1.0,co)"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_MH_6M_Little_Bird: RHS_MELB_MH6M
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="MH 6M Little Bird";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa","rhsusf\addons\rhsusf_melb\data\decals\sn\blank_ca.paa"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_AH_6M_Little_Bird: RHS_MELB_AH6M
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="AH 6M Little Bird";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa","rhsusf\addons\rhsusf_melb\data\decals\sn\blank_ca.paa"};
    crew="NPC_CW_Heli_Pilot";
    typicalCargo[]={"NPC_CW_Heli_Pilot"};
  };

  class NPC_CW_MKV_SOC: rhsusf_mkvsoc
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="MKV SOC";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_markvsoc\data\hull_co.paa"};
    crew="NPC_CW_Driver";
    typicalCargo[]={"NPC_CW_Driver"};
  };

  class NPC_CW_C_130J: RHS_C130J
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="C 130J";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa","rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"};
    crew="NPC_CW_Pilot";
    typicalCargo[]={"NPC_CW_Pilot"};
  };

  class NPC_CW_C_130J_Cargo: RHS_C130J_Cargo
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="C 130J Cargo";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa","rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"};
    crew="NPC_CW_Pilot";
    typicalCargo[]={"NPC_CW_Pilot"};
  };

  class NPC_CW_A10A: RHS_A10
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="A10A";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\a10\data\a10_01_co.paa","rhsusf\addons\rhsusf_a2port_air\a10\data\a10_02_co.paa","",""};
    crew="NPC_CW_Pilot";
    typicalCargo[]={"NPC_CW_Pilot"};
  };

  class NPC_CW_FA_181_Black_Wasp_II: B_Plane_Fighter_01_F
  {
    faction="NPC_Commonwealth";
    side=1;
    displayName="FA 181 Black Wasp II";
    hiddenSelectionsTextures[]={"a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_fuselage_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_00_ca.paa","a3\air_f_jets\plane_fighter_01\data\numbers\fighter_01_01_ca.paa"};
    crew="NPC_CW_Pilot";
    typicalCargo[]={"NPC_CW_Pilot"};
  };


  class NPC_CW_UAV_Operator_pack: B_UAV_01_backpack_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_Medic_pack: rhsusf_assault_eagleaiii_ocp
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=15;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class NPC_CW_Squad_Lead_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_M397_HET {count=2;magazine="rhs_mag_M397_HET";};
     class _xx_rhs_mag_M433_HEDP {count=2;magazine="rhs_mag_M433_HEDP";};
     class _xx_rhs_mag_M441_HE {count=1;magazine="rhs_mag_M441_HE";};
     class _xx_rhs_mag_M583A1_white {count=1;magazine="rhs_mag_M583A1_white";};
     class _xx_rhs_mag_M585_white_cluster {count=1;magazine="rhs_mag_M585_white_cluster";};
     class _xx_rhs_mag_m661_green {count=1;magazine="rhs_mag_m661_green";};
     class _xx_rhs_mag_m662_red {count=1;magazine="rhs_mag_m662_red";};
     class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {count=3;magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_Team_Lead_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {count=3;magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_Grenadier_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_M397_HET {count=4;magazine="rhs_mag_M397_HET";};
     class _xx_rhs_mag_M433_HEDP {count=4;magazine="rhs_mag_M433_HEDP";};
     class _xx_rhs_mag_M441_HE {count=4;magazine="rhs_mag_M441_HE";};
     class _xx_rhs_mag_M583A1_white {count=1;magazine="rhs_mag_M583A1_white";};
     class _xx_rhs_mag_M585_white_cluster {count=1;magazine="rhs_mag_M585_white_cluster";};
     class _xx_rhs_mag_m661_green {count=1;magazine="rhs_mag_m661_green";};
     class _xx_rhs_mag_m662_red {count=1;magazine="rhs_mag_m662_red";};
     class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag {count=3;magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_AT_Specialist_pack: rhsusf_assault_eagleaiii_ocp
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_maaws_HEAT {count=2;magazine="rhs_mag_maaws_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_AT_Assistant_pack: B_Kitbag_mcamo
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_maaws_HEAT {count=3;magazine="rhs_mag_maaws_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_AA_Specialist_pack: rhsusf_assault_eagleaiii_ocp
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_fim92_mag {count=2;magazine="rhs_fim92_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_AA_Assistant_pack: rhsusf_assault_eagleaiii_ocp
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_fim92_mag {count=2;magazine="rhs_fim92_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_Machinegunner_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhsusf_100Rnd_762x51 {count=4;magazine="rhsusf_100Rnd_762x51";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_MG_Assistant_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhsusf_100Rnd_762x51 {count=4;magazine="rhsusf_100Rnd_762x51";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_Autorifleman_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhsusf_200rnd_556x45_mixed_box {count=3;magazine="rhsusf_200rnd_556x45_mixed_box";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_AR_Assistant_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhsusf_200rnd_556x45_mixed_box {count=3;magazine="rhsusf_200rnd_556x45_mixed_box";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_Marksman_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_SmokeShellRed {count=1;magazine="SmokeShellRed";};
     class _xx_SmokeShellGreen {count=1;magazine="SmokeShellGreen";};
     class _xx_ACE_CTS9 {count=2;magazine="ACE_CTS9";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_CW_Explosives_Specialist_pack: B_Kitbag_mcamo
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_DemoCharge_Remote_Mag {count=2;magazine="DemoCharge_Remote_Mag";};
     class _xx_SatchelCharge_Remote_Mag {count=1;magazine="SatchelCharge_Remote_Mag";};
     class _xx_SLAMDirectionalMine_Wire_Mag {count=2;magazine="SLAMDirectionalMine_Wire_Mag";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_MineDetector {count=1;name="MineDetector";};
    };
    class TransportWeapons{};
  };


  class NPC_CW_Engineer_pack: B_Kitbag_mcamo
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_SmokeShell {count=2;magazine="SmokeShell";};
     class _xx_HandGrenade {count=2;magazine="HandGrenade";};
     class _xx_SmokeShellRed {count=2;magazine="SmokeShellRed";};
     class _xx_SmokeShellGreen {count=2;magazine="SmokeShellGreen";};
     class _xx_SmokeShellBlue {count=2;magazine="SmokeShellBlue";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_MineDetector {count=1;name="MineDetector";};
    };
    class TransportWeapons{};
  };


  class NPC_CW_Rifleman_pack: rhsusf_falconii_mc
  {
    scope=1;
    class TransportMagazines{};
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
    class Commonwealth
    {
      name="[NPC] Commonwealth";

      class Infantry
      {
        name="Infantry";

        class NPC_B_Command_Team
        {
          name="Command Team";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Commander";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_2IC";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_CW_JTAC";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_CW_UAV_Operator";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Standard_Squad
        {
          name="Standard Squad";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_CW_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_CW_Grenadier";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="NPC_CW_Marksman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="NPC_CW_Autorifleman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="NPC_CW_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="NPC_CW_AT_Assistant";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=1;
            vehicle="NPC_CW_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_B_Technical_Support_Squad
        {
          name="Technical Support Squad";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_CW_Medic";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="NPC_CW_Engineer";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="NPC_CW_Engineer";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="NPC_CW_Explosives_Specialist";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="NPC_CW_Marksman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=1;
            vehicle="NPC_CW_Autorifleman";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=1;
            vehicle="NPC_CW_UAV_Operator";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class NPC_B_Motorized_Squad_M1025A2_M2
        {
          name="Motorized Squad (M1025A2 [M2])";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1025A2_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M1025A2_M2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Motorized_Squad_M1232_M2
        {
          name="Motorized Squad (M1232 [M2])";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1232_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_B_Motorized_Squad_M1237_M2
        {
          name="Motorized Squad (M1237 [M2])";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1237_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_B_Motorized_Squad_Truck
        {
          name="Motorized Squad (Truck)";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1083A1P2_B";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_B_Stryker_Section
        {
          name="Stryker Section";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1134";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M1126_M2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

        class NPC_B_Mechanized_Squad_M1126
        {
          name="Mechanized Squad (M1126)";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1126_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_B_M6A2_Section
        {
          name="M6A2 Section";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M6A2";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M6A2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_M2A3_Section
        {
          name="M2A3 Section";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M2A3_BUSK_III";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M2A3_BUSK_III";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_M2A2_Section
        {
          name="M2A2  Section";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M2A2ODS_BUSK_I";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M2A2ODS_BUSK_I";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Mechanized_Squad_M6A2
        {
          name="Mechanized Squad (M6A2)";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M6A2";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M6A2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Armored
      {
        name="Armored";

        class NPC_B_Motorized_Recon_Team_M1151A1
        {
          name="Motorized Recon Team (M1151A1)";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1151A1";
            rank="COLONEL";
            position[]={0,-0,0};
          };
        };
        class NPC_B_M1A2SEPv2_Section
        {
          name="M1A2SEPv2 Section";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1A2SEPv2";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M1A2SEPv2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_M1A2SEPv1_Section
        {
          name="M1A2SEPv1 Section";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_M1A2SEPv1_TUSK_II";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_M1A2SEPv1_TUSK_II";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_M1A1AIM_Section
        {
          name="M1A1AIM Section";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_M1A1AIM_TUSK_I";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_M1A1AIM_TUSK_I";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class SpecOps
      {
        name="Special Forces";

        class NPC_B_Sniper_Team
        {
          name="Sniper Team";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Sniper";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_Spotter";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Recon_Team
        {
          name="Recon Team";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_Marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_CW_JTAC";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_CW_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
      };
      class Support
      {
        name="Support Infantry";

        class NPC_B_AT_Support_Team
        {
          name="AT Support Team";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_CW_AT_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_CW_AT_Assistant";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_B_AA_Support_Team
        {
          name="AA Support Team";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_CW_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_CW_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_B_MG_Support_Team
        {
          name="MG Support Team";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_Team_Lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_Machinegunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="NPC_CW_MG_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="NPC_CW_MG_Assistant";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
      };
      class Airborne
      {
        name="Airborne";

        class NPC_B_AH_6M_Squadron
        {
          name="AH-6M Squadron";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_AH_6M_Little_Bird";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_AH_6M_Little_Bird";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_AH_64D_Squadron
        {
          name="AH-64D Squadron";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_AH_64D";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_AH_64D";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_B_Blackhawk_Squadron
        {
          name="Blackhawk Squadron";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_UH_60M";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_UH_60M";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Air
      {
        name="Air";

        class NPC_B_F_181_Flight
        {
          name="F-181 Flight";
          faction="NPC_Commonwealth";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="NPC_CW_FA_181_Black_Wasp_II";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="NPC_CW_FA_181_Black_Wasp_II";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
    };
  };
};
