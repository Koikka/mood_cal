#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.8.0/Targets/Android/run.sh.
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
    echo "Uninstalling com.apps.mood_calendar"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.mood_calendar"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "mood_calendar.apk" \
    --package=com.apps.mood_calendar \
    --activity=mood_calendar \
    --sym-dir="app/src/main/.uno" \
    "$@"
