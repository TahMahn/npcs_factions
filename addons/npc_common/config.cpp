class CfgPatches
{
  class NPC_Common
  {
    // Meta information for editor
    name = "NPCs Factions Common";
    author = "Berntsen";
    url = "https://arma.npcs.games";

    // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
    requiredVersion = 0.1;
    // Required addons, used for setting load order. (CfgPatches classname NOT PBO filename!)
    // When any of the addons are missing, a pop-up warning will appear when launching the game.
    requiredAddons[] = { "A3_Characters_F" };
    // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
    units[] = {};
    // List of weapons (CfgWeapons classes) contained in the addon.
    weapons[] = {};
  };
};