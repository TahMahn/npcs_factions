class cfgPatches
{
  class NPC_Skandi_Alliance
  {
    units[]={"NPC_SC_Commander","NPC_SC_2IC","NPC_SC_JTAC","NPC_SC_UAV_Operator","NPC_SC_Squad_Lead","NPC_SC_Team_lead","NPC_SC_Medic","NPC_SC_Grenadier","NPC_SC_Autorifleman","NPC_SC_Machinegunner","NPC_SC_AR_Assistant","NPC_SC_MG_Assistant","NPC_SC_AT_Specialist","NPC_SC_AT_Assistant","NPC_SC_AA_Specialist","NPC_SC_AA_Assistant","NPC_SC_Rifleman_HK416","NPC_SC_Rifleman_G3A3","NPC_SC_Explosive_Specialist","NPC_SC_Engineer","NPC_SC_Sniper","NPC_SC_Spotter","NPC_SC_Marksman","NPC_SC_Crewman","NPC_SC_Heli_Pilot","NPC_SC_Pilot","NPC_SC_Driver","NPC_SC_M113A3_M2","NPC_SC_M113A3_M240","NPC_SC_M113A3_MEV","NPC_SC_M113A3_Mk19","NPC_SC_M113A3_Unarmed","NPC_SC_M1230A1_Mk19","NPC_SC_M1230A1_MEDEVAC","NPC_SC_M1230A1_M2","NPC_SC_M1220","NPC_SC_M1220_CROWS_M2","NPC_SC_M1220_CROWS_Mk19","NPC_SC_M1151A1_MK19","NPC_SC_M1151A1_M240","NPC_SC_M1151A1_M2","NPC_SC_M1151A1_CROWS_Mk19","NPC_SC_M1151A1_CROWS_M2","NPC_SC_M1151A1","NPC_SC_M109A6","NPC_SC_M119A2","NPC_SC_M252","NPC_SC_F22A","NPC_SC_C_130J","NPC_SC_CH_53E","NPC_SC_CH_53E_Cargo","NPC_SC_CH_53E_GAU_21","NPC_SC_UH_1Y","NPC_SC_UH_1Y_MG","NPC_SC_UH_1Y_unarmed","NPC_SC_M1A1FEP","NPC_SC_M1A1HC","NPC_SC_FIM_92F_DMS","NPC_SC_M2HB_M3AA","NPC_SC_M41A4_TOW","NPC_SC_MK19_m3","NPC_SC_M2HB_M3","NPC_SC_UAZ","NPC_SC_UAZ_Open","NPC_SC_M1127_M2","NPC_SC_M1132_SMP_M2","NPC_SC_M1132_M2","NPC_SC_AW159_Wildcat","NPC_SC_AW159_Wildcat_Unarmed","NPC_SC_Badger_IFV","NPC_SC_C_130J_Cargo","NPC_SC_RHIB","NPC_SC_Assault_Boat","NPC_SC_Bardelas","NPC_SC_Ural_4320_Repair","NPC_SC_Ural_4320_Ammo","NPC_SC_Ural_4320_Fuel","NPC_SC_Ural_4320","NPC_SC_Ural_4320_Flatbed","NPC_SC_Ural_4320_Open","NPC_SC_Ural_4320_Open_Flatbed","NPC_SC_Speedboat_Minigun"};
    weapons[]={"NPC_hlc_pistol_P226R_hlc_acc_TLR1HLC_optic_ATT","NPC_hlc_rifle_g3sg1ris_hlc_acc_SF660_Barrelrhs_acc_1p87","NPC_hlc_rifle_g3a3vris_hlc_acc_SF660_BarrelHLC_optic_Aimpoint5000","NPC_rhs_weap_hk416d145_m320_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D","NPC_rhs_weap_hk416d145_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D","NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","NPC_rhs_weap_hk416d145_m320_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000_Br4","NPC_hlc_lmg_mk46_HLC_optic_Aimpoint5000","NPC_hlc_lmg_MG3KWS_b_hlc_optic_HensoldtZO_Hi_Docter_2D","NPC_rhs_weap_maaws_rhs_optic_maaws","NPC_rhs_weap_fim92","NPC_hlc_rifle_g3a3v","NPC_rhs_weap_M107_rhsusf_acc_nxs_5522x56_md_sun","NPC_hlc_wp_SSR_Blk_hlc_muzzle_OEMDevicehlc_acc_DBALPL_side_FLhlc_optic_ATACR_Offsetrhsusf_acc_harris_bipod","NPC_hlc_smg_MP5N","NPC_hlc_smg_mp5k_PDW"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_medical_treatment","A3_Weapons_F","niaweapons_226","rhsgref_c_troops","po_factions_eu","A3_Characters_F","A3_Weapons_F_Items","hlcweapons_g3","A3_Drones_F_Weapons_F_Gamma_Items","A3_Weapons_F_Exp","rhsusf_c_weapons","hlcweapons_SAW","hlcweapons_MG3s","rhsusf_c_troops","hlcweapons_SCAR","hlcweapons_mp5","rhs_c_troops"};
    skipWhenMissingDependencies = 1;
  };
};

class cfgFactionClasses
{
  class NPC_Skandi_Alliance
  {
    icon="";
    displayName="[NPC] Skandi Alliance";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class hlc_pistol_P226R;
  class hlc_rifle_g3sg1ris;
  class hlc_rifle_g3a3vris;
  class rhs_weap_hk416d145_m320;
  class rhs_weap_hk416d145;
  class rhs_weap_hk416d10;
  class hlc_lmg_mk46;
  class hlc_lmg_MG3KWS_b;
  class rhs_weap_maaws;
  class rhs_weap_fim92;
  class hlc_rifle_g3a3v;
  class rhs_weap_M107;
  class hlc_wp_SSR_Blk;
  class hlc_smg_MP5N;
  class hlc_smg_mp5k_PDW;

  class NPC_hlc_pistol_P226R_hlc_acc_TLR1HLC_optic_ATT: hlc_pistol_P226R
  {
    displayName="SigSauer P226R";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="HLC_optic_ATT";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_TLR1";
      };
    };
  };

  class NPC_hlc_rifle_g3sg1ris_hlc_acc_SF660_Barrelrhs_acc_1p87: hlc_rifle_g3sg1ris
  {
    displayName="H&K G3/SG1 (RIS)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_1p87";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_SF660_Barrel";
      };
    };
  };

  class NPC_hlc_rifle_g3a3vris_hlc_acc_SF660_BarrelHLC_optic_Aimpoint5000: hlc_rifle_g3a3vris
  {
    displayName="H&K G3A3 (Widegrip/RIS)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="HLC_optic_Aimpoint5000";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_SF660_Barrel";
      };
    };
  };

  class NPC_rhs_weap_hk416d145_m320_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D: rhs_weap_hk416d145_m320
  {
    displayName="HK416 D14.5 (M320)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="hlc_optic_HensoldtZO_lo_Docter_2D";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_DBALPL_side_FL";
      };
    };
  };

  class NPC_rhs_weap_hk416d145_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D: rhs_weap_hk416d145
  {
    displayName="HK416 D14.5";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="hlc_optic_HensoldtZO_lo_Docter_2D";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_DBALPL_side_FL";
      };
    };
  };

  class NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000: rhs_weap_hk416d10
  {
    displayName="HK416 D10";
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
        item="HLC_optic_Aimpoint5000";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_DBALPL_side_FL";
      };
    };
  };

  class NPC_rhs_weap_hk416d145_m320_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000_Br4: rhs_weap_hk416d145_m320
  {
    displayName="HK416 D14.5 (M320)";
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
        item="HLC_optic_Aimpoint5000_Br4";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_DBALPL_side_FL";
      };
    };
  };

  class NPC_hlc_lmg_mk46_HLC_optic_Aimpoint5000: hlc_lmg_mk46
  {
    displayName="Mk 46 Mod 0";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="HLC_optic_Aimpoint5000";
      };
    };
  };

  class NPC_hlc_lmg_MG3KWS_b_hlc_optic_HensoldtZO_Hi_Docter_2D: hlc_lmg_MG3KWS_b
  {
    displayName="Rheinmetall MG3-KWS (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="hlc_optic_HensoldtZO_Hi_Docter_2D";
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

  class NPC_hlc_rifle_g3a3v: hlc_rifle_g3a3v
  {
    displayName="H&K G3A3 (Widegrip)";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_M107_rhsusf_acc_nxs_5522x56_md_sun: rhs_weap_M107
  {
    displayName="M107";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_nxs_5522x56_md_sun";
      };
    };
  };

  class NPC_hlc_wp_SSR_Blk_hlc_muzzle_OEMDevicehlc_acc_DBALPL_side_FLhlc_optic_ATACR_Offsetrhsusf_acc_harris_bipod: hlc_wp_SSR_Blk
  {
    displayName="FN TPR (Black)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="hlc_muzzle_OEMDevice";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="hlc_optic_ATACR_Offset";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_DBALPL_side_FL";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhsusf_acc_harris_bipod";
      };
    };
  };

  class NPC_hlc_smg_MP5N: hlc_smg_MP5N
  {
    displayName="H&K MP5A5";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_hlc_smg_mp5k_PDW: hlc_smg_mp5k_PDW
  {
    displayName="H&K MP5K-PDW";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class I_soldier_F;
  class I_UAV_01_backpack_F;
  class LOP_B_FP_MG42_tub;
  class LOP_B_CA_EOD_tub;
  class rhsusf_m113_usarmy;
  class rhsusf_m113_usarmy_M240;
  class rhsusf_m113_usarmy_medical;
  class rhsusf_m113_usarmy_MK19;
  class rhsusf_m113_usarmy_unarmed;
  class rhsusf_M1230_MK19_usarmy_wd;
  class rhsusf_M1230a1_usarmy_wd;
  class rhsusf_M1230_M2_usarmy_wd;
  class rhsusf_M1220_usarmy_wd;
  class rhsusf_M1220_M153_M2_usarmy_wd;
  class rhsusf_M1220_M153_MK19_usarmy_wd;
  class rhsusf_m1151_mk19_v3_usmc_wd;
  class rhsusf_m1151_m240_v3_usmc_wd;
  class rhsusf_m1151_m2_v3_usmc_wd;
  class rhsusf_m1151_mk19crows_usmc_wd;
  class rhsusf_m1151_m2crows_usmc_wd;
  class rhsusf_m1151_usmc_wd;
  class rhsusf_m109_usarmy;
  class RHS_M119_WD;
  class RHS_M252_WD;
  class rhsusf_f22;
  class RHS_C130J;
  class rhsusf_CH53E_USMC;
  class rhsusf_CH53e_USMC_cargo;
  class rhsusf_CH53E_USMC_GAU21;
  class RHS_UH1Y_FFAR;
  class RHS_UH1Y;
  class RHS_UH1Y_UNARMED;
  class rhsusf_m1a1fep_wd;
  class rhsusf_m1a1hc_wd;
  class RHS_Stinger_AA_pod_WD;
  class RHS_M2StaticMG_WD;
  class RHS_TOW_TriPod_WD;
  class RHS_MK19_TriPod_WD;
  class RHS_M2StaticMG_MiniTripod_WD;
  class LOP_PMC_UAZ;
  class LOP_PMC_UAZ_Open;
  class rhsusf_stryker_m1127_m2_wd;
  class rhsusf_stryker_m1132_m2_wd;
  class rhsusf_stryker_m1132_m2_np_wd;
  class I_Heli_light_03_dynamicLoadout_F;
  class I_Heli_light_03_unarmed_F;
  class B_T_APC_Wheeled_01_cannon_F;
  class RHS_C130J_Cargo;
  class I_C_Boat_Transport_02_F;
  class I_C_Boat_Transport_01_F;
  class B_T_APC_Tracked_01_AA_F;
  class RHS_Ural_Repair_MSV_01;
  class RHS_Ural_Ammo_MSV_01;
  class RHS_Ural_Fuel_MSV_01;
  class RHS_Ural_MSV_01;
  class RHS_Ural_Flat_MSV_01;
  class RHS_Ural_Open_MSV_01;
  class RHS_Ural_Open_Flat_MSV_01;
  class B_Boat_Armed_01_minigun_F;

  class NPC_SC_Commander: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Commander";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"Rangefinder","NPC_hlc_pistol_P226R_hlc_acc_TLR1HLC_optic_ATT","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_hlc_pistol_P226R_hlc_acc_TLR1HLC_optic_ATT","Put","Throw"};
    items[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226"};
    respawnMagazines[]={"hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","PO_H_cap_tub","PO_V_SPCS_TUB","FPGP2_Headgear_Face_ESS_1"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","PO_H_cap_tub","PO_V_SPCS_TUB","FPGP2_Headgear_Face_ESS_1"};
    backpack="";
  };

  class NPC_SC_2IC: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="2IC";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"Rangefinder","NPC_hlc_rifle_g3sg1ris_hlc_acc_SF660_Barrelrhs_acc_1p87","NPC_hlc_pistol_P226R_hlc_acc_TLR1HLC_optic_ATT","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_hlc_rifle_g3sg1ris_hlc_acc_SF660_Barrelrhs_acc_1p87","NPC_hlc_pistol_P226R_hlc_acc_TLR1HLC_optic_ATT","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
    respawnMagazines[]={"hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","LOP_H_Beanie_dpmw","PO_V_SPCS_TUB","FPGP2_Headgear_Face_gatorz_1"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","LOP_H_Beanie_dpmw","PO_V_SPCS_TUB","FPGP2_Headgear_Face_gatorz_1"};
    backpack="";
  };

  class NPC_SC_JTAC: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="JTAC";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"Laserdesignator_01_khk_F","NPC_hlc_rifle_g3a3vris_hlc_acc_SF660_BarrelHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_01_khk_F","NPC_hlc_rifle_g3a3vris_hlc_acc_SF660_BarrelHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","HandGrenade","HandGrenade"};
    respawnMagazines[]={"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","I_UavTerminal","Laserdesignator_01_khk_F","rhsgref_helmet_pasgt_erdl_rhino","PO_V_SPCS_TUB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","I_UavTerminal","Laserdesignator_01_khk_F","rhsgref_helmet_pasgt_erdl_rhino","PO_V_SPCS_TUB"};
    backpack="";
  };

  class NPC_SC_UAV_Operator: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="UAV Operator";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"Binocular","NPC_hlc_rifle_g3a3vris_hlc_acc_SF660_BarrelHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_g3a3vris_hlc_acc_SF660_BarrelHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","HandGrenade","HandGrenade"};
    respawnMagazines[]={"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","HandGrenade","HandGrenade"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","I_UavTerminal","Binocular","rhsgref_helmet_pasgt_erdl_rhino","PO_V_SPCS_TUB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","I_UavTerminal","Binocular","rhsgref_helmet_pasgt_erdl_rhino","PO_V_SPCS_TUB"};
    backpack="NPC_SC_UAV_Operator_pack";
  };

  class NPC_SC_Squad_Lead: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Squad Lead";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d145_m320_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d145_m320_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m715_Green","rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M397_HET"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m662_red","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m715_Green","rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M397_HET"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_SL"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_SL"};
    backpack="";
  };

  class NPC_SC_Team_lead: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Team lead";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d145_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d145_hlc_acc_DBALPL_side_FLhlc_optic_HensoldtZO_lo_Docter_2D","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue"};
    respawnMagazines[]={"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_TL"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_TL"};
    backpack="";
  };

  class NPC_SC_Medic: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Medic";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellPurple","SmokeShellOrange","SmokeShellOrange"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellPurple","SmokeShellPurple","SmokeShellOrange","SmokeShellOrange"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_MED"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_MED"};
    backpack="NPC_SC_Medic_pack";
  };

  class NPC_SC_Grenadier: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Grenadier";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d145_m320_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000_Br4","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d145_m320_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000_Br4","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M585_white_cluster","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m662_red","rhs_mag_M663_green_cluster","rhs_mag_M663_green_cluster","rhs_mag_M664_red_cluster","rhs_mag_M664_red_cluster","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m715_Green"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M585_white_cluster","rhs_mag_M585_white_cluster","rhs_mag_m661_green","rhs_mag_m661_green","rhs_mag_m662_red","rhs_mag_m662_red","rhs_mag_M663_green_cluster","rhs_mag_M663_green_cluster","rhs_mag_M664_red_cluster","rhs_mag_M664_red_cluster","rhs_mag_m713_Red","rhs_mag_m713_Red","rhs_mag_m714_White","rhs_mag_m714_White","rhs_mag_m715_Green","rhs_mag_m715_Green"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_GREN"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_GREN"};
    backpack="NPC_SC_Grenadier_pack";
  };

  class NPC_SC_Autorifleman: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Autorifleman";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_hlc_lmg_mk46_HLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_lmg_mk46_HLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","hlc_200rnd_556x45_M_SAW","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","hlc_200rnd_556x45_M_SAW","SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_MG","rhsusf_oakley_goggles_clr"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_MG","rhsusf_oakley_goggles_clr"};
    backpack="NPC_SC_Autorifleman_pack";
  };

  class NPC_SC_Machinegunner: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Machinegunner";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_hlc_lmg_MG3KWS_b_hlc_optic_HensoldtZO_Hi_Docter_2D","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_lmg_MG3KWS_b_hlc_optic_HensoldtZO_Hi_Docter_2D","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_MG","rhsusf_shemagh2_gogg_grn"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_MG","rhsusf_shemagh2_gogg_grn"};
    backpack="NPC_SC_Machinegunner_pack";
  };

  class NPC_SC_AR_Assistant: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="AR Assistant";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF"};
    backpack="NPC_SC_AR_Assistant_pack";
  };

  class NPC_SC_MG_Assistant: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="MG Assistant";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_T_M60E4"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    backpack="NPC_SC_MG_Assistant_pack";
  };

  class NPC_SC_AT_Specialist: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="AT Specialist";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","NPC_rhs_weap_maaws_rhs_optic_maaws","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","NPC_rhs_weap_maaws_rhs_optic_maaws","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB"};
    backpack="NPC_SC_AT_Specialist_pack";
  };

  class NPC_SC_AT_Assistant: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="AT Assistant";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT","rhs_mag_maaws_HEAT"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    backpack="NPC_SC_AT_Assistant_pack";
  };

  class NPC_SC_AA_Specialist: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="AA Specialist";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","NPC_rhs_weap_fim92","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","NPC_rhs_weap_fim92","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB"};
    backpack="NPC_SC_AA_Specialist_pack";
  };

  class NPC_SC_AA_Assistant: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="AA Assistant";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhs_fim92_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    backpack="NPC_SC_AA_Assistant_pack";
  };

  class NPC_SC_Rifleman_HK416: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Rifleman HK416";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF"};
    backpack="";
  };

  class NPC_SC_Rifleman_G3A3: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Rifleman G3A3";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_hlc_rifle_g3a3v","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_g3a3v","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2"};
    backpack="";
  };

  class NPC_SC_Explosive_Specialist: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Explosive Specialist";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","MineDetector","ToolKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","MineDetector","ToolKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","DemoCharge_Remote_Mag","DemoCharge_Remote_Mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF","rhsusf_shemagh2_gogg_grn"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF","rhsusf_shemagh2_gogg_grn"};
    backpack="NPC_SC_Explosive_Specialist_pack";
  };

  class NPC_SC_Engineer: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Engineer";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_hlc_rifle_g3a3v","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_g3a3v","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit","MineDetector"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_T_G3"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2","rhsusf_shemagh2_grn"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF2","rhsusf_shemagh2_grn"};
    backpack="NPC_SC_Engineer_pack";
  };

  class NPC_SC_Sniper: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Sniper";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"Rangefinder","NPC_rhs_weap_M107_rhsusf_acc_nxs_5522x56_md_sun","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_rhs_weap_M107_rhsusf_acc_nxs_5522x56_md_sun","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_mk211"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_M33","rhsusf_mag_10Rnd_STD_50BMG_mk211"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_Booniehat_m81","PO_V_SPCS_TUB_SNIP","rhsusf_shemagh2_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_Booniehat_m81","PO_V_SPCS_TUB_SNIP","rhsusf_shemagh2_tan"};
    backpack="";
  };

  class NPC_SC_Spotter: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Spotter";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"Rangefinder","NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"Rangefinder","NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_Booniehat_m81","PO_V_SPCS_TUB","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Rangefinder","rhs_Booniehat_m81","PO_V_SPCS_TUB","rhsusf_shemagh2_gogg_tan"};
    backpack="";
  };

  class NPC_SC_Marksman: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Marksman";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"Binocular","NPC_hlc_wp_SSR_Blk_hlc_muzzle_OEMDevicehlc_acc_DBALPL_side_FLhlc_optic_ATACR_Offsetrhsusf_acc_harris_bipod","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_wp_SSR_Blk_hlc_muzzle_OEMDevicehlc_acc_DBALPL_side_FLhlc_optic_ATACR_Offsetrhsusf_acc_harris_bipod","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH","hlc_20Rnd_762x51_T_SCARH"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_SNIP","rhsusf_shemagh2_gogg_tan"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_SNIP","rhsusf_shemagh2_gogg_tan"};
    backpack="";
  };

  class NPC_SC_Crewman: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Crewman";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_hlc_smg_MP5N","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_smg_MP5N","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsusf_cvc_green_helmet","PO_V_SPCS_TUB_CREW"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsusf_cvc_green_helmet","PO_V_SPCS_TUB_CREW"};
    backpack="";
  };

  class NPC_SC_Heli_Pilot: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Heli Pilot";
    uniformClass="LOP_U_Fatigue_BDU_BLK_01";
    weapons[]={"NPC_hlc_smg_mp5k_PDW","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_smg_mp5k_PDW","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsusf_hgu56p_visor_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsusf_hgu56p_visor_black"};
    backpack="";
  };

  class NPC_SC_Pilot: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Pilot";
    uniformClass="LOP_U_Fatigue_BDU_BLK_01";
    weapons[]={"NPC_hlc_smg_mp5k_PDW","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_smg_mp5k_PDW","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_zsh7a_alt"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_zsh7a_alt"};
    backpack="";
  };

  class NPC_SC_Driver: I_soldier_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Driver";
    uniformClass="rhsgref_uniform_woodland";
    weapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_hk416d10_rhsusf_acc_SFMB556hlc_acc_DBALPL_side_FLHLC_optic_Aimpoint5000","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[]={"SmokeShell","SmokeShell","SmokeShellRed","SmokeShellGreen","SmokeShellBlue","HandGrenade","HandGrenade","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhsgref_helmet_pasgt_erdl","PO_V_SPCS_TUB_RIF"};
    backpack="";
  };

  class NPC_SC_M113A3_M2: rhsusf_m113_usarmy
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M113A3 (M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_h_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_h_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_wd_co.paa"};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_M113A3_M240: rhsusf_m113_usarmy_M240
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M113A3 (M240)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",""};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_M113A3_MEV: rhsusf_m113_usarmy_medical
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M113A3 (MEV)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_med_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","",""};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_M113A3_Mk19: rhsusf_m113_usarmy_MK19
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M113A3 (Mk19)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",""};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_M113A3_Unarmed: rhsusf_m113_usarmy_unarmed
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M113A3 (Unarmed)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_wd_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa","",""};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_M1230A1_Mk19: rhsusf_M1230_MK19_usarmy_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1230A1 (Mk19)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_caiman\data\cmn_body_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_chassis_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_accessory2_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_amb_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1230A1_MEDEVAC: rhsusf_M1230a1_usarmy_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1230A1 (MEDEVAC)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_caiman\data\cmn_body_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_chassis_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_accessory2_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_amb_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1230A1_M2: rhsusf_M1230_M2_usarmy_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1230A1 (M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_caiman\data\cmn_body_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_chassis_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_accessory2_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_amb_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1220: rhsusf_M1220_usarmy_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1220";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_caiman\data\cmn_body_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_chassis_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_accessory2_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_amb_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1220_CROWS_M2: rhsusf_M1220_M153_M2_usarmy_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1220 (CROWS/M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_caiman\data\cmn_body_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_chassis_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_accessory2_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_amb_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1220_CROWS_Mk19: rhsusf_M1220_M153_MK19_usarmy_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1220 (CROWS/Mk19)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_caiman\data\cmn_body_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_chassis_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_accessory2_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_armor_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\cmn_amb_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1151A1_MK19: rhsusf_m1151_mk19_v3_usmc_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1151A1 (Mk19)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1151A1_M240: rhsusf_m1151_m240_v3_usmc_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1151A1 (M240)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1151A1_M2: rhsusf_m1151_m2_v3_usmc_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1151A1 (M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","rhsusf\addons\rhsusf_rg33l\data\mctags_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1151A1_CROWS_Mk19: rhsusf_m1151_mk19crows_usmc_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1151A1 (CROWS/Mk19)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1151A1_CROWS_M2: rhsusf_m1151_m2crows_usmc_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1151A1 (CROWS/M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1151A1: rhsusf_m1151_usmc_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1151A1";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_ext_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_tire_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_int_wd_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1151_acc_wd_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa","rhsusf\addons\rhsusf_m11xx\data\rhsusf_m1152m1165_wd_co.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M109A6: rhsusf_m109_usarmy
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M109A6";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_wd_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_wd_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_wd_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_M119A2: RHS_M119_WD
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M119A2";
    hiddenSelectionsTextures[]={};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M252: RHS_M252_WD
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M252";
    hiddenSelectionsTextures[]={};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_F22A: rhsusf_f22
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="F22A";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_f22\data\f22_b1.paa","rhsusf\addons\rhsusf_f22\data\f22_wing_spads.paa","rhsusf\addons\rhsusf_f22\data\1stfw.paa","rhsusf\addons\rhsusf_f22\data\94fs.paa","rhsusf\addons\rhsusf_f22\data\acc.paa","rhsusf\addons\rhsusf_f22\data\af04-066.paa","rhsusf\addons\rhsusf_f22\data\ff.paa","rhsusf\addons\rhsusf_f22\data\marking1.paa","rhsusf\addons\rhsusf_f22\data\star1.paa"};
    crew="NPC_SC_Pilot";
    typicalCargo[]={"NPC_SC_Pilot"};
  };

  class NPC_SC_C_130J: RHS_C130J
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="C-130J";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa","rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"};
    crew="NPC_SC_Pilot";
    typicalCargo[]={"NPC_SC_Pilot"};
  };

  class NPC_SC_CH_53E: rhsusf_CH53E_USMC
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="CH-53E";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa","rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usmcgrey\4_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usmcgrey\2_ca.paa"};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_CH_53E_Cargo: rhsusf_CH53e_USMC_cargo
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="CH-53E (Cargo)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa","rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usmcgrey\6_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usmcgrey\0_ca.paa"};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_CH_53E_GAU_21: rhsusf_CH53E_USMC_GAU21
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="CH-53E (GAU-21)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_ch53\data\ch53_1_co.paa","rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usmcgrey\5_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usmcgrey\5_ca.paa"};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_UH_1Y: RHS_UH1Y_FFAR
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="UH-1Y";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa","rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa","","","","","","","","","","","","","","","","","","","","","","","","",""};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_UH_1Y_MG: RHS_UH1Y
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="UH-1Y (MG)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa","rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa","","","","","","","","","","","","","","","","","","","","","","","","",""};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_UH_1Y_unarmed: RHS_UH1Y_UNARMED
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="UH-1Y (unarmed)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa","rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa","","","","","","","","","","","","","","","","","","","","","","","","",""};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_M1A1FEP: rhsusf_m1a1fep_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1A1FEP";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","","","","","","","rhsusf\addons\rhsusf_decals\data\labels\armyplt_abrams_wd\6_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\barrelart_abrams_wd\15_ca.paa",""};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_M1A1HC: rhsusf_m1a1hc_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1A1HC";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa","rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa","rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa","","","","","","","","rhsusf\addons\rhsusf_decals\data\labels\armyplt_abrams_wd\7_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\barrelart_abrams_wd\25_ca.paa",""};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_FIM_92F_DMS: RHS_Stinger_AA_pod_WD
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="FIM-92F (DMS)";
    hiddenSelectionsTextures[]={};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M2HB_M3AA: RHS_M2StaticMG_WD
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M2HB (M3/AA)";
    hiddenSelectionsTextures[]={};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M41A4_TOW: RHS_TOW_TriPod_WD
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M41A4 TOW";
    hiddenSelectionsTextures[]={};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_MK19_m3: RHS_MK19_TriPod_WD
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Mk19 (M3)";
    hiddenSelectionsTextures[]={};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M2HB_M3: RHS_M2StaticMG_MiniTripod_WD
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M2HB (M3)";
    hiddenSelectionsTextures[]={};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_UAZ: LOP_PMC_UAZ
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="UAZ";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","","","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_UAZ_Open: LOP_PMC_UAZ_Open
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="UAZ (Open)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","","","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1127_M2: rhsusf_stryker_m1127_m2_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1127 (M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1127_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_lras3_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\q_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\-_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\1_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\2_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\hulldecals_stryker_wd\rhusf_hulldecal_dragonwd_ca.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1132_SMP_M2: rhsusf_stryker_m1132_m2_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1132 (SMP/M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\f_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\-_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\3_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\2_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\hulldecals_stryker_wd\rhsusf_hulldecal_wolfwd_ca.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_M1132_M2: rhsusf_stryker_m1132_m2_np_wd
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="M1132 (M2)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1132_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa","rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa","rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermfc\data\rhsusf_mfc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_props\jerrycans\sceptermwc\data\rhsusf_mwc_od_co.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\g_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\-_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\2_ca.paa","rhsusf\addons\rhsusf_decals\data\numbers\usstencil\1_ca.paa","rhsusf\addons\rhsusf_decals\data\labels\hulldecals_stryker_wd\rhusf_hulldecal_dragonwd_ca.paa","a3\map_vr\data\picturemap_ca.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_AW159_Wildcat: I_Heli_light_03_dynamicLoadout_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="AW159 Wildcat";
    hiddenSelectionsTextures[]={"a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa","a3\weapons_f\ammoboxes\data\ammobox_co.paa","a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_AW159_Wildcat_Unarmed: I_Heli_light_03_unarmed_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="AW159 Wildcat (Unarmed)";
    hiddenSelectionsTextures[]={"a3\air_f_epb\heli_light_03\data\heli_light_03_base_co.paa"};
    crew="NPC_SC_Heli_Pilot";
    typicalCargo[]={"NPC_SC_Heli_Pilot"};
  };

  class NPC_SC_Badger_IFV: B_T_APC_Wheeled_01_cannon_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Badger IFV";
    hiddenSelectionsTextures[]={"a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_base_olive_co.paa","a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_adds_olive_co.paa","a3\armor_f_exp\apc_wheeled_01\data\apc_wheeled_01_tows_olive_co.paa","a3\armor_f\data\camonet_nato_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_C_130J_Cargo: RHS_C130J_Cargo
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="C-130J (Cargo)";
    hiddenSelectionsTextures[]={"rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa","rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa"};
    crew="NPC_SC_Pilot";
    typicalCargo[]={"NPC_SC_Pilot"};
  };

  class NPC_SC_RHIB: I_C_Boat_Transport_02_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="RHIB";
    hiddenSelectionsTextures[]={"a3\boat_f_exp\boat_transport_02\data\boat_transport_02_exterior_co.paa","a3\boat_f_exp\boat_transport_02\data\boat_transport_02_interior_2_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Assault_Boat: I_C_Boat_Transport_01_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Assault Boat";
    hiddenSelectionsTextures[]={"a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Bardelas: B_T_APC_Tracked_01_AA_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Bardelas";
    hiddenSelectionsTextures[]={"a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_aa_body_olive_co.paa","a3\armor_f_exp\apc_tracked_01\data\mbt_01_body_olive_co.paa","a3\armor_f_exp\apc_tracked_01\data\apc_tracked_01_aa_tower_olive_co.paa","a3\armor_f\data\camonet_nato_green_co.paa"};
    crew="NPC_SC_Crewman";
    typicalCargo[]={"NPC_SC_Crewman"};
  };

  class NPC_SC_Ural_4320_Repair: RHS_Ural_Repair_MSV_01
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Ural-4320 (Repair)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_repair_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Ural_4320_Ammo: RHS_Ural_Ammo_MSV_01
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Ural-4320 (Ammo)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Ural_4320_Fuel: RHS_Ural_Fuel_MSV_01
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Ural-4320 (Fuel)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Ural_4320: RHS_Ural_MSV_01
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Ural-4320";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Ural_4320_Flatbed: RHS_Ural_Flat_MSV_01
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Ural-4320 (Flatbed)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Ural_4320_Open: RHS_Ural_Open_MSV_01
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Ural-4320 (Open)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Ural_4320_Open_Flatbed: RHS_Ural_Open_Flat_MSV_01
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Ural-4320 (Open/Flatbed)";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","",""};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };

  class NPC_SC_Speedboat_Minigun: B_Boat_Armed_01_minigun_F
  {
    faction="NPC_Skandi_Alliance";
    side=2;
    displayName="Speedboat Minigun";
    hiddenSelectionsTextures[]={"a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"};
    crew="NPC_SC_Driver";
    typicalCargo[]={"NPC_SC_Driver"};
  };


  class NPC_SC_UAV_Operator_pack: I_UAV_01_backpack_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_Medic_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=12;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class NPC_SC_Grenadier_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_M441_HE {count=4;magazine="rhs_mag_M441_HE";};
     class _xx_rhs_mag_M585_white_cluster {count=2;magazine="rhs_mag_M585_white_cluster";};
     class _xx_rhs_mag_m661_green {count=2;magazine="rhs_mag_m661_green";};
     class _xx_rhs_mag_m662_red {count=2;magazine="rhs_mag_m662_red";};
     class _xx_rhs_mag_M663_green_cluster {count=2;magazine="rhs_mag_M663_green_cluster";};
     class _xx_rhs_mag_M664_red_cluster {count=2;magazine="rhs_mag_M664_red_cluster";};
     class _xx_rhs_mag_m713_Red {count=2;magazine="rhs_mag_m713_Red";};
     class _xx_rhs_mag_m714_White {count=2;magazine="rhs_mag_m714_White";};
     class _xx_rhs_mag_m715_Green {count=2;magazine="rhs_mag_m715_Green";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_Autorifleman_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_200rnd_556x45_M_SAW {count=4;magazine="hlc_200rnd_556x45_M_SAW";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_Machinegunner_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_100Rnd_762x51_T_M60E4 {count=3;magazine="hlc_100Rnd_762x51_T_M60E4";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_AR_Assistant_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_200rnd_556x45_M_SAW {count=4;magazine="hlc_200rnd_556x45_M_SAW";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_MG_Assistant_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_100Rnd_762x51_T_M60E4 {count=3;magazine="hlc_100Rnd_762x51_T_M60E4";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_AT_Specialist_pack: LOP_B_CA_EOD_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_maaws_HEAT {count=3;magazine="rhs_mag_maaws_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_AT_Assistant_pack: LOP_B_CA_EOD_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_maaws_HEAT {count=3;magazine="rhs_mag_maaws_HEAT";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_AA_Specialist_pack: LOP_B_CA_EOD_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_fim92_mag {count=2;magazine="rhs_fim92_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_AA_Assistant_pack: LOP_B_CA_EOD_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_fim92_mag {count=2;magazine="rhs_fim92_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_SC_Explosive_Specialist_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_DemoCharge_Remote_Mag {count=2;magazine="DemoCharge_Remote_Mag";};
     class _xx_rhs_ec400_sand_mag {count=3;magazine="rhs_ec400_sand_mag";};
    };
    class TransportItems
    {
     class _xx_MineDetector {count=1;name="MineDetector";};
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class NPC_SC_Engineer_pack: LOP_B_FP_MG42_tub
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
     class _xx_MineDetector {count=1;name="MineDetector";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
class cfgGroups
{  
  class INDEP
  {
    name="Independent";
    class Skandi_Alliance
    {
      name="[NPC] Skandi Alliance";

      class Infantry
      {
        name="Infantry";

        class NPC_R_Command_Team
        {
          name="Command Team";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Commander";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_2IC";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_JTAC";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_UAV_Operator";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Standard_Squad
        {
          name="Standard Squad";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_Rifleman_G3A3";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_SC_Rifleman_HK416";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_SC_Engineer";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="NPC_SC_Autorifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="NPC_SC_AR_Assistant";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class NPC_R_MG_Squad
        {
          name="MG Squad";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_Marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_SC_Machinegunner";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_SC_Machinegunner";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="NPC_SC_MG_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="NPC_SC_MG_Assistant";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class NPC_R_AT_Squad
        {
          name="AT Squad";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_Rifleman_G3A3";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_SC_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_SC_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="NPC_SC_AT_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="NPC_SC_AT_Assistant";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
        class NPC_R_AA_Squad
        {
          name="AA Squad";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_Medic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_Grenadier";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_SC_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_SC_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=2;
            vehicle="NPC_SC_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=2;
            vehicle="NPC_SC_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class NPC_R_Motorized_Squad_M1230A1_Mk19
        {
          name="Motorized Squad (M1230A1 [Mk19])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1230A1_Mk19";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Motorized_Squad_M1230A1_M2
        {
          name="Motorized Squad (M1230A1 [M2])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1230A1_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Motorized_Squad_M1220_CROWS_Mk19
        {
          name="Motorized Squad (M1220 [CROWS/Mk19])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1220_CROWS_Mk19";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Motorized_Squad_M1220_CROWS_M2
        {
          name="Motorized Squad (M1220 [CROWS/M2])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1220_CROWS_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Motorized_Squad_M1220
        {
          name="Motorized Squad (M1220)";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1220";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Motorized_Squad_Ural
        {
          name="Motorized Squad (Ural)";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Ural_4320";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Motorized_Squad_Ural_Open
        {
          name="Motorized Squad (Ural [Open])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Ural_4320_Open";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Mechanized_Squad_M113A3_Mk19
        {
          name="Mechanized Squad (M113A3 [Mk19])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M113A3_Mk19";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Motorised_Squad_M1151A1_M2
        {
          name="Motorised Squad (M1151A1 [M2])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1151A1_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1151A1";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Motorised_Squad_M1151A1_M240
        {
          name="Motorised Squad (M1151A1 [M240])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1151A1_M240";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1151A1";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Motorised_Squad_M1151A1_Mk19
        {
          name="Motorised Squad (M1151A1 [Mk19])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1151A1_MK19";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1151A1";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Motorised_Squad_M1151A1_CROWS_M2
        {
          name="Motorised Squad (M1151A1 [CROWS/M2])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1151A1_CROWS_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1151A1";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Motorised_Squad_M1151A1_CROWS_Mk19
        {
          name="Motorised Squad (M1151A1 [CROWS/Mk19])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1151A1_CROWS_Mk19";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1151A1";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

        class NPC_R_Mechanized_Squad_M113A3_M2
        {
          name="Mechanized Squad (M113A3 [M2])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M113A3_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Mechanized_Squad_M113A3_M240
        {
          name="Mechanized Squad (M113A3 [M240])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M113A3_M240";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Mechanized_Squad_M113A3_Unarmed
        {
          name="Mechanized Squad (M113A3 [Unarmed])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M113A3_Unarmed";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Mechanized_Squad_M1127_M2
        {
          name="Mechanized Squad (M1127 [M2])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1127_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Mechanized_Squad_M1132_M2
        {
          name="Mechanized Squad (M1132 [M2])";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1132_M2";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_R_Bagder_IFV_Section
        {
          name="Bagder IFV Section";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Badger_IFV";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Badger_IFV";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_M1127_Section
        {
          name="M1127 Section";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1127_M2";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1127_M2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_M1132_Section
        {
          name="M1132 Section";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1132_M2";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1132_M2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Armored
      {
        name="Armored";

        class NPC_R_M1A1FEP_Section
        {
          name="M1A1FEP Section";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1A1FEP";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1A1FEP";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_M1A1HC_Section
        {
          name="M1A1HC Section";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_M1A1HC";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_M1A1HC";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class SpecOps
      {
        name="Special Forces";

        class NPC_R_Sniper_Team
        {
          name="Sniper Team";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Sniper";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Spotter";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Recon_Team
        {
          name="Recon Team";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_JTAC";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_Rifleman_HK416";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_R_Recon_Squad
        {
          name="Recon Squad";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Squad_Lead";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_Sniper";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_Spotter";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_SC_Marksman";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_SC_Medic";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="NPC_SC_Explosive_Specialist";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="NPC_SC_JTAC";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
        };
      };
      class Support
      {
        name="Support Infantry";

        class NPC_R_AT_Team
        {
          name="AT Team";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_AT_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_AT_Assistant";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_R_AA_Team
        {
          name="AA Team";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_AA_Assistant";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_R_MG_Team
        {
          name="MG Team";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_Team_lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_Machinegunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_SC_MG_Assistant";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_SC_MG_Assistant";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
      };
      class Airborne
      {
        name="Airborne";

        class NPC_R_UH_1Y_Squadron
        {
          name="UH-1Y Squadron";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_UH_1Y_MG";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_UH_1Y_MG";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_CH_53E_Squadron
        {
          name="CH-53E Squadron";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_CH_53E_GAU_21";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_CH_53E";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_AW159_Wildcat_Squadron
        {
          name="AW159 Wildcat Squadron";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_AW159_Wildcat";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_AW159_Wildcat";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Air
      {
        name="Air";

        class NPC_R_F_22A_Squadron
        {
          name="F-22A Squadron";
          faction="NPC_Skandi_Alliance";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_SC_F22A";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_SC_F22A";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
    };
  };
};
