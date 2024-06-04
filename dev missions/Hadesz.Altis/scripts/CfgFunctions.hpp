class Sixone {
    // class rank {
    //     file = "scripts\rank";
    //     class rank {};
    // };
	class Groups {
		file = "scripts\groups";
		class assignPlayer {};
		class handleDisconnect {};
		class initGroupMenu {};
		class onGroupMenuTvSelectChange {};
		class onRespawn {};
		class removeFromGroup {};
		class selectPosition {};
		class setupPlayer {};
		class updateGroups {};
	};
    class init {
        file = "scripts\init";

        class init_message {};
        class init_chatCommands {};

        class init_eventHandlers {};
        class init_vehicle {};
        class init_logistics {};
        class init_aceItemReplace {};
        class init_staging {};

        class init_skillAdjustment {};
    };
    class systems {
        file = "scripts\systems";
        class environmentControl;

        class deleteDroppedObjects {};
        class doGetOutHeloSide {};
        class dynamicMarkers {};

        // Training scripts
        class training_addHitIndicator {};
        class training_clearhitIndicator {};

       // Plane jump
        class para_lineJump {};
        class para_haloJump {};
        class para_equipment {};
        class para_backpack {};

        class getAttendance {};
        class getServerMetrics {};

        class isValidFaction {};

        class checkStagingZone {};
        class addHeal {};

        class getIcon {};

        class addObjectToCurator {};
    };
    class diag {
        file = "scripts\diag";
        class error {};
        class info {};
        class log {};
        class warning {};
    };
    class mission {
        file = "scripts\mission";

        class addGetOutHelo {};
        class addEscapeWreck {};

        class addLineJump {};
        class addHaloJump {};

        class makeAgent {};
        class addStagingZone {};
    };
    class vehicle {
        file = "scripts\vehicle";
        class vehicle_addFunctions {};
        class vehicle_addFunctionsGlobal {};
        class vehicle_addRepairAction {};
        class vehicle_addInventory {}; 
        class vehicle_applyTextures {};

        // Staging
        class vehicle_addStagingActions {};

        class vehicle_addRegearAction {};

        class vehicle_addPylonSelection {};
        class vehicle_setupPylonCategories {};

        class vehicle_applyLoadout {};
        class vehicle_addDefaultLoadout {};
        class vehicle_getPylon {};

        // Other
        class vehicle_reset {};
    };
    class logistics {
        file = "scripts\logistics";
        class addCargo {};
        class setCargo {};
        class setCargoAttributes {};
        class checkItemValidity {};
        class createCargoCrate {};

        class doStarterCrateSupplies {};
        class doFieldHospital {};
        class doSupplyCrate {};

        class doEmptyCrate {};

        class logistics_getContainer {};
        class logistics_getAllContainerItems {};
    };
    class modules {
        file = "scripts\modules";
        class zenModule_EnableUnitSimulation {};

        class zenModule_CreateStarterCrate {};
        class zenModule_CreateSupplyCrate {};

        class zenModule_stagingZones {};

        class zenModule_CallEndex {};
    };
    class players {
        file = "scripts\players";

        class player_getRank {};
        class player_setRank {};
        class player_setRankpatch {};
        class player_getRole {};

        class player_isCurator {};
        
        class unit_getName {};

        // Other Functions
        class unit_getVariables {};
    };
    class gear {
        file = "scripts\gear";
        class gear_preInit { preInit = 1; };
        class gear_postInitProxy { postInit = 1; };
        class gear_postInit {};
    };
};
class Rev_tp {   
    class Teleport {
		file ="scripts\Rev_teleport";
        class addAction {};
        class addPoint {};
        class addZEN_modules {postinit = 1;};
        class deletePoint {};
        class listCheck {};
		class onButtonClick {};
		class onLBSelChanged {};
        class onLoad {};
        class teleport {};
        class ZEN_dialog {};
	};
};
class tint {
    class furniture {
        file = "scripts\furniture\functions";
        class dressDown {};
        class dressUp {};
        class translate {};
        class updateHouse {};
        class init {};
        class preinit {preInit=1;};
    };
};

