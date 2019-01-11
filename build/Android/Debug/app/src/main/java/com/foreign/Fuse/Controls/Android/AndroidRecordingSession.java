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

// user defined imports
import com.fuse.controls.cameraview.RecordingSession;
import com.fuse.controls.cameraview.IStopRecordingSession;

public class AndroidRecordingSession
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Kalenteri", (message==null ? "null" : message.toString()));
    }

    public static void Stop1292(final Object session,final com.foreign.Uno.Action_String resolve,final com.foreign.Uno.Action_String reject)
    {
        ((RecordingSession)session).stop(new IStopRecordingSession() {
        	public void onSuccess(String outputFilePath) {
        		resolve.run(outputFilePath);
        	}
        	public void onException(String message) {
        		reject.run(message);
        	}
        });
    }
    
}
