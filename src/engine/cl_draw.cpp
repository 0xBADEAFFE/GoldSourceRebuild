#include "quakedef.h"
#include "client.h"
#include "cl_draw.h"

HSPRITE SPR_Load( const char* pTextureName )
{
	//TODO: implement - Solokiller
	return 0;
}

int SPR_Frames( HSPRITE hSprite )
{
	//TODO: implement - Solokiller
	return 0;
}

int SPR_Height( HSPRITE hSprite, int frame )
{
	//TODO: implement - Solokiller
	return 0;
}

int SPR_Width( HSPRITE hSprite, int frame )
{
	//TODO: implement - Solokiller
	return 0;
}

void SPR_Set( HSPRITE hSprite, int r, int g, int b )
{
	//TODO: implement - Solokiller
}

void SPR_EnableScissor( int x, int y, int width, int height )
{
	//TODO: implement - Solokiller
}

void SPR_DisableScissor()
{
	//TODO: implement - Solokiller
}

void SPR_Draw( int frame, int x, int y, const wrect_t* prc )
{
	//TODO: implement - Solokiller
}

void SPR_DrawHoles( int frame, int x, int y, const wrect_t* prc )
{
	//TODO: implement - Solokiller
}

void SPR_DrawAdditive( int frame, int x, int y, const wrect_t* prc )
{
	//TODO: implement - Solokiller
}

void SPR_DrawGeneric( int frame, int x, int y, const wrect_t* prc, int src, int dest, int width, int height )
{
	//TODO: implement - Solokiller
}

client_sprite_t* SPR_GetList( char* psz, int* piCount )
{
	//TODO: implement - Solokiller
	return nullptr;
}

void SetCrosshair( HSPRITE hspr, wrect_t rc, int r, int g, int b )
{
	//TODO: implement - Solokiller
}

void SetFilterMode( int mode )
{
	//TODO: implement - Solokiller
}

void SetFilterColor( float r, float g, float b )
{
	//TODO: implement - Solokiller
}

void SetFilterBrightness( float brightness )
{
	//TODO: implement - Solokiller
}