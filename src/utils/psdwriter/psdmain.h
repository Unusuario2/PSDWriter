//===== PSDWriter -> Written by Unusuario2, https://github.com/Unusuario2  ====//
//
// Purpose:
//
// $NoKeywords: $
//=============================================================================//
#ifndef PSDMAIN_H
#define PSDMAIN_H

#ifdef _WIN32
#pragma once
#endif // _WIN32


#include <cstddef>


#define G_RGPENDFILENAMESIZE		14u
#define G_RGPASSETCONVERTLISTSIZE	10u


extern bool			g_bIsSingleFile;
extern bool			g_bSignature;
extern bool			g_bTemplateGeneration;
extern bool			g_bDeleteSource;
extern float		g_fGlobalTimer;
extern uint8_t		g_uiCompressionType;
extern uint8_t      g_uiForceImageBit;
extern char			g_szSignature[1][128];
extern char			g_szGameMaterialSrcDir[MAX_PATH];
extern const char*	g_rgpAssetConvertList[G_RGPASSETCONVERTLISTSIZE];
extern const char*	g_rgpEndFileName[G_RGPENDFILENAMESIZE];


#endif // PSDMAIN_H