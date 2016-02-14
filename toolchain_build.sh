#!/bin/bash

checkError()
{
    if [ "${1}" -ne "0" ]; then
        echo "*** Error: ${2}"
        exit ${1}
    fi
}


if [ ! -f $MIRAI_SDK_PREFIX/lib/libSystemConfiguration.so ]; then
	pushd $MIRAI_PROJECT_ROOT_PATH/Mirai-SystemConfiguration
	xcodebuild -target SystemConfiguration -xcconfig xcconfig/Android-$ABI.xcconfig
	checkError $? "build SystemConfiguration failed"
	
	#clean up
	rm -r build
	popd
fi