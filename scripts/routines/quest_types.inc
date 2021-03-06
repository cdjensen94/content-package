/***********************************************
 * Copyright © Luke Salisbury
 *
 * You are free to share, to copy, distribute and transmit this work
 * You are free to adapt this work
 * Under the following conditions:
 *  You must attribute the work in the manner specified by the author or licensor (but not in any way that suggests that they endorse you or your use of the work). 
 *  You may not use this work for commercial purposes.
 * Full terms of use: http://creativecommons.org/licenses/by-nc/3.0/
 * Changes:
 *     2010/01/11 [luke]: new file.
 ***********************************************/

#include <entities>
#include <public_events>

#define NULLOBJECT object:-1
#define STATEFUNCTION  

#define SOUTH 0		//0 deg
#define SOUTHEAST 1	//45 deg
#define EAST 2		//90 deg
#define NORTHEAST 3	//135 deg
#define NORTH 4		//180 deg
#define NORTHWEST 5	//225 deg
#define WEST 6		//270 deg
#define SOUTHWEST 7	//315 deg


enum _STATE {
	ALIVE = 0,
	STANDING,
	MOVING,
	HIT,
	KNOCKED,
	JUMPING,
	SWIMMING,
	FLOATING,
	CHASING,
	USING,
	LIFTING,
	STANDLIFT,
	WALKLIFT,
	SPECIALSTATE,
	FALLING,
	WAITING,
	LEAPING,
	PUSHING,
	PULLING,
	DYING,
	DEAD,
	GONE
}

enum _STATEEFFECTS {
	NOEFFECT
	STUNNED,
	FROZEN,
	SHOCKED,
	BURNING,
}


#define TYPE_UNKNOWN 0
#define TYPE_ENEMY 1
#define TYPE_DOOR 2
#define TYPE_WEAPON 3
#define TYPE_AWAKING 4
#define TYPE_TRANSPORT 5
#define TYPE_PUSHABLE 6
#define TYPE_SWITCH 7
#define TYPE_ITEM 8
#define TYPE_PLAYER 9


stock type_name[11][64] =  {"UNKNOWN","ENEMY","DOOR","WEAPON","AWAKING","TRANSPORT","PUSHABLE","SWITCH","ITEM","PLAYER","OUTOFRANGE" };




enum EntityGraphic {
	object:egOBJ,
	egOFFX,
	egOFFY,
	egOFFZ
}


enum RECT {
	rX,
	rY,
	rW,
	rH
}

/* Item Types */
#define ITEM_BOMBS 1
#define ITEM_ARROW 2
#define ITEM_RUPEE 3
#define ITEM_KEY 4
#define ITEM_MASTERKEY 5


/* Mask Values */
/* */
#define MASK_CLEAR 0
#define MASK_DIRT 4
#define MASK_GRASS 8
#define MASK_PUDDLE 16
#define MASK_ICE 24

#define MASK_NORMALGROUND 64

#define MASK_ENEMYSOLID1 120 // Air Based

#define MASK_HOLE1 140
#define MASK_HOLE2 142

#define MASK_ENEMYSOLID2 160 // Ground Based

#define MASK_WALK 162
#define MASK_AUTOWALK 164

#define MASK_PLAYERSOLID 200
#define MASK_PLAYERSOLID2 202

#define MASK_WATER 180

#define MASK_BLOCK 240

#define MASK_LEAP 250
#define MASK_SOLID3 253
#define MASK_SOLID2 254
#define MASK_SOLID 255

/* Weapon Types */
#define AEXPLOSION 1
#define ASWORD 2
#define APLAYER 4
#define AFIRE 8
#define AICE 16
#define ASTUN 32
#define ASHIELD 64
#define AMAGIC 128




