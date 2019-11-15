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
        android.util.Log.d("Kalenteri", (message==null ? "null" : message.toString()));
    }

    public static Object NewImageView323()
    {
        android.widget.ImageView imageView = new android.widget.ImageView(com.fuse.Activity.getRootActivity());
        imageView.setCropToPadding(true);
        imageView.setScaleType(android.widget.ImageView.ScaleType.CENTER_INSIDE);
        return imageView;
    }
    
    public static void SetCenterCrop324(final Object imageView)
    {
        ((android.widget.ImageView)imageView).setScaleType(android.widget.ImageView.ScaleType.CENTER_CROP);
    }
    
    public static void SetCenterInside325(final Object imageView)
    {
        ((android.widget.ImageView)imageView).setScaleType(android.widget.ImageView.ScaleType.CENTER_INSIDE);
    }
    
    public static void SetImageBitmap326(final Object imageView,final Object bitmap)
    {
        ((android.widget.ImageView)imageView).setImageBitmap((android.graphics.Bitmap)bitmap);
    }
    
}
