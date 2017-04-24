#ifndef ENGINE_SV_MAIN_H
#define ENGINE_SV_MAIN_H

#include "steam/steam_api.h"

struct client_frame_t;

AppId_t GetGameAppID();

bool IsGameSubscribed( const char *game );
bool BIsValveGame();

extern bool g_bIsCStrike;
extern bool g_bIsCZero;
extern bool g_bIsCZeroRitual;
extern bool g_bIsTerrorStrike;
extern bool g_bIsTFC;

void SetCStrikeFlags();

void SV_DeallocateDynamicData();

void SV_AllocClientFrames();

void SV_ClearFrames( client_frame_t** frames );

void SV_ServerShutdown();

void SV_Init();

void SV_Shutdown();

void SV_SetMaxclients();

#endif //ENGINE_SV_MAIN_H
