/*  
	Montrer son passeport   
@Author : Heimdall @AltisAurore.fr  
*/  

private["_target","_message"];  

_target = cursorTarget;  

if(playerSide != west) exitWith  
{  
    hint "You're not a polizei!";  
};  

if( isNull _target) then {_target = player;};  

if( !(_target isKindOf "Man") ) then {_target = player;};  

if( !(alive _target) ) then {_target = player;};  

_message = format["<img size='10' color='#FFFFFF' image='icons\civ.paa'/><br/><br/><t size='2.5'>%1</t><br/><t size='1'>Civilian Of Altis(edit depend the map)</t>", name player];  

[player, _message] remoteExec ["life_fnc_copOdznakiConf",_target];