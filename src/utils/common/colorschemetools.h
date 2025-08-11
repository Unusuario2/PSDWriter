//= ColorSchemeTools -> Written by Unusuario2, https://github.com/Unusuario2  =//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//
#ifndef COLORSCHEMETOOLS_H
#define COLORSCHEMETOOLS_H

#ifdef _WIN32
#pragma once
#endif // _WIN32


#include "color.h"


#define ColorWhite			Color(255, 255, 255, 255)
#define ColorMagenta		Color(255, 0, 255, 255)
#define ColorBlue			Color(0, 0, 255, 255)
#define ColorCyan			Color(0,255,255,255)
#define ColorGreen			Color(0,255,0,255)
#define ColorRed			Color(255,0,0,255)
#define ColorBlack			Color(0, 0, 0, 255)
#define ColorGrey			Color(0, 0, 0, 128)
#define ColorYellow			Color(255, 255, 0, 255)
#define ColorYellowDark		Color(255, 255, 0)

#define ColorHeader			ColorCyan
#define ColorPath			ColorYellowDark
#define ColorWarning		ColorYellow
#define ColorSucesfull		ColorGreen
#define ColorUnSucesfull	ColorRed
#define ColorLowIntensity	ColorGrey


#endif // COLORSCHEMETOOLS_H