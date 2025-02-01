class cfgPatches
{
  class NPC_ST_George_Rebels
  {
    units[]={"NPC_Rebel_Commander","NPC_Cell_Leader","NPC_Doctor","NPC_Rifleman_Light","NPC_Rifleman_Garand","NPC_Rifleman_Light_AT","NPC_Grenadier","NPC_Rocket_Rebel_RPG7","NPC_Mechanic","NPC_Hunter","NPC_Crewman","NPC_Rifleman_Crew","NPC_Rebel_Pilot","NPC_Rebel_Heli_Pilot","NPC_Technical","NPC_Technical_AT","NPC_Technical_HMG","NPC_Rebel_Podnos","NPC_Rebel_BTR_60PB","NPC_Rebel_KrAZ_255B1","NPC_Rebel_ZU_23_2","NPC_Rebel_SPG_9","NPC_Rebel_DSHkM_Minitripod","NPC_Rebel_DShKM","NPC_Rebel_Cessna","NPC_Rebel_Antonov","NPC_Rebel_Mi_8MT_Cargo","NPC_Rebel_Mi8MT"};
    weapons[]={"NPC_rhs_weap_makarov_pm","NPC_rhs_weap_akm_gp25_rhs_acc_dtkakm","NPC_rhs_weap_m70b1","NPC_rhs_weap_akm_rhs_acc_dtkakm","NPC_rhs_weap_m1garand_sa43","NPC_rhs_weap_pm63_rhs_acc_dtkakm","NPC_rhs_weap_rpg75","NPC_rhs_weap_akms_gp25_rhs_acc_dtkakm","NPC_rhs_weap_akms_rhs_acc_dtkakm","NPC_rhs_weap_rpg7","NPC_rhs_weap_aks74u_rhs_acc_pgs64_74u","NPC_rhs_weap_svdp_wd_rhs_acc_pso1m21","NPC_rhs_weap_savz61","NPC_rhs_weap_l1a1_wood_rhsgref_acc_falMuzzle_l1a1","NPC_hlc_rifle_aks74u_rhs_acc_dtk2"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F","rhs_c_weapons","rhsgref_c_troops","rhs_c_troops","po_factions_fic","A3_Weapons_F_Items","po_factions_eu","rhsgref_c_weapons","A3_Characters_F","A3_Characters_F_Orange_Headgear","hlcweapons_aks"};
  };
};

class cfgFactionClasses
{
  class NPC_ST_George_Rebels
  {
    icon="\npc_common\data\ui\npc_logo.paa";
    displayName="[NPC] St. George Rebels";
    side=2;
    priority=1;
  };
};


class cfgWeapons
{
  class rhs_weap_makarov_pm;
  class rhs_weap_akm_gp25;
  class rhs_weap_m70b1;
  class rhs_weap_akm;
  class rhs_weap_m1garand_sa43;
  class rhs_weap_pm63;
  class rhs_weap_rpg75;
  class rhs_weap_akms_gp25;
  class rhs_weap_akms;
  class rhs_weap_rpg7;
  class rhs_weap_aks74u;
  class rhs_weap_svdp_wd;
  class rhs_weap_savz61;
  class rhs_weap_l1a1_wood;
  class hlc_rifle_aks74u;

  class NPC_rhs_weap_makarov_pm: rhs_weap_makarov_pm
  {
    displayName="PM";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_akm_gp25_rhs_acc_dtkakm: rhs_weap_akm_gp25
  {
    displayName="AKM (GP-25)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
      };
    };
  };

  class NPC_rhs_weap_m70b1: rhs_weap_m70b1
  {
    displayName="M-70B1";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_akm_rhs_acc_dtkakm: rhs_weap_akm
  {
    displayName="AKM";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
      };
    };
  };

  class NPC_rhs_weap_m1garand_sa43: rhs_weap_m1garand_sa43
  {
    displayName="M1 Garand";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_pm63_rhs_acc_dtkakm: rhs_weap_pm63
  {
    displayName="PM-63";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
      };
    };
  };

  class NPC_rhs_weap_rpg75: rhs_weap_rpg75
  {
    displayName="RPG-75";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_akms_gp25_rhs_acc_dtkakm: rhs_weap_akms_gp25
  {
    displayName="AKMS (GP-25)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
      };
    };
  };

  class NPC_rhs_weap_akms_rhs_acc_dtkakm: rhs_weap_akms
  {
    displayName="AKMS";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtkakm";
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

  class NPC_rhs_weap_svdp_wd_rhs_acc_pso1m21: rhs_weap_svdp_wd
  {
    displayName="SVDM (Camo)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        slot="CowsSlot";
        item="rhs_acc_pso1m21";
      };
    };
  };

  class NPC_rhs_weap_savz61: rhs_weap_savz61
  {
    displayName="Sa vz. 61";
    scope=1;
    class LinkedItems
    {
    };
  };

  class NPC_rhs_weap_l1a1_wood_rhsgref_acc_falMuzzle_l1a1: rhs_weap_l1a1_wood
  {
    displayName="L1A1 (Wood)";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhsgref_acc_falMuzzle_l1a1";
      };
    };
  };

  class NPC_hlc_rifle_aks74u_rhs_acc_dtk2: hlc_rifle_aks74u
  {
    displayName="Izhmash AKS74U";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
        slot="MuzzleSlot";
        item="rhs_acc_dtk2";
      };
    };
  };

};

