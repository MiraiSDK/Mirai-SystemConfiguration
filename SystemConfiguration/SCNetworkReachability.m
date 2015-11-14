//
//  SCNetworkReachability.m
//  SystemConfiguration
//
//  Created by Chen Yonghui on 4/10/15.
//  Copyright (c) 2015 Shanghai TinyNetwork Inc. All rights reserved.
//

#import "SCNetworkReachability.h"

SCNetworkReachabilityRef
SCNetworkReachabilityCreateWithAddress		(
                                             CFAllocatorRef			allocator,
                                             const struct sockaddr		*address
                                             )
{
    return NULL;
}

SCNetworkReachabilityRef
SCNetworkReachabilityCreateWithAddressPair	(
                                             CFAllocatorRef			allocator,
                                             const struct sockaddr		*localAddress,
                                             const struct sockaddr		*remoteAddress
                                             )
{
    return NULL;
}

SCNetworkReachabilityRef
SCNetworkReachabilityCreateWithName		(
                                         CFAllocatorRef			allocator,
                                         const char			*nodename
                                         )
{
    return NULL;
}

Boolean
SCNetworkReachabilityGetFlags			(
                                         SCNetworkReachabilityRef	target,
                                         SCNetworkReachabilityFlags	*flags
                                         )
{
    return false;
}

Boolean
SCNetworkReachabilitySetCallback		(
                                         SCNetworkReachabilityRef	target,
                                         SCNetworkReachabilityCallBack	callout,
                                         SCNetworkReachabilityContext	*context
                                         )
{
    return false;
}

Boolean
SCNetworkReachabilityScheduleWithRunLoop	(
                                             SCNetworkReachabilityRef	target,
                                             CFRunLoopRef			runLoop,
                                             CFStringRef			runLoopMode
                                             )
{
    return false;
}

Boolean
SCNetworkReachabilityUnscheduleFromRunLoop	(
                                             SCNetworkReachabilityRef	target,
                                             CFRunLoopRef			runLoop,
                                             CFStringRef			runLoopMode
                                             )
{
    return false;
}

Boolean
SCNetworkReachabilitySetDispatchQueue		(
                                             SCNetworkReachabilityRef	target,
                                             dispatch_queue_t		queue
                                             )
{
    return false;
}

