#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.8.0/Targets/Android/build.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_111.jdk/Contents/Home"
##endif

./gradlew assembleDebug "$@"

##if !#(LIBRARY:Defined)
ln -sf app/build/outputs/apk/app-debug.apk mood_calendar.apk
##endif
