//This needs to go in CfgInteractionMenus

class VirtualGarage: ExileAbstractAction
{
  title = "Access Virtual Garage";
  condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
  action = "call ExileClient_VirtualGarage_AccessGarage";
};




//Just paste both of these at the bottom of your config.cpp unless you already have CfgNetworkMessages then merge that and just paste VirtualGarageSettings below it
class CfgNetworkMessages {
	class GetStoredVehiclesRequest
	{
		module = "VirtualGarage";
		parameters[] = {"STRING"};
	};

	class GetStoredVehiclesResponse
	{
		module = "VirtualGarage";
		parameters[] = {"ARRAY"};
	};

	class RetrieveVehicleRequest
	{
		module = "VirtualGarage";
		parameters[] = {"STRING"};
	};
	class RetrieveVehicleResponse
	{
		module = "VirtualGarage";
		parameters[] = {"STRING","STRING"};
	};

	class StoreVehicleRequest
	{
		module = "VirtualGarage";
		parameters[] = {"STRING","STRING"};
	};

	class StoreVehicleResponse
	{
		module = "VirtualGarage";
		parameters[] = {"STRING"};
	};
};


class VirtualGarageSettings
{
	/**
	 * Do Players have to be on the Flag build rights to be able to access the garage? 1 = true 0 = false
	 */
	VirtualGarage_PlayerHasToBeOnFlag = 1;

	/**
	 * Should the player be moved in to the vehicle when it gets spawned? 1 = true 0 = false
	 * If you choose to move the player in to the vehicle on spawn set the VirtualGarage_VehicleSpawnState = 0
	 * Or the player will be locked in the vehicle and will whine in side chat for a admin like all players do
	 */
	VirtualGarage_MovePlayerInVehicleOnSpawn = 0;

	/**
	 * State the vehicle will spawn in 1 = locked 0 = unlocked
	 */
	VirtualGarage_VehicleSpawnState = 1;

    /**
     * How do you want the vehicle to spawn
     * 1 = The Exact position and direction as where it was when it was stored
     * 2 = Let the server choose a random safe position near the player
     */
    VirtualGarage_VehicleSpawnPos = 1;

	/**
	 * Should a 3d marker be added to the vehicle when it spawns to help players find the vehicle 1 = true 0 = false
	 */
	VirtualGarage_3DMarkerOnVehicleOnSpawn = 1;

	/**
	 * How long (in seconds) should the 3D marker stay
	 */
	VirtualGarage_3DTime = 20;

	/**
	 * Reapply Damage on vehicle spawn 1 = true 0 = false
	 * When we save the vheicle to the database we save the damage should we reapply that damage when the vehicle is respawned
	 * No this will not save gear as Virtual Garage should not be used as a huge safe
	 */
	VirtualGarage_ReapplyDamage = 1;

	/**
	 * Give the player the pin code when the retrive they vehicle
	 */
	VirtualGarage_GivePlayerPinCode = 1;

	/**
	 * How many cars can the virtual garage hold at each level ?
	 */
	VirtualGarage_FlagLevel1Limit = 2;
 	VirtualGarage_FlagLevel2Limit = 4;
 	VirtualGarage_FlagLevel3Limit = 6;
 	VirtualGarage_FlagLevel4Limit = 8;
 	VirtualGarage_FlagLevel5Limit = 10;
 	VirtualGarage_FlagLevel6Limit = 12;
 	VirtualGarage_FlagLevel7Limit = 14;
 	VirtualGarage_FlagLevel8Limit = 16;
 	VirtualGarage_FlagLevel9Limit = 18;
 	VirtualGarage_FlagLevel10Limit = 20;
};
