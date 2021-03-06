/*
 * Copyright (C) 2008  Mateusz Kramarczyk <kramarczyk (at) gmail (dot) com>
 * Copyright (C) 2008  Tomasz Kijas <kijasek (at) gmail (dot) com>
 * Copyright (C) 2008  Tomir Kryza <tkryza (at) gmail (dot) com>
 * Copyright (C) 2008  Maciej Kluczny <kluczny (at) fr (dot) pl>
 * Copyright (C) 2008  AGH University of Science and Technology <www.agh.edu.pl>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __AGHRTPSESSION_H__INCLUDED__
#define __AGHRTPSESSION_H__INCLUDED__

#include <cc++/address.h>
#include <ccrtp/rtp.h>

using namespace std;
using namespace ost;

namespace agh {

class AghRtpSession : public SymmetricRTPSession {
public:
	~AghRtpSession() {}
	 
	AghRtpSession(const InetHostAddress &host);
	AghRtpSession(const InetHostAddress &host, unsigned short port);
	uint32 getLastTimestamp(const SyncSource *src=NULL) const;
};

} /* namespace agh */

#endif
