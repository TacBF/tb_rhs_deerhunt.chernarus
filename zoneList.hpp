#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

    {1,TEAM_RED,		SPAWN_XRAY,		{2},	{},	1,	{},	0,	"%3 Kamenka Hunting Club"	},
	{2,TEAM_RED,		SPAWN_NEVER,	{1,4},	{},	1,	{},	0,	"%1 SelhozAvia"	},
	{ 10,TEAM_RED, 	SPAWN_INSTANT,  {}			, {}    , 1	     , {1,4}     , 2    , "%4 Smuggler's lair" },
	
	{4,TEAM_NEUTRAL,	SPAWN_NEVER,	{2,5},{},	1,	{},	0,	"%1 Red Oak  farm"	},
	{5,TEAM_NEUTRAL,	SPAWN_NEVER,	{4,6},	{ },1,	{},	0,	"%1 Terezin"	},
	{6,TEAM_NEUTRAL,	SPAWN_NEVER,	{5,8},	{ },1,	{},	0,	"%1 Maple Pub"	},
	
	{ 7,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1	     , {9,6}     , 2    , "%4 Surprise" },
	{8,TEAM_BLUE,		SPAWN_NEVER,	{6,9},	{},	1,	{},	0,	"%1 Broken Hills"	},
	{9,TEAM_BLUE,		SPAWN_XRAY,		{8},	{},	1,	{},	0,	"%3 Rangers Base"	}
};