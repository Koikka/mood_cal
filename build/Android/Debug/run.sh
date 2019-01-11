#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Targets/Android/run.sh.
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
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "fi.samk.mood_cal"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "Kalenteri.apk" \
    --package=fi.samk.mood_cal \
    --activity=Kalenteri \
    --sym-dir="app/src/main/.uno" \
    "$@"
