//
//  SystemConfiguration.h
//  SystemConfiguration
//
//  Created by Chen Yonghui on 4/10/15.
//  Copyright (c) 2015 Shanghai TinyNetwork Inc. All rights reserved.
//

#ifndef _SYSTEMCONFIGURATION_H
#define _SYSTEMCONFIGURATION_H

#include <Availability.h>
#include <sys/cdefs.h>
#include <CoreFoundation/CoreFoundation.h>

enum {
    /*
     * Generic error codes
     */
    kSCStatusOK				= 0,	/* Success */
    kSCStatusFailed				= 1001,	/* Non-specific failure */
    kSCStatusInvalidArgument		= 1002,	/* Invalid argument */
    kSCStatusAccessError			= 1003,	/* Permission denied
                                             - must be root to obtain lock
                                             - could not create access/create preferences
                                             */
    kSCStatusNoKey				= 1004,	/* No such key */
    kSCStatusKeyExists			= 1005,	/* Key already defined */
    kSCStatusLocked				= 1006,	/* Lock already held */
    kSCStatusNeedLock			= 1007,	/* Lock required for this operation */
    /*
     * SCDynamicStore error codes
     */
    kSCStatusNoStoreSession			= 2001,	/* Configuration daemon session not active */
    kSCStatusNoStoreServer			= 2002,	/* Configuration daemon not (no longer) available */
    kSCStatusNotifierActive			= 2003,	/* Notifier is currently active */
    /*
     * SCPreferences error codes
     */
    kSCStatusNoPrefsSession			= 3001,	/* Preference session not active */
    kSCStatusPrefsBusy			= 3002,	/* Preferences update currently in progress */
    kSCStatusNoConfigFile			= 3003,	/* Configuration file not found */
    kSCStatusNoLink				= 3004,	/* No such link */
    kSCStatusStale				= 3005,	/* Write attempted on stale version of object */
    kSCStatusMaxLink			= 3006,	/* Maximum link count exceeded */
    /*
     * SCNetwork error codes
     */
    kSCStatusReachabilityUnknown		= 4001,	/* Network reachability cannot be determined */
    /*
     * SCNetworkConnection error codes
     */
    kSCStatusConnectionNoService		= 5001,	/* Network service for connection not available
                                                 __OSX_AVAILABLE_STARTING(__MAC_10_6,__IPHONE_2_0)
                                                 */
    kSCStatusConnectionIgnore               = 5002, /* Network connection information not available at this time
                                                     __OSX_AVAILABLE_STARTING(__MAC_10_9,__IPHONE_6_0)
                                                     */
};


/* SCDynamicStore APIs */
#include <SystemConfiguration/SCDynamicStore.h>
#include <SystemConfiguration/SCDynamicStoreKey.h>
#include <SystemConfiguration/SCDynamicStoreCopySpecific.h>

/* SCPreferences APIs */
#include <SystemConfiguration/SCPreferences.h>
#include <SystemConfiguration/SCPreferencesPath.h>
#include <SystemConfiguration/SCPreferencesSetSpecific.h>

/* Schema Definitions (for SCDynamicStore and SCPreferences) */
#include <SystemConfiguration/SCSchemaDefinitions.h>

/* SCNetworkConfiguration APIs */
#include <SystemConfiguration/SCNetworkConfiguration.h>

/* SCNetworkReachability and SCNetworkConnection APIs */
#include <SystemConfiguration/SCNetwork.h>
#include <SystemConfiguration/SCNetworkReachability.h>
#include <SystemConfiguration/SCNetworkConnection.h>

/*!
	@const kCFErrorDomainSystemConfiguration
	@discussion CFError domain associated with errors reported by
 the SystemConfiguration.framework.
 */
extern const CFStringRef	kCFErrorDomainSystemConfiguration;

__BEGIN_DECLS

/*!
	@function SCCopyLastError
	@discussion Returns the most recent status or error code generated
 as the result of calling a System Configuration framework API.
	@result Returns the last error encountered.
 */
CFErrorRef	SCCopyLastError		(void);

/*!
	@function SCError
	@discussion Returns the most recent status or error code generated
 as the result of calling a System Configuration framework API.
	@result Returns the last error encountered.
 */
int		SCError			(void);

/*!
	@function SCErrorString
	@discussion Returns a pointer to the message string
 associated with the specified status or error.
	@param status The SCDynamicStoreStatus to be returned.
	@result Returns a pointer to the error message string.
 */
const char *	SCErrorString		(int	status);

__END_DECLS

#endif /* _SYSTEMCONFIGURATION_H */