class cfgVehicles
{
  class rhsgref_tla_g_warlord;
  class rhsgref_tla_g_squadleader;
  class rhsgref_tla_g_medic;
  class rhs_medic_bag_filled;
  class rhsgref_tla_g_rifleman;
  class rhsgref_tla_g_rifleman_m1;
  class rhsgref_tla_g_rifleman_rpg75;
  class rhsgref_tla_g_grenadier;
  class rhsgref_tla_g_specialist_at;
  class rhsgref_tla_backpack_rpg;
  class rhsgref_tla_g_mechanic;
  class rhsgref_cdf_backpack_engineer;
  class rhsgref_tla_g_marksman_m14;
  class rhsgref_tla_g_crew;
  class rhsgref_tla_g_rifleman_l1a1;
  class rhsgref_tla_g_offroad;
  class rhsgref_tla_g_offroad_at;
  class rhsgref_tla_g_offroad_armed;
  class rhsgref_tla_g_2b14;
  class rhsgref_tla_g_btr60;
  class rhsgref_tla_g_kraz255b1_cargo_open;
  class rhsgref_tla_g_ZU23;
  class rhsgref_tla_g_SPG9;
  class rhsgref_tla_g_DSHKM_Mini_TriPod;
  class rhsgref_tla_g_DSHKM;
  class I_C_Plane_Civil_01_F;
  class RHS_AN2;
  class LOP_UKR_Mi8MT_Cargo;
  class RHS_Mi8mt_vdv;

