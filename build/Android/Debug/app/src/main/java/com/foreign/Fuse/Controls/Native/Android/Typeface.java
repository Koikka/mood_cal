package com.foreign.Fuse.Controls.Native.Android;

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

public class Typeface
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Kalenteri", (message==null ? "null" : message.toString()));
    }

    public static Object CreateFromBundleFile232(final String bundlePath)
    {
        android.content.res.AssetManager assetManager = (com.fuse.Activity.getRootActivity()).getAssets();
        android.graphics.Typeface typeface = android.graphics.Typeface.createFromAsset(assetManager, bundlePath);
        return typeface;
    }
    
    public static Object CreateFromFileImpl233(final String path)
    {
        return android.graphics.Typeface.createFromFile(path);
    }
    
    public static Object GetDefault234()
    {
        return android.graphics.Typeface.DEFAULT;
    }
    
}
