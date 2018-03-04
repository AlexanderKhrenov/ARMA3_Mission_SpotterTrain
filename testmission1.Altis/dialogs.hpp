////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by raining_blood, v1.063, #Toheha)
////////////////////////////////////////////////////////
class setTarget
{
	idd = 111;
	movingenable = true;
	
	class controls
	{
class setTarget: RscFrame
{
	idc = 1800;
	text = "Set Target Coordinates"; //--- ToDo: Localize;
	x = 0.28 * safezoneW + safezoneX;
	y = 0.312991 * safezoneH + safezoneY;
	w = 0.35 * safezoneW;
	h = 0.170008 * safezoneH;
	colorText[] = {0.5,0.5,0.5,1};
	colorBackground[] = {0.5,0.5,0.5,0.5};
};
class setTargetText: RscText
{
	idc = 1000;
	text = "SET TARGET COORDINATES AND YOUR DIRECTION:"; //--- ToDo: Localize;
	x = 0.29 * safezoneW + safezoneX;
	y = 0.346993 * safezoneH + safezoneY;
	w = 0.3485 * safezoneW;
	h = 0.0170008 * safezoneH;
};
class setTargetX: RscEdit
{
	idc = 1400;
	text = "X"; //--- ToDo: Localize;
	x = 0.316776 * safezoneW + safezoneX;
	y = 0.380995 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;

    	
};
class setTargetY: RscEdit
{
	idc = 1401;
	text = "Y"; //--- ToDo: Localize;
	x = 0.380507 * safezoneW + safezoneX;
	y = 0.380995 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class setPlayerDir: RscEdit
{
	idc = 1402;
	text = "angle"; //--- ToDo: Localize;
	x = 0.44425 * safezoneW + safezoneX;
	y = 0.380995 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class setTargetOk: RscButton
{
	text = "FIRE"; //--- ToDo: Localize;
	x = 0.51 * safezoneW + safezoneX;
	y = 0.380995 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
	action = "[] execVM 'setTargetAndFirstAttack.sqf'";
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
};
};
	
class correctTarget
{
	idd = 112;
	movingenable = true;
	class controls{
		////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by raining_blood, v1.063, #Pikubu)
////////////////////////////////////////////////////////

class correctTarget: RscFrame
{
	idc = 1800;
	text = "Target Position Correction"; //--- ToDo: Localize;
	x = 0.380506 * safezoneW + safezoneX;
	y = 0.312991 * safezoneH + safezoneY;
	w = 0.223056 * safezoneW;
	h = 0.459021 * safezoneH;
};
class correctTargetLeft: RscText
{
	idc = 1000;
	text = "    LEFT"; //--- ToDo: Localize;
	x = 0.388472 * safezoneW + safezoneX;
	y = 0.397995 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetRight: RscText
{
	idc = 1001;
	text = "   RIGHT"; //--- ToDo: Localize;
	x = 0.531865 * safezoneW + safezoneX;
	y = 0.397995 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetUnder: RscText
{
	idc = 1002;
	text = "  UNDER"; //--- ToDo: Localize;
	x = 0.460169 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetOver: RscText
{
	idc = 1003;
	text = "   OVER"; //--- ToDo: Localize;
	x = 0.460169 * safezoneW + safezoneX;
	y = 0.312991 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetLeftDist: RscEdit
{
	idc = 1400;
	text = "       0"; //--- ToDo: Localize;
	x = 0.388472 * safezoneW + safezoneX;
	y = 0.465998 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetRightDist: RscEdit
{
	idc = 1401;
	text = "       0"; //--- ToDo: Localize;
	x = 0.531865 * safezoneW + safezoneX;
	y = 0.465998 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetUnderDist: RscEdit
{
	idc = 1402;
	text = "       0"; //--- ToDo: Localize;
	x = 0.460169 * safezoneW + safezoneX;
	y = 0.568003 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetOverDist: RscEdit
{
	idc = 1403;
	text = "       0"; //--- ToDo: Localize;
	x = 0.460169 * safezoneW + safezoneX;
	y = 0.380995 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
};
class correctTargetCorrect: RscButton
{
	idc = 1600;
	text = "CORRECT"; //--- ToDo: Localize;
	x = 0.460169 * safezoneW + safezoneX;
	y = 0.670008 * safezoneH + safezoneY;
	w = 0.0637302 * safezoneW;
	h = 0.0850039 * safezoneH;
	action = "[] execVM 'correctFire.sqf'";
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};	

