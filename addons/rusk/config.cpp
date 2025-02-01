class cfgPatches
{
  class NPC_Rusk
  {
    units[]={"NPC_Rusk_Officer","NPC_Rusk_Rifleman","NPC_Rusk_Team_Lead","NPC_RusK_Squad_Lead","NPC_Rusk_2IC","NPC_Rusk_Grenadier","NPC_Rusk_AT_Specialist","NPC_Rusk_AA_Specialist","NPC_Rusk_Autorifleman","NPC_Rusk_Machinegunner","NPC_Rusk_Marksman","NPC_Rusk_Sniper","NPC_Rusk_Engineer","NPC_Rusk_Explosive_Specialist","NPC_Rusk_JTAC","NPC_Rusk_UAV_Operator","NPC_Rusk_Tank_Crew","NPC_Rusk_Driver","NPC_Rusk_Heli_Pilot","NPC_Rusk_Pilot","NPC_Rusk_Medic","NPC_Rusk_GAZ_233011","NPC_Rusk_GAZ_233014","NPC_Rusk_BTR_80","NPC_Rusk_BTR_80A","NPC_Rusk_BMP_2","NPC_Rusk_T_72B","NPC_Rusk_T_34_85M","NPC_Rusk_Ural_4320","NPC_Rusk_Kamaz_Medical","NPC_Rusk_Kamaz_open","NPC_Rusk_Mi_8MT","NPC_Rusk_Mi_8T","NPC_Rusk_UH_1H_Gunship","NPC_Rusk_UH_1H","NPC_Rusk_UH_1Y_Unarmed","NPC_Rusk_T_50","NPC_Rusk_Su_25","NPC_Rusk_MiG_29S","NPC_Rusk_Antonov_An_2","NPC_Rusk_BMK_Tug","NPC_Rusk_Assault_boat"};
    weapons[]={"NPC_hlc_rifle_aku12_rhs_acc_dtk1983HLC_optic_DocterR","NPC_rhs_weap_6p53","NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset","NPC_hlc_rifle_ak12GL_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","NPC_rhs_weap_rpg7","NPC_rhs_weap_igla","NPC_hlc_rifle_RPK12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","NPC_rhs_weap_pkp_rhs_acc_pkas","NPC_rhs_weap_makarov_pm","NPC_rhs_weap_svdp_npz_rhs_acc_tgpvrhsusf_acc_M8541_low","NPC_rhs_weap_t5000_rhsusf_acc_nxs_5522x56_md_sunrhs_acc_harris_swivel","NPC_rhs_weap_aks74u_rhs_acc_pgs64_74u"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","A3_Weapons_F_Mark","hlcweapons_aks","rhs_c_weapons","rhs_c_troops","acre_sys_prc343","A3_Drones_F_Weapons_F_Gamma_Items","A3_Weapons_F_Exp","A3_Characters_F"};
  };
};

class cfgFactionClasses
{
  class NPC_Rusk
  {
    icon="\npc_common\data\ui\npc_logo.paa";
    displayName="[NPC] Rusk Army";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class hlc_rifle_aku12;
  class rhs_weap_6p53;
  class hlc_rifle_ak12;
  class hlc_rifle_ak12GL;
  class rhs_weap_rpg7;
  class rhs_weap_igla;
  class hlc_rifle_RPK12;
  class rhs_weap_pkp;
  class rhs_weap_makarov_pm;
  class rhs_weap_svdp_npz;
  class rhs_weap_t5000;
  class rhs_weap_aks74u;

  class NPC_hlc_rifle_aku12_rhs_acc_dtk1983HLC_optic_DocterR: hlc_rifle_aku12
  {
    displayName="Izhmash AK12U";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="HLC_optic_DocterR";
      };
    };
  };

  class NPC_rhs_weap_6p53: rhs_weap_6p53
  {
    displayName="6P53";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny: hlc_rifle_ak12
  {
    displayName="Izhmash AK12";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_okp7_picatinny";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhs_acc_perst3";
      };
    };
  };

  class NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset: hlc_rifle_ak12
  {
    displayName="Izhmash AK12";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="hlc_optic_ATACR_Offset";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhs_acc_perst3";
      };
    };
  };

  class NPC_hlc_rifle_ak12GL_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny: hlc_rifle_ak12GL
  {
    displayName="Izhmash AK12 (GL)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_okp7_picatinny";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhs_acc_perst3";
      };
    };
  };

  class NPC_rhs_weap_rpg7: rhs_weap_rpg7
  {
    displayName="RPG-7V2";
    scope=1;
    class LinkedItems
    {
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

  class NPC_hlc_rifle_RPK12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny: hlc_rifle_RPK12
  {
    displayName="Izhmash RPK12";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk1983";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_okp7_picatinny";
      };
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="rhs_acc_perst3";
      };
    };
  };

  class NPC_rhs_weap_pkp_rhs_acc_pkas: rhs_weap_pkp
  {
    displayName="PKP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_pkas";
      };
    };
  };

  class NPC_rhs_weap_makarov_pm: rhs_weap_makarov_pm
  {
    displayName="PM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_svdp_npz_rhs_acc_tgpvrhsusf_acc_M8541_low: rhs_weap_svdp_npz
  {
    displayName="SVDM (NPZ)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_tgpv";
      };
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_M8541_low";
      };
    };
  };

  class NPC_rhs_weap_t5000_rhsusf_acc_nxs_5522x56_md_sunrhs_acc_harris_swivel: rhs_weap_t5000
  {
    displayName="T-5000";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhsusf_acc_nxs_5522x56_md_sun";
      };
      class LinkedItemsUnder
      {
        slot="UnderBarrelSlot";
        item="rhs_acc_harris_swivel";
      };
    };
  };

  class NPC_rhs_weap_aks74u_rhs_acc_pgs64_74u: rhs_weap_aks74u
  {
    displayName="AKS-74U";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_pgs64_74u";
      };
    };
  };

};

