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

public class FlashModeExtensions
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Kalenteri", (message==null ? "null" : message.toString()));
    }

    public static boolean IsSupported1308(final String flashMode,final Object cameraHandle)
    {
        java.util.List<String> flashModes = ((android.hardware.Camera)cameraHandle).getParameters().getSupportedFlashModes();
        if (flashModes == null)
        	return false;
        
        for (String mode : flashModes) {
        	if (mode.equals(flashMode))
        		return true;
        }
        
        return false;
    }
    
}
