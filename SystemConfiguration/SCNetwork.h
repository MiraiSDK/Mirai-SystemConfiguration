//
//  SCNetwork.h
//  SystemConfiguration
//
//  Created by Chen Yonghui on 4/10/15.
//  Copyright (c) 2015 Shanghai TinyNetwork Inc. All rights reserved.
//

#ifndef _SCNETWORK_H
#define _SCNETWORK_H

#include <Availability.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <CoreFoundation/CoreFoundation.h>


enum {
    kSCNetworkFlagsTransientConnection	= 1<<0,
    kSCNetworkFlagsReachable		= 1<<1,
    kSCNetworkFlagsConnectionRequired	= 1<<2,
    kSCNetworkFlagsConnectionAutomatic	= 1<<3,
    kSCNetworkFlagsInterventionRequired	= 1<<4,
    kSCNetworkFlagsIsLocalAddress		= 1<<16,
    kSCNetworkFlagsIsDirect			= 1<<17,
};
typedef	uint32_t	SCNetworkConnectionFlags;

__BEGIN_DECLS



__END_DECLS

#endif /* _SCNETWORK_H */
