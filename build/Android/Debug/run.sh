#!/bin/sh
# This file was generated based on node_modules/fuse-sdk/node_modules/@fuse-open/uno/lib/build/UnoCore/1.12.3/Targets/Android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" .
    exit $?
    ;;
uninstall)
    echo "Uninstalling fi.samk.mood_cal"
    /Library/Frameworks/Mono.framework/Versions/Current/Commands/mono64 "/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/fuse-sdk/node_modules/@fuse-open/uno/release/uno.exe" adb uninstall "fi.samk.mood_cal"
    exit $?
    ;;
esac

/Library/Frameworks/Mono.framework/Versions/Current/Commands/mono64 "/Users/anttikoivisto/Documents/SAMK/FUSE/mood_calendar/node_modules/fuse-sdk/node_modules/@fuse-open/uno/release/uno.exe" launch-apk "Kalenteri.apk" \
    --package=fi.samk.mood_cal \
    --activity=Kalenteri \
    --sym-dir="app/src/main/.uno" \
    "$@"
