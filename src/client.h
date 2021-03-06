#pragma once
/*
 *      Copyright (C) 2005-2015 Team XBMC
 *      http://www.xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1335, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "libXBMC_addon.h"
#include "libXBMC_pvr.h"
#include "IStreamReader.h"

#define DEFAULT_HOST             "127.0.0.1"
#define DEFAULT_CONNECT_TIMEOUT  30
#define DEFAULT_STREAM_PORT      8001
#define DEFAULT_WEB_PORT         80
#define DEFAULT_UPDATE_INTERVAL  2
#define DEFAULT_TSBUFFERPATH     "special://userdata/addon_data/pvr.vuplus"
#define TIMESHIFT_OFF            0
#define TIMESHIFT_ON_PLAYBACK    1
#define TIMESHIFT_ON_PAUSE       2

extern bool                      m_bCreated;
extern std::string               g_strHostname;
extern int                       g_iPortStream;
extern int                       g_iPortWeb;
extern std::string               g_strUsername;
extern std::string               g_strPassword;
extern std::string               g_strIconPath;
extern std::string               g_strRecordingPath;
extern int                       g_iUpdateInterval;
extern unsigned int              g_iPacketSequence;
extern bool                      g_bShowTimerNotifications;
extern bool                      g_bZap;
extern bool                      g_bAutomaticTimerlistCleanup;
extern bool                      g_bUseSecureHTTP;
extern bool                      g_bAutoConfig;
extern bool                      g_bKeepFolders;
extern bool                      g_bOnlyCurrentLocation;
extern bool                      g_bSetPowerstate;
extern bool                      g_bOnlyOneGroup;
extern bool                      g_bOnlinePicons;
extern std::string               g_strOneGroup;
extern std::string               g_szUserPath;
extern std::string               g_szClientPath;
extern int                       g_iEnableTimeshift;
extern std::string               g_strTimeshiftBufferPath;
extern int                       g_iReadTimeout;
extern std::string               g_strChannelDataPath;
extern ADDON::CHelper_libXBMC_addon *   XBMC;
extern CHelper_libXBMC_pvr *     PVR;

/*!
 * @brief PVR macros for string exchange
 */
#define PVR_STRCPY(dest, source) do { strncpy(dest, source, sizeof(dest)-1); dest[sizeof(dest)-1] = '\0'; } while(0)
