////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Sun Jul 23 12:12:06 2017 : 'file' last modified on Sun Jan 08 12:22:48 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class uo_debugconsole : config.bin{
class CfgPatches
{
	class uo_debugConsole
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.70;
		requiredAddons[] = {"A3_UI_F","CBA_diagnostic","uo_main"};
	};
};

class Extended_PreInit_EventHandlers
{
	class uo_debugConsole
	{
		init = "call compile preprocessFileLineNumbers '\z\uo\addons\debugConsole\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class uo_debugConsole
	{
		init = "call compile preprocessFileLineNumbers '\z\uo\addons\debugConsole\XEH_postInit.sqf'";
	};
};
class Extended_Init_EventHandlers
{
	class CAManBase
	{
		class uo_debugConsole
		{
			init = "call compile preprocessFileLineNumbers '\z\uo\addons\debugConsole\XEH_init.sqf'";
		};
	};
};

class CfgFunctions
{
	class uo
	{
		class GUI
		{
			file = "\z\uo\addons\debugConsole\functions";
			class init{};
			class handleCheckbox{};
			class mapMonitor{};
			class handleMapClick{};
			class unflipVehicle{};
			class handleSpectator{};
			class spawnItem{};
			class TPUnit{};
			class teleportU2U{};
			class handleAdminControls{};
			class handleZeus{};
			class GMHeal{};
			class hasGMAccess{};
			class endMission{};
		};
	};
	class A3 {
		class Debug {
			class isDebugConsoleAllowed {
				file = "\z\uo\addons\debugConsole\fn_isDebugConsoleAllowed.sqf";
			};
		};
	};
};

class CfgDebriefing {
	class UO_GMEND {
		subtitle = "The mission was ended by a GM";
		pictureBackground = "";
		picture = "mil_objective";
		pictureColor[] = {0.7,0.6,0.0,1};
	};
};

class RscText;
class RscFrame;
class RscCombo;
class RscButton;
class RscEdit;
class RscMapControl;
class IGUIBack;
class RscCheckbox;
class UOGM
{
	idd = 951230;
	enableSimulation = 1;
	MovingEnabled = 0;
	name = "UOGM_V2";
	onLoad = "[player, (_this select 0)] spawn uo_fnc_init; false;";
	onUnload = "true;";
	class Controls
	{
		class uogm_Background: IGUIBack
		{
			idc = 2200;
			x = "0.2375 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.525 * safezoneW";
			h = "0.7 * safezoneH";
		};
		class uogm_map: RscMapControl
		{
			idc = 1800;
			x = "0.244062 * safezoneW + safezoneX";
			y = "0.164 * safezoneH + safezoneY";
			w = "0.28875 * safezoneW";
			h = "0.448 * safezoneH";
			onMouseButtonClick = "[player, _this] spawn uo_fnc_handleMapClick; false;";
		};
		class uogm_playerList: RscCombo
		{
			idc = 2100;
			x = "0.539375 * safezoneW + safezoneX";
			y = "0.164 * safezoneH + safezoneY";
			w = "0.216562 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_tp: RscFrame
		{
			idc = 1801;
			x = "0.539375 * safezoneW + safezoneX";
			y = "0.472 * safezoneH + safezoneY";
			w = "0.216562 * safezoneW";
			h = "0.14 * safezoneH";
		};
		class uogm_ItemSpawn: RscFrame
		{
			idc = 1802;
			x = "0.539375 * safezoneW + safezoneX";
			y = "0.206 * safezoneH + safezoneY";
			w = "0.216562 * safezoneW";
			h = "0.252 * safezoneH";
		};
		class uogm_ItemList: RscCombo
		{
			idc = 2101;
			x = "0.545937 * safezoneW + safezoneX";
			y = "0.22 * safezoneH + safezoneY";
			w = "0.203437 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_ItemEdit: RscEdit
		{
			idc = 1400;
			x = "0.545937 * safezoneW + safezoneX";
			y = "0.262 * safezoneH + safezoneY";
			w = "0.164062 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_itemCount: RscEdit
		{
			idc = 1401;
			text = "1";
			x = "0.716563 * safezoneW + safezoneX";
			y = "0.262 * safezoneH + safezoneY";
			w = "0.0328125 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_giveItemToPlayer: RscButton
		{
			idc = 1600;
			text = "Give to Player";
			x = "0.545937 * safezoneW + safezoneX";
			y = "0.332 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'PLAYER'] spawn uo_fnc_spawnItem; false;";
		};
		class uogm_GiveAll: RscButton
		{
			idc = 1601;
			text = "Give to All";
			x = "0.545937 * safezoneW + safezoneX";
			y = "0.374 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'ALL'] spawn uo_fnc_spawnItem; false;";
		};
		class uogm_spawnBox: RscButton
		{
			idc = 1602;
			text = "Spawn Box";
			x = "0.598437 * safezoneW + safezoneX";
			y = "0.416 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'BOX'] spawn uo_fnc_spawnItem; false;";
		};
		class uogm_takePlayer: RscButton
		{
			idc = 1603;
			text = "Heal Player";
			x = "0.650937 * safezoneW + safezoneX";
			y = "0.332 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[1] spawn uo_fnc_GMHeal; false;";
		};
		class uogm_takeFromAll: RscButton
		{
			idc = 1604;
			text = "Heal All";
			x = "0.650937 * safezoneW + safezoneX";
			y = "0.374 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[2] spawn uo_fnc_GMHeal; false;";
		};
		class uogm_TPGMToPlayer: RscButton
		{
			idc = 1605;
			text = "TP To Player";
			x = "0.545937 * safezoneW + safezoneX";
			y = "0.486 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'GMTOUSER'] spawn uo_fnc_tpUnit; false;";
		};
		class uogm_TPPlayerMap: RscButton
		{
			idc = 1606;
			text = "TP Player on Map";
			x = "0.545937 * safezoneW + safezoneX";
			y = "0.528 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'TPUSERMAP'] spawn uo_fnc_tpUnit; false;";
		};
		class uogm_TPAllToGM: RscButton
		{
			idc = 1607;
			text = "TP All To GM";
			x = "0.545937 * safezoneW + safezoneX";
			y = "0.57 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'TPALLTOGM'] spawn uo_fnc_tpUnit; false;";
		};
		class uogm_TPPlayerToGM: RscButton
		{
			idc = 1608;
			text = "TP Player to GM";
			x = "0.650937 * safezoneW + safezoneX";
			y = "0.486 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'USERTOGM'] spawn uo_fnc_tpUnit; false;";
		};
		class uogm_TPGMToMap: RscButton
		{
			idc = 1609;
			text = "TP GM To Map";
			x = "0.650937 * safezoneW + safezoneX";
			y = "0.528 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'TPGMMAP'] spawn uo_fnc_tpUnit; false;";
		};
		class uogm_TPAllToMap: RscButton
		{
			idc = 1610;
			text = "TP All To Map";
			x = "0.650937 * safezoneW + safezoneX";
			y = "0.57 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 'TPALLTOMAP'] spawn uo_fnc_tpUnit; false;";
		};
		class uogm_TPAllToGMRadius: RscEdit
		{
			idc = 1402;
			text = "15";
			x = "0.618125 * safezoneW + safezoneX";
			y = "0.57 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.028 * safezoneH";
			tooltip = "The radius around the GM where players will NOT be moved";
		};
		class uogm_unflipVehicle: RscButton
		{
			idc = 1611;
			text = "Unflip Vehicle";
			x = "0.434375 * safezoneW + safezoneX";
			y = "0.626 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[cursorObject] spawn uo_fnc_unflipVehicle; false;";
		};
		class uogm_Spectator: RscButton
		{
			idc = 1612;
			text = "Spectator";
			x = "0.434375 * safezoneW + safezoneX";
			y = "0.668 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player] spawn uo_fnc_handleSpectator; false;";
		};
		class uogm_DebugConsole: RscButton
		{
			idc = 1613;
			text = "Debug Console";
			x = "0.434375 * safezoneW + safezoneX";
			y = "0.71 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "['keyDown', [findDisplay 49,59], ''] execVM 'a3\ui_f\scripts\GUI\RscDisplayInterrupt.sqf'; false;";
		};
		class uogm_EndMission: RscButton
		{
			idc = 1613;
			text = "End Mission";
			x = "0.434375 * safezoneW + safezoneX";
			y = "0.752 * safezoneH + safezoneY";
			w = "0.0984375 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "call uo_fnc_endMission; false;";
		};
		class uogm_MapMonitorCB: RscCheckbox
		{
			idc = 2800;
			x = "0.545 * safezoneW + safezoneX";
			y = "0.62 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			onCheckedChanged = "[player, (_this select 0), 2800, (_this select 1)] call uo_fnc_handleCheckbox; false;";
		};
		class uogm_zeusCB: RscCheckbox
		{
			idc = 2801;
			x = "0.545 * safezoneW + safezoneX";
			y = "0.66 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			onCheckedChanged = "[player, (_this select 0), 2801, (_this select 1)] call uo_fnc_handleCheckbox; false;";
		};
		class uogm_invisibleCB: RscCheckbox
		{
			idc = 2802;
			x = "0.545 * safezoneW + safezoneX";
			y = "0.7 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			onCheckedChanged = "[player, (_this select 0), 2802, (_this select 1)] call uo_fnc_handleCheckbox; false;";
		};
		class uogm_invincibleCB: RscCheckbox
		{
			idc = 2803;
			x = "0.545 * safezoneW + safezoneX";
			y = "0.74 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			onCheckedChanged = "[player, (_this select 0), 2803, (_this select 1)] call uo_fnc_handleCheckbox; false;";
		};
		class uogm_CaptiveCB: RscCheckbox
		{
			idc = 2804;
			x = "0.545 * safezoneW + safezoneX";
			y = "0.78 * safezoneH + safezoneY";
			w = "0.02625 * safezoneW";
			h = "0.042 * safezoneH";
			onCheckedChanged = "[player, (_this select 0), 2804, (_this select 1)] call uo_fnc_handleCheckbox; false;";
		};
		class uogm_MapMonitor: RscText
		{
			idc = 1000;
			text = "Map Monitor";
			x = "0.565 * safezoneW + safezoneX";
			y = "0.625 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_Zeus: RscText
		{
			idc = 1001;
			text = "Zeus";
			x = "0.565 * safezoneW + safezoneX";
			y = "0.665 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_Invisible: RscText
		{
			idc = 1002;
			text = "Invisiblity";
			x = "0.565 * safezoneW + safezoneX";
			y = "0.705 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_invincible: RscText
		{
			idc = 1003;
			text = "Invinciblity";
			x = "0.565 * safezoneW + safezoneX";
			y = "0.745 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_Captive: RscText
		{
			idc = 1004;
			text = "Captive";
			x = "0.565 * safezoneW + safezoneX";
			y = "0.785 * safezoneH + safezoneY";
			w = "0.0721875 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class RscFrame_1803: RscFrame
		{
			idc = 1803;
			x = "0.250625 * safezoneW + safezoneX";
			y = "0.626 * safezoneH + safezoneY";
			w = "0.177187 * safezoneW";
			h = "0.21 * safezoneH";
		};
		class uogm_Name: RscText
		{
			idc = 1005;
			text = "Name:";
			x = "0.250625 * safezoneW + safezoneX";
			y = "0.64 * safezoneH + safezoneY";
			w = "0.170625 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_side: RscText
		{
			idc = 1006;
			text = "Side:";
			x = "0.250625 * safezoneW + safezoneX";
			y = "0.668 * safezoneH + safezoneY";
			w = "0.0590625 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_GroupID: RscText
		{
			idc = 1007;
			text = "Group:";
			x = "0.31625 * safezoneW + safezoneX";
			y = "0.668 * safezoneH + safezoneY";
			w = "0.105 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_steamID: RscText
		{
			idc = 1008;
			text = "Steam ID:";
			x = "0.250625 * safezoneW + safezoneX";
			y = "0.696 * safezoneH + safezoneY";
			w = "0.150937 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_Grid: RscText
		{
			idc = 1009;
			text = "Grid:";
			x = "0.250625 * safezoneW + safezoneX";
			y = "0.724 * safezoneH + safezoneY";
			w = "0.150937 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_closestFriendly: RscText
		{
			idc = 1010;
			text = "Closest friendly:";
			x = "0.250625 * safezoneW + safezoneX";
			y = "0.752 * safezoneH + safezoneY";
			w = "0.1575 * safezoneW";
			h = "0.028 * safezoneH";
		};
		class uogm_copyInfo: RscButton
		{
			idc = 1615;
			text = "Copy Info";
			x = "0.257187 * safezoneW + safezoneX";
			y = "0.794 * safezoneH + safezoneY";
			w = "0.0525 * safezoneW";
			h = "0.028 * safezoneH";
			onButtonClick = "[player, 1] spawn uo_fnc_handleAdminControls; false;";
		};
	};
};
//};
