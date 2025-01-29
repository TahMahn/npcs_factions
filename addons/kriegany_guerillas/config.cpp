class cfgPatches
{
  class NPC_Kriegany_Guerrilas
  {
    units[]={"NPC_Kriegany_Team_Leader","NPC_Kriegany_Rifleman","NPC_Kriegany_Antitank","NPC_Kriegany_AntiAir","NPC_Kriegany_Grenadier","NPC_Kriegany_Medic","NPC_Kriegany_Marksman","NPC_Kriegany_Sniper","NPC_Kriegany_Autorifleman","NPC_Kriegany_Machine_Gunner","NPC_Kriegany_Driver","NPC_Kriegany_Pilot","NPC_Kriegany_Engineer","NPC_Kriegany_Offroad_M2","NPC_Kriegany_Offroad","NPC_Kriegany_Van_Cargo","NPC_Kriegany_Van_Transport","NPC_Kriegany_Truck","NPC_Kriegany_M2HB_M3AA","NPC_Kriegany_M2HB_M3","NPC_Kriegany_Mk19_M3","NPC_Kriegany_AW159_Wildcat","NPC_Kriegany_AW159_Wildcat_unarmed"};
    weapons[]={"NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","NPC_rhs_weap_rpg7_rhs_acc_pgo7v2","NPC_rhs_weap_igla","NPC_hlc_rifle_hk33a2RIS_GL_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_rifle_g3a3ris_hlc_muzzle_MAG58_Brakehlc_optic_LeupoldM3A","NPC_hlc_rifle_awcovert_rhsusf_acc_nxs_5522x56_md_sun","NPC_hlc_lmg_minimi_railed_hlc_muzzle_E1_FlashHideroptic_Holosight_blk_F","NPC_hlc_lmg_mk48_rhsusf_acc_ARDEC_M240rhsusf_acc_ELCANbipod_01_F_blk","NPC_hlc_smg_mp5N_tac"};
    requiredVersion=0.1;
    requiredAddons[]={"acre_sys_bf888s","ace_medical_treatment","A3_Weapons_F","hlcweapons_g3","niaweapons_226","po_factions_me","rhsgref_c_troops","A3_Weapons_F_Items","rhs_c_weapons","hlcweapons_FHAWCovert","hlcweapons_SAW","hlcweapons_mp5","rhsusf_c_troops"};
  };
};

class cfgFactionClasses
{
  class NPC_Kriegany_Guerrilas
  {
    icon="\npc_common\data\ui\npcs_logo_small.paa";
    displayName="Kriegany Guerillas";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class hlc_rifle_hk33a2RIS;
  class hlc_pistol_P226R_Elite;
  class rhs_weap_rpg7;
  class rhs_weap_igla;
  class hlc_rifle_hk33a2RIS_GL;
  class hlc_rifle_g3a3ris;
  class hlc_rifle_awcovert;
  class hlc_lmg_minimi_railed;
  class hlc_lmg_mk48;
  class hlc_smg_mp5N_tac;

  class NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3: hlc_rifle_hk33a2RIS
  {
    displayName="H&K HK33KA2 (RIS)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="hlc_muzzle_E1_FlashHider";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_g33_xps3";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="ACE_DBAL_A3_Red";
      };
    };
  };

  class NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1: hlc_pistol_P226R_Elite
  {
    displayName="SigSauer P226R Elite";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="hlc_acc_TLR1";
      };
    };
  };

  class NPC_rhs_weap_rpg7_rhs_acc_pgo7v2: rhs_weap_rpg7
  {
    displayName="RPG-7V2";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_pgo7v2";
      };
    };
  };

  class NPC_rhs_weap_igla: rhs_weap_igla
  {
    displayName="9K38 Igla";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_hlc_rifle_hk33a2RIS_GL_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3: hlc_rifle_hk33a2RIS_GL
  {
    displayName="H&K HK33KA2 (RIS/GL)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="hlc_muzzle_E1_FlashHider";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_g33_xps3";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="ACE_DBAL_A3_Red";
      };
    };
  };

  class NPC_hlc_rifle_g3a3ris_hlc_muzzle_MAG58_Brakehlc_optic_LeupoldM3A: hlc_rifle_g3a3ris
  {
    displayName="H&K G3A3 (RIS)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="hlc_muzzle_MAG58_Brake";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="hlc_optic_LeupoldM3A";
      };
    };
  };

  class NPC_hlc_rifle_awcovert_rhsusf_acc_nxs_5522x56_md_sun: hlc_rifle_awcovert
  {
    displayName="AI AWC-M (OD)";
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

  class NPC_hlc_lmg_minimi_railed_hlc_muzzle_E1_FlashHideroptic_Holosight_blk_F: hlc_lmg_minimi_railed
  {
    displayName="FN Minimi (Long/RIS)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="hlc_muzzle_E1_FlashHider";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="optic_Holosight_blk_F";
      };
    };
  };

  class NPC_hlc_lmg_mk48_rhsusf_acc_ARDEC_M240rhsusf_acc_ELCANbipod_01_F_blk: hlc_lmg_mk48
  {
    displayName="Mk 48 Mod 0";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsusf_acc_ARDEC_M240";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_ELCAN";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="bipod_01_F_blk";
      };
    };
  };

  class NPC_hlc_smg_mp5N_tac: hlc_smg_mp5N_tac
  {
    displayName="H&K MP5A5 (TAC)";
    scope=1;
    class LinkedItems
    {
    };
  };

};

