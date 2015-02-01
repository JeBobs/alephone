#ifndef __ALEPHVERSION_H
#define __ALEPHVERSION_H

/*
ALEPHVERSION.H

	Copyright (C) 2002 and beyond by the "Aleph One" developers
 
	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	This license is contained in the file "COPYING",
	which is included with this source code; it is available online at
	http://www.gnu.org/licenses/gpl.html

*/


#define A1_DISPLAY_NAME "Aleph One"
#define A1_DISPLAY_VERSION "1.1"
#define A1_DISPLAY_DATE_VERSION "2014-01-04"
#define A1_DATE_VERSION "20140104"

#ifdef WIN32
#define A1_DISPLAY_PLATFORM "Windows"
#define A1_UPDATE_PLATFORM "windows"
#elif defined (__APPLE__) && defined(__MACH__)
#ifdef MAC_APP_STORE
#define A1_DISPLAY_PLATFORM "Mac OS X (App Store)"
#define A1_UPDATE_PLATFORM "macappstore"
#else
#define A1_DISPLAY_PLATFORM "Mac OS X"
#define A1_UPDATE_PLATFORM "macosx"
#endif
#elif defined (__MACOS__)
#define A1_DISPLAY_PLATFORM "Mac OS"
#define A1_UPDATE_PLATFORM "macos"
#elif defined (linux)
#define A1_DISPLAY_PLATFORM "Linux"
#define A1_UPDATE_PLATFORM "source"
#elif defined (__BEOS__)
#define A1_DISPLAY_PLATFORM "BeOS"
#define A1_UPDATE_PLATFORM "source"
#elif defined (__NetBSD__)
#define A1_DISPLAY_PLATFORM "NetBSD"
#define A1_UPDATE_PLATFORM "source"
#elif defined (__OpenBSD__)
#define A1_DISPLAY_PLATFORM "OpenBSD"
#define A1_UPDATE_PLATFORM "source"
#else
#define A1_DISPLAY_PLATFORM "Unknown"
#define A1_UPDATE_PLATFORM "source"
#endif

#ifndef A1_VERSION_STRING
#define A1_VERSION_STRING A1_DISPLAY_PLATFORM " " A1_DISPLAY_DATE_VERSION " " A1_DISPLAY_VERSION
#endif

#define A1_HOMEPAGE_URL "http://marathon.sourceforge.net/"
#define A1_UPDATE_HOST "marathon.sourceforge.net"
#define A1_METASERVER_HOST "metaserver.lhowon.org"
#define A1_METASERVER_LOGIN_URL "https://metaserver.lhowon.org/metaclient/login"
#define A1_METASERVER_SIGNUP_URL "https://metaserver.lhowon.org/metaclient/signup"
#define A1_METASERVER_SETTINGS_URL "https://metaserver.lhowon.org/settings"
#define A1_LEADERBOARD_URL "https://stats.lhowon.org/"

#endif // ALEPHVERSION_H