class cfgVehicles
{
  class rhs_msv_emr_rifleman;
  class rhs_rk_sht_30_emr;
  class B_RadioBag_01_ghex_F;
  class I_E_UAV_01_backpack_F;
  class rhs_medic_bag;
  class rhs_tigr_msv;
  class rhs_tigr_sts_msv;
  class rhs_btr80_msv;
  class rhs_btr80a_msv;
  class LOP_SYR_BMP2;
  class LOP_SYR_T72BA;
  class LOP_TKA_T34;
  class LOP_TKA_Ural;
  class LOP_SYR_KAMAZ_Medical;
  class LOP_SYR_KAMAZ_Transport;
  class RHS_Mi8mt_vv;
  class RHS_Mi8t_vv;
  class rhs_uh1h_hidf_gunship;
  class rhs_uh1h_hidf;
  class LOP_IA_UH1Y_UN;
  class RHS_T50_vvs_053;
  class RHS_Su25SM_vvsc;
  class rhs_mig29s_vvsc;
  class RHS_AN2;
  class rhs_bmk_t;
  class O_Boat_Transport_01_F;

  class NPC_Rusk_Officer: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Officer";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"Laserdesignator_03","NPC_hlc_rifle_aku12_rhs_acc_dtk1983HLC_optic_DocterR","NPC_rhs_weap_6p53","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_03","NPC_hlc_rifle_aku12_rhs_acc_dtk1983HLC_optic_DocterR","NPC_rhs_weap_6p53","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Laserdesignator_03","rhs_fieldcap_digi","rhs_6b23_crewofficer"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Laserdesignator_03","rhs_fieldcap_digi","rhs_6b23_crewofficer"};
    backpack="";
  };

  class NPC_Rusk_Rifleman: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Rifleman";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_Rifleman_pack";
  };

  class NPC_Rusk_Team_Lead: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Team Lead";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_Team_Lead_pack";
  };

  class NPC_RusK_Squad_Lead: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Squad Lead";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_1PN138","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92_radio","rhs_1PN138"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_1PN138","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92_radio","rhs_1PN138"};
    backpack="NPC_RusK_Squad_Lead_pack";
  };

  class NPC_Rusk_2IC: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="2IC";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"Binocular","NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset","NPC_rhs_weap_6p53","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3hlc_optic_ATACR_Offset","NPC_rhs_weap_6p53","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhs_fieldcap_digi","rhs_6b23"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhs_fieldcap_digi","rhs_6b23"};
    backpack="";
  };

  class NPC_Rusk_Grenadier: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Grenadier";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12GL_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12GL_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_White","hlc_GRD_White","hlc_GRD_White","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Red","hlc_GRD_Red","hlc_GRD_Red","hlc_GRD_Red"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_White","hlc_GRD_White","hlc_GRD_White","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Red","hlc_GRD_Red","hlc_GRD_Red","hlc_GRD_Red"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh116_vog_od"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh116_vog_od"};
    backpack="NPC_Rusk_Grenadier_pack";
  };

  class NPC_Rusk_AT_Specialist: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="AT Specialist";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","NPC_rhs_weap_rpg7","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","NPC_rhs_weap_rpg7","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7V_mag"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7V_mag","rhs_rpg7_PG7V_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_AT_Specialist_pack";
  };

  class NPC_Rusk_AA_Specialist: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="AA Specialist";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","NPC_rhs_weap_igla","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","NPC_rhs_weap_igla","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_9k38_rocket"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_9k38_rocket"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_AA_Specialist_pack";
  };

  class NPC_Rusk_Autorifleman: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Autorifleman";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_RPK12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_RPK12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk"};
    respawnMagazines[]={"hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk","hlc_60Rnd_545x39_m_rpk"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_Autorifleman_pack";
  };

  class NPC_Rusk_Machinegunner: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Machinegunner";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_rhs_weap_pkp_rhs_acc_pkas","NPC_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_pkp_rhs_acc_pkas","NPC_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[]={"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_Machinegunner_pack";
  };

  class NPC_Rusk_Marksman: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Marksman";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_rhs_weap_svdp_npz_rhs_acc_tgpvrhsusf_acc_M8541_low","NPC_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_svdp_npz_rhs_acc_tgpvrhsusf_acc_M8541_low","NPC_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    respawnMagazines[]={"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_Marksman_pack";
  };

  class NPC_Rusk_Sniper: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Sniper";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"Binocular","NPC_rhs_weap_t5000_rhsusf_acc_nxs_5522x56_md_sunrhs_acc_harris_swivel","NPC_rhs_weap_6p53","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_t5000_rhsusf_acc_nxs_5522x56_md_sunrhs_acc_harris_swivel","NPC_rhs_weap_6p53","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_18rnd_9x21mm_7N29","rhs_18rnd_9x21mm_7N29"};
    respawnMagazines[]={"rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_18rnd_9x21mm_7N29","rhs_18rnd_9x21mm_7N29"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhs_fieldcap_digi","rhs_6b23"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhs_fieldcap_digi","rhs_6b23"};
    backpack="";
  };

  class NPC_Rusk_Engineer: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Engineer";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_rdg2_black","rhs_mag_rdg2_black"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_Engineer_pack";
  };

  class NPC_Rusk_Explosive_Specialist: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Explosive Specialist";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec75_sand_mag","rhs_ec75_sand_mag","rhs_ec75_sand_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec400_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec200_sand_mag","rhs_ec75_sand_mag","rhs_ec75_sand_mag","rhs_ec75_sand_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag","rhsusf_m112_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_Explosive_Specialist_pack";
  };

  class NPC_Rusk_JTAC: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="JTAC";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"Laserdesignator_01_khk_F","NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"Laserdesignator_01_khk_F","NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rgn","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rdg2_black"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","O_UavTerminal","Laserdesignator_01_khk_F","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","O_UavTerminal","Laserdesignator_01_khk_F","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_JTAC_pack";
  };

  class NPC_Rusk_UAV_Operator: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="UAV Operator";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","O_UavTerminal","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","O_UavTerminal","rhs_6b7_1m_emr_ess","rhs_6b23_6sh92"};
    backpack="NPC_Rusk_UAV_Operator_pack";
  };

  class NPC_Rusk_Tank_Crew: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Tank Crew";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b2"};
    backpack="";
  };

  class NPC_Rusk_Driver: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Driver";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6_green_AK"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_emr_ess","rhs_6b2"};
    backpack="";
  };

  class NPC_Rusk_Heli_Pilot: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Heli Pilot";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_PilotHelmetHeli_O"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_PilotHelmetHeli_O"};
    backpack="";
  };

  class NPC_Rusk_Pilot: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Pilot";
    uniformClass="U_I_pilotCoveralls";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_PilotHelmetFighter_O"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_PilotHelmetFighter_O"};
    backpack="";
  };

  class NPC_Rusk_Medic: rhs_msv_emr_rifleman
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Medic";
    uniformClass="rhs_uniform_afghanka_vsr_3";
    weapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_ak12_rhs_acc_dtk1983rhs_acc_perst3rhs_acc_okp7_picatinny","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","Medikit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_bala1_emr","rhs_6b23_digi_medic"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_6b7_1m_bala1_emr","rhs_6b23_digi_medic"};
    backpack="NPC_Rusk_Medic_pack";
  };

  class NPC_Rusk_GAZ_233011: rhs_tigr_msv
  {
    faction="NPC_Rusk";
    side=0;
    displayName="GAZ 233011";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_GAZ_233014: rhs_tigr_sts_msv
  {
    faction="NPC_Rusk";
    side=0;
    displayName="GAZ 233014";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_tigr\sts_proxies\data\tigr_ext_ads_co.paa","rhsafrf\addons\rhs_tigr\m_proxies\data\tigr_m_adds_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\5_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_BTR_80: rhs_btr80_msv
  {
    faction="NPC_Rusk";
    side=0;
    displayName="BTR 80";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_std_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_std_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_std_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","","","","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\2_ca.paa","","","","","","","","","","",""};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_BTR_80A: rhs_btr80a_msv
  {
    faction="NPC_Rusk";
    side=0;
    displayName="BTR 80A";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_std_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_std_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_std_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","","","","","rhsafrf\addons\rhs_decals\data\labels\platoon\18th_msv_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\defaultred\0_ca.paa","","","","","","","","","","",""};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_BMP_2: LOP_SYR_BMP2
  {
    faction="NPC_Rusk";
    side=0;
    displayName="BMP 2";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_bmp\textures\bmp_1_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_2_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_3_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_4_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa","rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\army\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\misc\no_ca.paa"};
    crew="NPC_Rusk_Tank_Crew";
    typicalCargo[]={"NPC_Rusk_Tank_Crew"};
  };

  class NPC_Rusk_T_72B: LOP_SYR_T72BA
  {
    faction="NPC_Rusk";
    side=0;
    displayName="T 72B";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_05_sand_co.paa","rhsafrf\addons\rhs_decals\data\labels\army\iraqi_ca.paa","","","","","","rhsafrf\addons\rhs_decals\data\numbers\default\4_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\7_ca.paa","rhsafrf\addons\rhs_decals\data\labels\platoon\no_ca.paa","",""};
    crew="NPC_Rusk_Tank_Crew";
    typicalCargo[]={"NPC_Rusk_Tank_Crew"};
  };

  class NPC_Rusk_T_34_85M: LOP_TKA_T34
  {
    faction="NPC_Rusk";
    side=0;
    displayName="T 34 85M";
    hiddenSelectionsTextures[]={"po_vehicles\t34\data\t34_body01_ind_co.paa","po_vehicles\t34\data\t34_body02_ind_co.paa","po_vehicles\t34\data\t34_turret_ind_co.paa","po_vehicles\t34\data\t34_wheels_ind_co.paa","po_vehicles\t34\data\t34_body03_ind_co.paa"};
    crew="NPC_Rusk_Tank_Crew";
    typicalCargo[]={"NPC_Rusk_Tank_Crew"};
  };

  class NPC_Rusk_Ural_4320: LOP_TKA_Ural
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Ural 4320";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_tka_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_tka_co.paa","rhsafrf\addons\rhs_decals\data\numbers\default\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\default\2_ca.paa","","","",""};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_Kamaz_Medical: LOP_SYR_KAMAZ_Medical
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Kamaz Medical";
    hiddenSelectionsTextures[]={"po_factions_eu\ukr\data\kamaz_kab_co.paa","po_factions_eu\ukr\data\kamaz_kuz_co.paa"};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_Kamaz_open: LOP_SYR_KAMAZ_Transport
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Kamaz open";
    hiddenSelectionsTextures[]={"po_factions_eu\ukr\data\kamaz_kab_co.paa","po_factions_eu\ukr\data\kamaz_kuz_co.paa"};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_Mi_8MT: RHS_Mi8mt_vv
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Mi 8MT";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo3_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo1_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviared\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviared\4_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
    crew="NPC_Rusk_Heli_Pilot";
    typicalCargo[]={"NPC_Rusk_Heli_Pilot"};
  };

  class NPC_Rusk_Mi_8T: RHS_Mi8t_vv
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Mi 8T";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo3_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo_mvd_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8t\camo\mi8t_tv2_g_camo3_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviayellow\3_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviayellow\7_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
    crew="NPC_Rusk_Heli_Pilot";
    typicalCargo[]={"NPC_Rusk_Heli_Pilot"};
  };

  class NPC_Rusk_UH_1H_Gunship: rhs_uh1h_hidf_gunship
  {
    faction="NPC_Rusk";
    side=0;
    displayName="UH 1H Gunship";
    hiddenSelectionsTextures[]={"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
    crew="NPC_Rusk_Heli_Pilot";
    typicalCargo[]={"NPC_Rusk_Heli_Pilot"};
  };

  class NPC_Rusk_UH_1H: rhs_uh1h_hidf
  {
    faction="NPC_Rusk";
    side=0;
    displayName="UH 1H";
    hiddenSelectionsTextures[]={"rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\uh1h_hidf_grey_in_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\uh1h_hidf_decals_ca.paa"};
    crew="NPC_Rusk_Heli_Pilot";
    typicalCargo[]={"NPC_Rusk_Heli_Pilot"};
  };

  class NPC_Rusk_UH_1Y_Unarmed: LOP_IA_UH1Y_UN
  {
    faction="NPC_Rusk";
    side=0;
    displayName="UH 1Y Unarmed";
    hiddenSelectionsTextures[]={"po_factions_me\ia\data\uh1y_ext_iraq_co.paa","rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa","","","","","","","","","","","","","","","","","","","","","","","","",""};
    crew="NPC_Rusk_Heli_Pilot";
    typicalCargo[]={"NPC_Rusk_Heli_Pilot"};
  };

  class NPC_Rusk_T_50: RHS_T50_vvs_053
  {
    faction="NPC_Rusk";
    side=0;
    displayName="T 50";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_air\t50\data\pakfa_bluecamo_co.paa","rhsafrf\addons\rhs_decals\data\numbers\aviablue\0_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviablue\5_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviablue\3_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\no_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviationcompanies\sukhoi_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\star_new2_ca.paa","rhsafrf\addons\rhs_c_air\scripts\data\altis_co.paa","rhsafrf\addons\rhs_c_air\scripts\data\wp_move_ca.paa"};
    crew="NPC_Rusk_Pilot";
    typicalCargo[]={"NPC_Rusk_Pilot"};
  };

  class NPC_Rusk_Su_25: RHS_Su25SM_vvsc
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Su 25";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body1_camo1_co.paa","rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body2_camo1_co.paa","rhsafrf\addons\rhs_decals\data\numbers\aviablue\8_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviablue\6_ca.paa","rhsafrf\addons\rhs_decals\data\labels\su25noseart\nose_02_ca.paa","rhsafrf\addons\rhs_decals\data\labels\su25ex\ex_01_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
    crew="NPC_Rusk_Pilot";
    typicalCargo[]={"NPC_Rusk_Pilot"};
  };

  class NPC_Rusk_MiG_29S: rhs_mig29s_vvsc
  {
    faction="NPC_Rusk";
    side=0;
    displayName="MiG 29S";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_mig29\data\rhs_mig29_01_mimic_green_co.paa","rhsafrf\addons\rhs_mig29\data\rhs_mig29_02_mimic_green_co.paa","rhsafrf\addons\rhs_mig29\data\rhs_mig29_03_mimic_green_co.paa","rhsafrf\addons\rhs_decals\data\numbers\aviawhiteshadow\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviawhiteshadow\1_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\star_old2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\empty\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\empty\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviawhite\2_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviawhite\1_ca.paa","","","","","","","","","rhsafrf\addons\rhs_decals\data\labels\mig29tailsign\rhs_bee_03_ca.paa","rhsafrf\addons\rhs_decals\data\labels\mig29noseart\no_ca.paa",""};
    crew="NPC_Rusk_Pilot";
    typicalCargo[]={"NPC_Rusk_Pilot"};
  };

  class NPC_Rusk_Antonov_An_2: RHS_AN2
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Antonov An 2";
    hiddenSelectionsTextures[]={"rhsgref\addons\rhsgref_air\an2\data\an2_1_co.paa","rhsgref\addons\rhsgref_air\an2\data\an2_2_co.paa","rhsgref\addons\rhsgref_air\an2\data\an2_wings_co.paa","rhsafrf\addons\rhs_decals\data\numbers\aviacdf\6_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviacdf\9_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\cdf_roundel03_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviationsquadronscdf\cdf_para01_ca.paa"};
    crew="NPC_Rusk_Pilot";
    typicalCargo[]={"NPC_Rusk_Pilot"};
  };

  class NPC_Rusk_BMK_Tug: rhs_bmk_t
  {
    faction="NPC_Rusk";
    side=0;
    displayName="BMK Tug";
    hiddenSelectionsTextures[]={};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };

  class NPC_Rusk_Assault_boat: O_Boat_Transport_01_F
  {
    faction="NPC_Rusk";
    side=0;
    displayName="Assault boat";
    hiddenSelectionsTextures[]={"a3\boat_f\boat_transport_01\data\boat_transport_01_opfor_co.paa"};
    crew="NPC_Rusk_Driver";
    typicalCargo[]={"NPC_Rusk_Driver"};
  };


  class NPC_Rusk_Rifleman_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_Team_Lead_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=8;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=6;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_RusK_Squad_Lead_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=8;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=6;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
     class _xx_hlc_30Rnd_545x39_EP_ak {count=4;magazine="hlc_30Rnd_545x39_EP_ak";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_Grenadier_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
     class _xx_hlc_VOG25_AK {count=9;magazine="hlc_VOG25_AK";};
     class _xx_hlc_GRD_White {count=5;magazine="hlc_GRD_White";};
     class _xx_hlc_GRD_Red {count=5;magazine="hlc_GRD_Red";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_AT_Specialist_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
     class _xx_rhs_rpg7_PG7V_mag {count=4;magazine="rhs_rpg7_PG7V_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_AA_Specialist_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
     class _xx_rhs_mag_9k38_rocket {count=1;magazine="rhs_mag_9k38_rocket";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_Autorifleman_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
     class _xx_hlc_60Rnd_545x39_m_rpk {count=4;magazine="hlc_60Rnd_545x39_m_rpk";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_Machinegunner_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
     class _xx_rhs_100Rnd_762x54mmR {count=2;magazine="rhs_100Rnd_762x54mmR";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_Marksman_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_Engineer_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=3;magazine="rhs_mag_rdg2_black";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class NPC_Rusk_Explosive_Specialist_pack: rhs_rk_sht_30_emr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_ec400_sand_mag {count=4;magazine="rhs_ec400_sand_mag";};
     class _xx_rhs_ec200_sand_mag {count=5;magazine="rhs_ec200_sand_mag";};
     class _xx_rhs_ec75_sand_mag {count=3;magazine="rhs_ec75_sand_mag";};
     class _xx_rhsusf_m112_mag {count=5;magazine="rhsusf_m112_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_JTAC_pack: B_RadioBag_01_ghex_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_mag_rgn {count=5;magazine="rhs_mag_rgn";};
     class _xx_rhs_mag_rdg2_white {count=3;magazine="rhs_mag_rdg2_white";};
     class _xx_rhs_mag_rdg2_black {count=1;magazine="rhs_mag_rdg2_black";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_UAV_Operator_pack: I_E_UAV_01_backpack_F
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Rusk_Medic_pack: rhs_medic_bag
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_Medikit {count=1;name="Medikit";};
     class _xx_FirstAidKit {count=8;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
class cfgGroups
{  
  class EAST
  {
    name="OPFOR";
    class Rusk
    {
      name="Rusk";

      class Infantry
      {
        name="Infantry";

        class NPC_O_Command_Team
        {
          name="Command Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Officer";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_2IC";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_UAV_Operator";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Medic";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_Assault_Squad
        {
          name="Assault Squad";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_RusK_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="NPC_Rusk_Autorifleman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="NPC_Rusk_Grenadier";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_O_AT_Support_Squad
        {
          name="AT Support Squad";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_RusK_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="NPC_Rusk_Explosive_Specialist";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="NPC_Rusk_Machinegunner";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="NPC_Rusk_Marksman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_O_AA_Support_Squad
        {
          name="AA Support Squad";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_RusK_Squad_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_Explosive_Specialist";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Machinegunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="NPC_Rusk_Marksman";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="NPC_Rusk_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="NPC_Rusk_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_O_Assault_Team
        {
          name="Assault Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_Grenadier";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class NPC_O_Motorized_Squad_GAZ
        {
          name="Motorized Squad (GAZ)";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_GAZ_233011";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_GAZ_233014";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_Motorized_Squad_Kamaz
        {
          name="Motorized Squad (Kamaz)";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Kamaz_open";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_O_Motorized_Squad_Ural
        {
          name="Motorized Squad (Ural)";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Ural_4320";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
        };
        class NPC_O_T72_Section
        {
          name="T72 Section";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_T_72B";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_T_72B";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

        class NPC_O_BMP_Section
        {
          name="BMP Section";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_BMP_2";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_BMP_2";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_BTR_80_Section
        {
          name="BTR 80 Section";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_BTR_80";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_BTR_80";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_BTR_80A_Section
        {
          name="BTR 80A Section";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_BTR_80A";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_BTR_80A";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_Mechanized_BMP_2
        {
          name="Mechanized (BMP 2)";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_BMP_2";
            rank="MAJOR";
            position[]={0,-0,0};
          };
        };
        class NPC_O_Mechanized_Squad_BTR_80
        {
          name="Mechanized Squad (BTR 80)";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_BTR_80";
            rank="MAJOR";
            position[]={0,-0,0};
          };
        };
        class NPC_O_Mechanized_Squad_BTR_80A
        {
          name="Mechanized Squad (BTR 80A)";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_BTR_80A";
            rank="MAJOR";
            position[]={0,-0,0};
          };
        };
      };
      class Armored
      {
        name="Armored";

        class NPC_O_T34_Section
        {
          name="T34 Section";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_T_34_85M";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_T_34_85M";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class SpecOps
      {
        name="Special Forces";

        class NPC_O_JTAC_Team
        {
          name="JTAC Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_JTAC";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_Marksman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="COLONEL";
            position[]={0,-45,0};
          };
        };
        class NPC_O_Sniper_Team
        {
          name="Sniper Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Sniper";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_Recon_Team
        {
          name="Recon Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Marksman";
            rank="COLONEL";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_Marksman";
            rank="COLONEL";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Medic";
            rank="COLONEL";
            position[]={0,-45,0};
          };
        };
      };
      class Support
      {
        name="Support Infantry";

        class NPC_O_MG_Support_Team
        {
          name="MG Support Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Machinegunner";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_Autorifleman";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_O_AA_Support_Team
        {
          name="AA Support Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_AA_Specialist";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_O_AT_Support_Team
        {
          name="AT Support Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_AT_Specialist";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_Rifleman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class NPC_O_Technical_Support_Team
        {
          name="Technical Support Team";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Team_Lead";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Engineer";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="NPC_Rusk_Explosive_Specialist";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="NPC_Rusk_UAV_Operator";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
      };
      class Airborne
      {
        name="Airborne";

        class NPC_O_UH_1H_Gunship_Squadron
        {
          name="UH 1H Gunship Squadron";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_UH_1H_Gunship";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_UH_1H_Gunship";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_UH_1H_Squadron
        {
          name="UH 1H Squadron";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_UH_1H";
            rank="CAPTAIN";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_UH_1H";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Air
      {
        name="Air";

        class NPC_O_T50_Flight
        {
          name="T50 Flight";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_T_50";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_T_50";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_Su_25_Flight
        {
          name="Su 25 Flight";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_Su_25";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_Su_25";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_O_MiG_29S_Flight
        {
          name="MiG 29S Flight";
          faction="NPC_Rusk";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="NPC_Rusk_MiG_29S";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="NPC_Rusk_MiG_29S";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
    };
  };
};
