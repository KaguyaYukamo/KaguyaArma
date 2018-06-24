/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;


if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\teargas.sqf";

[
    8*60, // seconds to delete dead bodies (0 means don't delete)
    5*60, // seconds to delete dead vehicles (0 means don't delete)
    30*60, // seconds to delete immobile vehicles (0 means don't delete)
    5*60, // seconds to delete dropped weapons (0 means don't delete)
    20*60, // seconds to deleted planted explosives (0 means don't delete)
    5*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM 'scripts\repetitive_cleanup.sqf';


StartProgress = true;


