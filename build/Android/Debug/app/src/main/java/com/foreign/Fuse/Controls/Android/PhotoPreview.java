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

public class PhotoPreview
{
    static void debug_log(Object message)
    {
        android.util.Log.d("mood_calendar", (message==null ? "null" : message.toString()));
    }

    public static Object NewImageView317()
    {
        android.widget.ImageView imageView = new android.widget.ImageView(com.apps.mood_calendar.mood_calendar.GetRootActivity());
        imageView.setCropToPadding(true);
        imageView.setScaleType(android.widget.ImageView.ScaleType.CENTER_INSIDE);
        return imageView;
    }
    
    public static void SetCenterCrop318(final Object imageView)
    {
        ((android.widget.ImageView)imageView).setScaleType(android.widget.ImageView.ScaleType.CENTER_CROP);
    }
    
    public static void SetCenterInside319(final Object imageView)
    {
        ((android.widget.ImageView)imageView).setScaleType(android.widget.ImageView.ScaleType.CENTER_INSIDE);
    }
    
    public static void SetImageBitmap320(final Object imageView,final Object bitmap)
    {
        ((android.widget.ImageView)imageView).setImageBitmap((android.graphics.Bitmap)bitmap);
    }
    
}