  class NPC_Rebel_Commander: rhsgref_tla_g_warlord
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Rebel Commander";
    uniformClass="rhsgref_uniform_TLA_2";
    weapons[]={"Binocular","NPC_rhs_weap_makarov_pm","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_makarov_pm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_rdg2_black","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[]={"rhs_mag_rdg2_black","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","LOP_H_SLA_Beret","rhs_vest_pistol_holster"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","LOP_H_SLA_Beret","rhs_vest_pistol_holster"};
    backpack="";
  };

  class NPC_Cell_Leader: rhsgref_tla_g_squadleader
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Cell Leader";
    uniformClass="rhsgref_uniform_TLA_1";
    weapons[]={"Binocular","NPC_rhs_weap_akm_gp25_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"Binocular","NPC_rhs_weap_akm_gp25_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_762x39mm_89","rhs_mag_f1","rhs_mag_f1","rhs_mag_rdg2_white","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","hlc_GRD_Red","hlc_GRD_White"};
    respawnMagazines[]={"rhs_30Rnd_762x39mm_89","rhs_mag_f1","rhs_mag_f1","rhs_mag_rdg2_white","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","hlc_GRD_Red","hlc_GRD_White"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhs_fieldcap_digi2","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","Binocular","rhs_fieldcap_digi2","rhsgref_chicom"};
    backpack="";
  };

  class NPC_Doctor: rhsgref_tla_g_medic
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Doctor";
    uniformClass="rhsgref_uniform_TLA_1";
    weapons[]={"NPC_rhs_weap_m70b1","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_m70b1","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","MediKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","MediKit"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","LOP_H_Ushanka","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","LOP_H_Ushanka","rhsgref_chicom"};
    backpack="NPC_Doctor_pack";
    attendant = 1; 
  };

  class NPC_Rifleman_Light: rhsgref_tla_g_rifleman
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Rifleman Light";
    uniformClass="rhsgref_uniform_TLA_1";
    weapons[]={"NPC_rhs_weap_akm_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_akm_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_f1","rhs_mag_f1"};
    respawnMagazines[]={"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_f1","rhs_mag_f1"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_ssh68_2","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_ssh68_2","rhsgref_chicom"};
    backpack="";
  };

  class NPC_Rifleman_Garand: rhsgref_tla_g_rifleman_m1
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Rifleman Garand";
    uniformClass="rhsgref_uniform_TLA_2";
    weapons[]={"NPC_rhs_weap_m1garand_sa43","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_m1garand_sa43","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhs_mag_f1","rhs_mag_f1"};
    respawnMagazines[]={"rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhsgref_8Rnd_762x63_M2B_M1rifle","rhs_mag_f1","rhs_mag_f1"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Bandanna_khk","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Bandanna_khk","rhsgref_chicom"};
    backpack="";
  };

  class NPC_Rifleman_Light_AT: rhsgref_tla_g_rifleman_rpg75
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Rifleman Light AT";
    uniformClass="rhsgref_uniform_TLA_1";
    weapons[]={"NPC_rhs_weap_pm63_rhs_acc_dtkakm","NPC_rhs_weap_rpg75","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_pm63_rhs_acc_dtkakm","NPC_rhs_weap_rpg75","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_f1"};
    respawnMagazines[]={"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_mag_f1"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_ssh68","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_ssh68","rhsgref_chicom"};
    backpack="";
  };

  class NPC_Grenadier: rhsgref_tla_g_grenadier
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Grenadier";
    uniformClass="rhsgref_uniform_TLA_1";
    weapons[]={"NPC_rhs_weap_akms_gp25_rhs_acc_dtkakm","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_akms_gp25_rhs_acc_dtkakm","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_762x39mm_89","rhs_VOG25","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
    respawnMagazines[]={"rhs_30Rnd_762x39mm_89","rhs_VOG25","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_chicom"};
    backpack="";
  };

  class NPC_Rocket_Rebel_RPG7: rhsgref_tla_g_specialist_at
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Rocket Rebel RPG7";
    uniformClass="rhsgref_uniform_TLA_1";
    weapons[]={"NPC_rhs_weap_akms_rhs_acc_dtkakm","NPC_rhs_weap_rpg7","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_akms_rhs_acc_dtkakm","NPC_rhs_weap_rpg7","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7V_mag","rhs_rpg7_type69_airburst_mag","rhs_rpg7_type69_airburst_mag"};
    respawnMagazines[]={"rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_30Rnd_762x39mm_89","rhs_rpg7_PG7V_mag","rhs_rpg7_type69_airburst_mag","rhs_rpg7_type69_airburst_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_chicom"};
    backpack="NPC_Rocket_Rebel_RPG7_pack";
  };

  class NPC_Mechanic: rhsgref_tla_g_mechanic
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Mechanic";
    uniformClass="rhsgref_uniform_TLA_1";
    weapons[]={"NPC_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_aks74u_rhs_acc_pgs64_74u","Put","Throw"};
    items[]={"FirstAidKit","ToolKit"};
    respawnItems[]={"FirstAidKit","ToolKit"};
    magazines[]={"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgd5","rhs_mag_rgd5"};
    respawnMagazines[]={"rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_AK","rhs_mag_rgd5","rhs_mag_rgd5"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Bandanna_khk","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Bandanna_khk","rhsgref_chicom"};
    backpack="NPC_Mechanic_pack";
    canDeactivateMines = true;              // Can this character deactivate mines?
    engineer = true;    
  };

  class NPC_Hunter: rhsgref_tla_g_marksman_m14
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Hunter";
    uniformClass="rhsgref_uniform_TLA_2";
    weapons[]={"NPC_rhs_weap_svdp_wd_rhs_acc_pso1m21","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_svdp_wd_rhs_acc_pso1m21","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_f1","rhs_mag_f1","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag"};
    respawnMagazines[]={"rhs_mag_f1","rhs_mag_f1","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag","ACE_10Rnd_762x54_Tracer_mag"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_chicom"};
    backpack="";
  };

  class NPC_Crewman: rhsgref_tla_g_crew
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Crewman";
    uniformClass="rhsgref_uniform_TLA_2";
    weapons[]={"NPC_rhs_weap_savz61","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_savz61","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61"};
    respawnMagazines[]={"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_tsh4","rhsgref_chicom"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_tsh4","rhsgref_chicom"};
    backpack="";
  };

  class NPC_Rifleman_Crew: rhsgref_tla_g_rifleman_l1a1
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Rifleman";
    uniformClass="rhsgref_uniform_TLA_2";
    weapons[]={"NPC_rhs_weap_l1a1_wood_rhsgref_acc_falMuzzle_l1a1","Put","Throw"};
    respawnWeapons[]={"NPC_rhs_weap_l1a1_wood_rhsgref_acc_falMuzzle_l1a1","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_f1","rhs_mag_f1"};
    respawnMagazines[]={"rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_20Rnd_762x51_m80_fnfal","rhs_mag_f1","rhs_mag_f1"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_alice_webbing"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","H_Hat_Safari_olive_F","rhsgref_alice_webbing"};
    backpack="";
  };

  class NPC_Rebel_Pilot: rhsgref_tla_g_crew
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Pilot";
    uniformClass="rhsgref_uniform_TLA_2";
    weapons[]={"NPC_hlc_rifle_aks74u_rhs_acc_dtk2","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_aks74u_rhs_acc_dtk2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_zsh7a_mike_green_alt","rhs_vest_commander"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_zsh7a_mike_green_alt","rhs_vest_commander"};
    backpack="";
  };

  class NPC_Rebel_Heli_Pilot: rhsgref_tla_g_crew
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Heli Pilot";
    uniformClass="rhsgref_uniform_TLA_2";
    weapons[]={"NPC_hlc_rifle_aks74u_rhs_acc_dtk2","Put","Throw"};
    respawnWeapons[]={"NPC_hlc_rifle_aks74u_rhs_acc_dtk2","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    respawnMagazines[]={"hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_545x39_EP_ak"};
    linkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_zsh7a_mike_green","rhs_vest_commander"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","Itemwatch","ItemRadio","rhs_zsh7a_mike_green","rhs_vest_commander"};
    backpack="";
  };

  class NPC_Technical: rhsgref_tla_g_offroad
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Technical";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_08_co.paa"};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Technical_AT: rhsgref_tla_g_offroad_at
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Technical AT";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa"};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Technical_HMG: rhsgref_tla_g_offroad_armed
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Technical HMG";
    hiddenSelectionsTextures[]={"a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa","a3\soft_f_bootcamp\offroad_01\data\offroad_01_ext_ig_01_co.paa"};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_Podnos: rhsgref_tla_g_2b14
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Podnos";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_heavyweapons\podnos_2b14_82mm\data\podnos_2b14_82mm_co.paa"};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_BTR_60PB: rhsgref_tla_g_btr60
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="BTR 60PB";
    hiddenSelectionsTextures[]={"rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_body_tla2_co.paa","rhsgref\addons\rhsgref_vehicles_ret\data\tla\btr60_details_tla2_co.paa","","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","","","","","","","","","","","","","","","","","","","","",""};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_KrAZ_255B1: rhsgref_tla_g_kraz255b1_cargo_open
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="KrAZ 255B1";
    hiddenSelectionsTextures[]={"rhsafrf\addons\rhs_kraz255\data\kraz255b1_co.paa","rhsafrf\addons\rhs_kraz255\data\kol255_co.paa","rhsafrf\addons\rhs_kraz255\data\kuzov_255_co.paa"};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_ZU_23_2: rhsgref_tla_g_ZU23
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="ZU 23 2";
    hiddenSelectionsTextures[]={};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_SPG_9: rhsgref_tla_g_SPG9
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="SPG 9";
    hiddenSelectionsTextures[]={};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_DSHkM_Minitripod: rhsgref_tla_g_DSHKM_Mini_TriPod
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="DSHkM Minitripod";
    hiddenSelectionsTextures[]={};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_DShKM: rhsgref_tla_g_DSHKM
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="DShKM";
    hiddenSelectionsTextures[]={};
    crew="NPC_Rifleman_Crew";
    typicalCargo[]={"NPC_Rifleman_Crew"};
  };

  class NPC_Rebel_Cessna: I_C_Plane_Civil_01_F
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Cessna";
    hiddenSelectionsTextures[]={"a3\air_f_exp\plane_civil_01\data\btt_ext_01_tribal_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_tribal_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_tan_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_tan_co.paa"};
    crew="NPC_Rebel_Pilot";
    typicalCargo[]={"NPC_Rebel_Pilot"};
  };

  class NPC_Rebel_Antonov: RHS_AN2
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Antonov";
    hiddenSelectionsTextures[]={"rhsgref\addons\rhsgref_air\an2\data\an2_1_co.paa","rhsgref\addons\rhsgref_air\an2\data\an2_2_co.paa","rhsgref\addons\rhsgref_air\an2\data\an2_wings_co.paa","rhsafrf\addons\rhs_decals\data\numbers\aviacdf\1_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\aviacdf\4_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\cdf_roundel02_ca.paa","rhsafrf\addons\rhs_decals\data\labels\aviationsquadronscdf\no_ca.paa"};
    crew="NPC_Rebel_Pilot";
    typicalCargo[]={"NPC_Rebel_Pilot"};
  };

  class NPC_Rebel_Mi_8MT_Cargo: LOP_UKR_Mi8MT_Cargo
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Mi-8MT Cargo";
    hiddenSelectionsTextures[]={"po_factions_eu\ukr\data\mi8_body_g_ukr_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\handpaint\9_ca.paa","rhsafrf\addons\rhs_decals\data\numbers\handpaint\7_ca.paa",""};
    crew="NPC_Rebel_Heli_Pilot";
    typicalCargo[]={"NPC_Rebel_Heli_Pilot"};
  };

  class NPC_Rebel_Mi8MT: RHS_Mi8mt_vdv
  {
    faction="NPC_ST_George_Rebels";
    side=2;
    displayName="Mi-8MT";
    hiddenSelectionsTextures[]={"po_factions_fic\sla\data\mi8_body_olv_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo2_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
    crew="NPC_Rebel_Heli_Pilot";
    typicalCargo[]={"NPC_Rebel_Heli_Pilot"};
  };


  class NPC_Doctor_pack: rhs_medic_bag_filled
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_ACE_painkillers {count=5;magazine="ACE_painkillers";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=8;name="FirstAidKit";};
     class _xx_MediKit {count=10;name="ACE_elasticBandage";};
    };
    class TransportWeapons{};
  };


  class NPC_Rocket_Rebel_RPG7_pack: rhsgref_tla_backpack_rpg
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_rhs_rpg7_PG7V_mag {count=1;magazine="rhs_rpg7_PG7V_mag";};
     class _xx_rhs_rpg7_type69_airburst_mag {count=2;magazine="rhs_rpg7_type69_airburst_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };


  class NPC_Mechanic_pack: rhsgref_cdf_backpack_engineer
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
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
    class ST_George_Rebels
    {
      name="St. George Rebels";

      class Infantry
      {
        name="Infantry";

        class NPC_R_Command_Team
        {
          name="Command Team";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Rebel_Commander";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_Doctor";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_Rifleman_Crew";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_Mechanic";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Rebel_Cell
        {
          name="Rebel Cell";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Cell_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_Rifleman_Light_AT";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_Rifleman_Crew";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_Rifleman_Light";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Rebel_RPG_Cell
        {
          name="Rebel RPG Cell";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Cell_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_Grenadier";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_Mechanic";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_Rocket_Rebel_RPG7";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class NPC_R_Rebel_Scout_Cell
        {
          name="Rebel Scout Cell";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Cell_Leader";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_Rifleman_Light";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_Hunter";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_Rifleman_Garand";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class NPC_R_Motor_Squad_HMG
        {
          name="Motor Squad (HMG)";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Technical_HMG";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_Technical";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_Rifleman_Garand";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_Rifleman_Crew";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_Mechanic";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_Hunter";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
        };
        class NPC_R_Motor_Squad_AT
        {
          name="Motor Squad (AT)";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Technical_AT";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_Technical";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_Mechanic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_Rifleman_Crew";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_Rifleman_Light";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_Rocket_Rebel_RPG7";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
        };
        class NPC_R_Motor_Squad_Truck
        {
          name="Motor Squad (Truck)";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Rebel_KrAZ_255B1";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

        class NPC_R_Mechanized_Squad
        {
          name="Mechanized Squad ";
          faction="NPC_ST_George_Rebels";
          side=2;
          class Unit0
          {
            side=2;
            vehicle="NPC_Cell_Leader";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=2;
            vehicle="NPC_Rebel_BTR_60PB";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=2;
            vehicle="NPC_Mechanic";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=2;
            vehicle="NPC_Doctor";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=2;
            vehicle="NPC_Grenadier";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=2;
            vehicle="NPC_Rocket_Rebel_RPG7";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=2;
            vehicle="NPC_Hunter";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=2;
            vehicle="NPC_Rifleman_Crew";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=2;
            vehicle="NPC_Rifleman_Light";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
        };
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

      };
      class Air
      {
        name="Air";

      };
    };
  };
};
