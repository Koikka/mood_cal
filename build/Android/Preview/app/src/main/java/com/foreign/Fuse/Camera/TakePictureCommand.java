package com.foreign.Fuse.Camera;

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
import android.provider.MediaStore;
import com.fuse.Activity;
import com.fusetools.camera.Image;
import android.content.Intent;

public class TakePictureCommand
{
    static void debug_log(Object message)
    {
        android.util.Log.d("mood_calendar", (message==null ? "null" : message.toString()));
    }

    public static Object CreateImage420()
    {
        try {
        	return Image.create();
        } catch(Exception e) {
        	e.printStackTrace();
        	return null;
        }
    }
    
    public static Object CreateIntent421(final Object photo)
    {
        Image p = (Image)photo;
        try {
        	Intent intent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        	intent.putExtra(MediaStore.EXTRA_OUTPUT, p.getFileUri());
        	return intent;
        } catch (Exception e) {
        	e.printStackTrace();
        	return null;
        }
    }
    
}
