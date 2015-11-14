//
//  SystemConfiguration.m
//  SystemConfiguration
//
//  Created by Chen Yonghui on 5/4/15.
//  Copyright (c) 2015 Shanghai TinyNetwork Inc. All rights reserved.
//

#import "SystemConfiguration.h"

const CFStringRef kCFErrorDomainSystemConfiguration = @"CFErrorDomainSystemConfiguration";

CFErrorRef SCCopyLastError(void)
{
    return NULL;
}

int	SCError(void)
{
    return 0;
}

const char * SCErrorString(int status)
{
    return NULL;
}