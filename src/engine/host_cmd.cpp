#include "quakedef.h"
#include "server.h"

void Host_InitializeGameDLL()
{
	Cbuf_Execute();
	NET_Config( svs.maxclients > 1 );

	if( svs.dll_initialized )
	{
		Con_DPrintf( "Sys_InitializeGameDLL called twice, skipping second call\n" );
		return;
	}

	svs.dll_initialized = true;
	LoadEntityDLLs( host_parms.basedir );
	//TODO: implement - Solokiller
	/*
	gEntityInterface.pfnGameInit();
	gEntityInterface.pfnPM_Init( &g_svmove );
	gEntityInterface.pfnRegisterEncoders();

	SV_InitEncoders();
	if( gEntityInterface.pfnGetHullBounds( 0, ( float * ) player_mins, ( float * ) player_maxs )
		&& gEntityInterface.pfnGetHullBounds( 1, player_mins[ 1 ], player_maxs[ 1 ] )
		&& gEntityInterface.pfnGetHullBounds( 2, player_mins[ 2 ], player_maxs[ 2 ] ) )
		gEntityInterface.pfnGetHullBounds( 3, player_mins[ 3 ], player_maxs[ 3 ] );
	R_ResetSvBlending();

	if( g_iextdllMac <= 0 )
		goto LABEL_16;
	v0 = ( void ** ) g_rgextdll;
	v1 = 0;
	v2 = ( void ** ) g_rgextdll;
	while( 1 )
	{
		v3 = dlsym( *v2, "Server_GetBlendingInterface" );
		if( v3 )
			break;
	LABEL_10:
		v4 = g_iextdllMac;
		++v1;
		v2 += 3;
		if( v1 >= g_iextdllMac )
			goto LABEL_11;
	}
	if( !( ( int( __cdecl * )( _DWORD, _DWORD, _DWORD, _DWORD, _DWORD ) )v3 )(
		1,
		&g_pSvBlendingAPI,
		&server_studio_api,
		rotationmatrix,
		bonetransform ) )
	{
		Con_DPrintf( "Couldn't get server .dll studio model blending interface. Version mismatch?\n" );
		R_ResetSvBlending();
		goto LABEL_10;
	}
	v4 = g_iextdllMac;
LABEL_11:
	if( v4 > 0 )
	{
		v5 = 0;
		while( 1 )
		{
			v6 = ( void( *)( char *, int ) )dlsym( *v0, "SV_SaveGameComment" );
			if( v6 )
				break;
			++v5;
			v0 += 3;
			if( v5 >= g_iextdllMac )
				goto LABEL_16;
		}
		g_pSaveGameCommentFunc = v6;
	}
LABEL_16:
*/
	Cbuf_Execute();
}