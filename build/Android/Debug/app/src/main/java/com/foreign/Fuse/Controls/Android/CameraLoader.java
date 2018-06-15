package com.foreign.Fuse.Controls.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class CameraLoader
{
    static void debug_log(Object message)
    {
        android.util.Log.d("mood_calendar", (message==null ? "null" : message.toString()));
    }

    public static void Load1303(final int cameraId,final com.foreign.Uno.Action_Object resolve,final com.foreign.Uno.Action_String reject)
    {
        try {
        	resolve.run(android.hardware.Camera.open(cameraId));
        } catch (final Exception e) {
        	reject.run(e.getMessage());
        }
    }
    
}
