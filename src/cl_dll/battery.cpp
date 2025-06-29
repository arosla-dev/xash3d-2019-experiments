/***
*
*	Copyright (c) 1996-2002, Valve LLC. All rights reserved.
*	
*	This product contains software technology licensed from Id 
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc. 
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/
//
// battery.cpp
//
// implementation of CHudBattery class
//
#if 1
#include "hud.h"
#include "cl_util.h"
#include "parsemsg.h"

#include <string.h>
#include <stdio.h>

DECLARE_MESSAGE(m_Battery, Battery)

int CHudBattery::Init(void)
{

};


int CHudBattery::VidInit(void)
{

};

int CHudBattery:: MsgFunc_Battery(const char *pszName,  int iSize, void *pbuf )
{

}


int CHudBattery::Draw(float flTime)
{

}
#endif