class cfgVehicles
{
  class LOP_PMC_Infantry_TL;
  class FPGP_Hydration2_Tan_1_Backpanel;
  class rhs_rpg_2;
  class B_Carryall_cbr;
  class LOP_B_CA_EOD_tub;
  class LOP_PMC_Offroad_M2;
  class LOP_PMC_Offroad;
  class LOP_PMC_Van_Cargo;
  class LOP_PMC_Van_Trans;
  class LOP_PMC_Truck;
  class LOP_PMC_Static_M2;
  class LOP_PMC_Static_M2_MiniTripod;
  class LOP_PMC_Static_Mk19_TriPod;
  class I_E_Heli_light_03_dynamicLoadout_F;
  class I_E_Heli_light_03_unarmed_F;

  class NPC_Kriegany_Team_Leader: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Team Leader";
    uniformClass="LOP_U_PMC_tac_orng_plaid";
    weapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    respawnItems[]={"ACRE_BF888S","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet","ACE_fieldDressing","ACE_packingBandage","ACE_morphine","ACE_tourniquet"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Team_Leader_pack";
  };

  class NPC_Kriegany_Rifleman: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Rifleman";
    uniformClass="LOP_U_PMC_Fatigue_04";
    weapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Rifleman_pack";
  };

  class NPC_Kriegany_Antitank: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Antitank";
    uniformClass="LOP_U_PMC_Fatigue_02";
    weapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_rhs_weap_rpg7_rhs_acc_pgo7v2","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_rhs_weap_rpg7_rhs_acc_pgo7v2","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_rpg7_PG7VL_mag","rhs_rpg7_PG7VL_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Antitank_pack";
  };

  class NPC_Kriegany_AntiAir: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="AntiAir";
    uniformClass="LOP_U_PMC_tac_grn_plaid";
    weapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_rhs_weap_igla","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_rhs_weap_igla","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_AntiAir_pack";
  };

  class NPC_Kriegany_Grenadier: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Grenadier";
    uniformClass="LOP_U_PMC_tac_red_hi";
    weapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_GL_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_GL_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareWhite_F","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Grenadier_pack";
  };

  class NPC_Kriegany_Medic: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Medic";
    uniformClass="LOP_U_PMC_tac_blue_plaid";
    weapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    respawnMagazines[]={"hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Medic_pack";
  };

  class NPC_Kriegany_Marksman: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Marksman";
    uniformClass="LOP_U_PMC_Fatigue_03";
    weapons[]={"Binocular","NPC_hlc_rifle_g3a3ris_hlc_muzzle_MAG58_Brakehlc_optic_LeupoldM3A","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_g3a3ris_hlc_muzzle_MAG58_Brakehlc_optic_LeupoldM3A","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_IRDim_G3","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Marksman_pack";
  };

  class NPC_Kriegany_Sniper: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Sniper";
    uniformClass="LOP_U_PMC_tac_red_plaid";
    weapons[]={"Binocular","NPC_hlc_rifle_awcovert_rhsusf_acc_nxs_5522x56_md_sun","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_awcovert_rhsusf_acc_nxs_5522x56_md_sun","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_5rnd_300WM_AP_AWM","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_5rnd_300WM_AP_AWM","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Sniper_pack";
  };

  class NPC_Kriegany_Autorifleman: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Autorifleman";
    uniformClass="LOP_U_PMC_tac_blue_plaid";
    weapons[]={"Binocular","NPC_hlc_lmg_minimi_railed_hlc_muzzle_E1_FlashHideroptic_Holosight_blk_F","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_lmg_minimi_railed_hlc_muzzle_E1_FlashHideroptic_Holosight_blk_F","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Autorifleman_pack";
  };

  class NPC_Kriegany_Machine_Gunner: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Machine Gunner";
    uniformClass="LOP_U_PMC_Fatigue_01";
    weapons[]={"Binocular","NPC_hlc_lmg_mk48_rhsusf_acc_ARDEC_M240rhsusf_acc_ELCANbipod_01_F_blk","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_lmg_mk48_rhsusf_acc_ARDEC_M240rhsusf_acc_ELCANbipod_01_F_blk","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_100Rnd_762x51_Barrier_M60E4","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","hlc_200Rnd_762x51_M_M60E4","hlc_200Rnd_762x51_M_M60E4"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_100Rnd_762x51_Barrier_M60E4","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","hlc_200Rnd_762x51_M_M60E4","hlc_200Rnd_762x51_M_M60E4"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Machine_Gunner_pack";
  };

  class NPC_Kriegany_Driver: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Driver";
    uniformClass="LOP_U_PMC_tac_grn_plaid";
    weapons[]={"Binocular","NPC_hlc_smg_mp5N_tac","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_smg_mp5N_tac","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_GD_MP5"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="";
  };

  class NPC_Kriegany_Pilot: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Pilot";
    uniformClass="LOP_U_PMC_Fatigue_01";
    weapons[]={"Binocular","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_hgu56p_visor_mask_tan","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsusf_hgu56p_visor_mask_tan","rhs_googles_black"};
    backpack="";
  };

  class NPC_Kriegany_Engineer: LOP_PMC_Infantry_TL
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Engineer";
    uniformClass="LOP_U_PMC_Fatigue_03";
    weapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_hk33a2RIS_hlc_muzzle_E1_FlashHiderACE_DBAL_A3_Redrhsusf_acc_g33_xps3","NPC_hlc_pistol_P226R_Elite_hlc_acc_TLR1","Put","Throw"};
    items[]={"ACRE_BF888S","FirstAidKit","FirstAidKit","ToolKit"};
    respawnItems[]={"ACRE_BF888S","FirstAidKit","FirstAidKit","ToolKit"};
    magazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","IEDUrbanSmall_Remote_Mag","IEDUrbanSmall_Remote_Mag","IEDUrbanBig_Remote_Mag"};
    respawnMagazines[]={"rhs_mag_an_m8hc","rhs_mag_an_m8hc","rhs_mag_an_m8hc","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_EPR_HK33","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","hlc_15Rnd_9x19_JHP_P226","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","IEDUrbanSmall_Remote_Mag","IEDUrbanSmall_Remote_Mag","IEDUrbanBig_Remote_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","ItemGPS","Binocular","rhsgref_Booniehat_alpen","LOP_V_CarrierLite_WDL","rhs_googles_black"};
    backpack="NPC_Kriegany_Engineer_pack";
    canDeactivateMines = true;              // Can this character deactivate mines?
    engineer = true;    
  };

  class NPC_Kriegany_Offroad_M2: LOP_PMC_Offroad_M2
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Offroad (M2)";
    hiddenSelectionsTextures[]={"po_vehicles\data\camo\offroad\offroad_red_co.paa","po_vehicles\data\camo\offroad\offroad_red_co.paa"};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_Offroad: LOP_PMC_Offroad
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Offroad";
    hiddenSelectionsTextures[]={"po_vehicles\data\camo\offroad\offroad_khk_co.paa","po_vehicles\data\camo\offroad\offroad_khk_co.paa"};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_Van_Cargo: LOP_PMC_Van_Cargo
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Van (Cargo)";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_white_co.paa","a3\soft_f_orange\van_02\data\van_wheel_co.paa","a3\soft_f_orange\van_02\data\van_glass_utility_ca.paa","a3\soft_f_orange\van_02\data\van_body_white_co.paa"};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_Van_Transport: LOP_PMC_Van_Trans
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Van (Transport)";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_green_co.paa","a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa","a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa","a3\soft_f_orange\van_02\data\van_body_green_co.paa"};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_Truck: LOP_PMC_Truck
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Truck";
    hiddenSelectionsTextures[]={"po_vehicles\data\camo\van\van_01_ext_red_co.paa","a3\soft_f_gamma\van_01\data\van_01_adds_co.paa",""};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_M2HB_M3AA: LOP_PMC_Static_M2
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="M2HB (M3 AA)";
    hiddenSelectionsTextures[]={};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_M2HB_M3: LOP_PMC_Static_M2_MiniTripod
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="M2HB (M3)";
    hiddenSelectionsTextures[]={};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_Mk19_M3: LOP_PMC_Static_Mk19_TriPod
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="Mk19 (M3)";
    hiddenSelectionsTextures[]={};
    crew="NPC_Kriegany_Driver";
    typicalCargo[]={"NPC_Kriegany_Engineer"};
  };

  class NPC_Kriegany_AW159_Wildcat: I_E_Heli_light_03_dynamicLoadout_F
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="AW159 Wildcat";
    hiddenSelectionsTextures[]={"a3\air_f_enoch\heli_light_03\data\heli_light_03_base_eaf_co.paa","a3\supplies_f_enoch\ammoboxes\data\ammobox_eaf_co.paa","a3\supplies_f_enoch\ammoboxes\data\ammobox_signs_eaf_ca.paa"};
    crew="NPC_Kriegany_Pilot";
    typicalCargo[]={"NPC_Kriegany_Pilot"};
  };

  class NPC_Kriegany_AW159_Wildcat_unarmed: I_E_Heli_light_03_unarmed_F
  {
    faction="NPC_Kriegany_Guerrilas";
    side=2;
    displayName="AW159 Wildcat (unarmed)";
    hiddenSelectionsTextures[]={"a3\air_f_enoch\heli_light_03\data\heli_light_03_base_eaf_co.paa"};
    crew="NPC_Kriegany_Pilot";
    typicalCargo[]={"NPC_Kriegany_Pilot"};
  };


  class NPC_Kriegany_Team_Leader_pack: FPGP_Hydration2_Tan_1_Backpanel
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Rifleman_pack: FPGP_Hydration2_Tan_1_Backpanel
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Antitank_pack: rhs_rpg_2
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
     class _xx_rhs_rpg7_PG7VL_mag {count=2;magazine="rhs_rpg7_PG7VL_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_AntiAir_pack: rhs_rpg_2
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Grenadier_pack: FPGP_Hydration2_Tan_1_Backpanel
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
     class _xx_1Rnd_HE_Grenade_shell {count=8;magazine="1Rnd_HE_Grenade_shell";};
     class _xx_1Rnd_SmokeRed_Grenade_shell {count=3;magazine="1Rnd_SmokeRed_Grenade_shell";};
     class _xx_UGL_FlareWhite_F {count=3;magazine="UGL_FlareWhite_F";};
     class _xx_ACE_40mm_Flare_white {count=3;magazine="ACE_40mm_Flare_white";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Medic_pack: FPGP_Hydration2_Tan_1_Backpanel
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
    };
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class NPC_Kriegany_Marksman_pack: FPGP_Hydration2_Tan_1_Backpanel
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Sniper_pack: FPGP_Hydration2_Tan_1_Backpanel
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Autorifleman_pack: B_Carryall_cbr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
     class _xx_hlc_200rnd_556x45_M_SAW {count=5;magazine="hlc_200rnd_556x45_M_SAW";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Machine_Gunner_pack: B_Carryall_cbr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
     class _xx_hlc_200Rnd_762x51_M_M60E4 {count=2;magazine="hlc_200Rnd_762x51_M_M60E4";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Kriegany_Engineer_pack: LOP_B_CA_EOD_tub
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_hlc_15Rnd_9x19_JHP_P226 {count=1;magazine="hlc_15Rnd_9x19_JHP_P226";};
     class _xx_rhs_mag_m67 {count=5;magazine="rhs_mag_m67";};
     class _xx_IEDUrbanSmall_Remote_Mag {count=2;magazine="IEDUrbanSmall_Remote_Mag";};
     class _xx_IEDUrbanBig_Remote_Mag {count=1;magazine="IEDUrbanBig_Remote_Mag";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
