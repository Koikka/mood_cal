package com.foreign.Fuse.Controls.Native;

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

public class ViewHandle
{
    static void debug_log(Object message)
    {
        android.util.Log.d("mood_calendar", (message==null ? "null" : message.toString()));
    }

    public static void BringToFront244(final UnoObject _this)
    {
        android.view.View view = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        view.bringToFront();
    }
    
    public static void CopyState246(final UnoObject sourceHandle,final UnoObject destHandle)
    {
        android.view.View source = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(sourceHandle);
        android.view.View dest = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(destHandle);
        dest.setVisibility(source.getVisibility());
        dest.setEnabled(source.isEnabled());
        dest.setAlpha(source.getAlpha());
        dest.setBackgroundDrawable(source.getBackground());
        dest.setLayoutParams(source.getLayoutParams());
        dest.setPivotX(0);
        dest.setPivotY(0);
        dest.setScaleX(source.getScaleX());
        dest.setScaleY(source.getScaleY());
        dest.setRotation(source.getRotation());
        dest.setRotationX(source.getRotationX());
        dest.setRotationY(source.getRotationY());
    }
    
    public static String Format247(final UnoObject _this)
    {
        java.lang.Object handle = ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        return handle.toString();
    }
    
    public static int GetMeasuredHeight248(final Object handle)
    {
        return ((android.view.View)handle).getMeasuredHeight();
    }
    
    public static int GetMeasuredWidth249(final Object handle)
    {
        return ((android.view.View)handle).getMeasuredWidth();
    }
    
    public static int IndexOfChild250(final UnoObject _this, final UnoObject childHandle)
    {
        android.view.ViewGroup parent = (android.view.ViewGroup)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        android.view.View child = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(childHandle);
        return parent.indexOfChild(child);
    }
    
    public static void InsertChild251(final UnoObject _this, final UnoObject childHandle)
    {
        android.view.ViewGroup parent = (android.view.ViewGroup)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        android.view.View child = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(childHandle);
        parent.addView(child);
    }
    
    public static void InsertChild1252(final UnoObject _this, final UnoObject childHandle,final int index)
    {
        android.view.ViewGroup parent = (android.view.ViewGroup)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        android.view.View child = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(childHandle);
        parent.addView(child, index);
    }
    
    public static void InvalidateImpl253(final UnoObject _this)
    {
        android.view.View handle = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        handle.invalidate();
    }
    
    public static boolean IsViewGroup254(final UnoObject _this)
    {
        java.lang.Object handle = ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        return handle instanceof com.fuse.android.views.ViewGroup ||
        	handle instanceof com.fuse.android.views.HorizontalScrollView ||
        	handle instanceof com.fuse.android.views.VerticalScrollView;
    }
    
    public static void Measure1255(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY)
    {
        int wSpec = hasX ? android.view.View.MeasureSpec.makeMeasureSpec(w, android.view.View.MeasureSpec.EXACTLY) : 0;
        int hSpec = hasY ? android.view.View.MeasureSpec.makeMeasureSpec(h, android.view.View.MeasureSpec.EXACTLY) : 0;
        android.view.View view = (android.view.View)handle;
        view.measure(wSpec, hSpec);
    }
    
    public static void RemoveChild256(final UnoObject _this, final UnoObject childHandle)
    {
        android.view.ViewGroup parent = (android.view.ViewGroup)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        android.view.View child = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(childHandle);
        parent.removeView(child);
    }
    
    public static void ResetLayoutParams257(final UnoObject _this)
    {
        ((android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
    }
    
    public static void SetBackgroundColor258(final UnoObject _this, final int color)
    {
        android.view.View view = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        view.setBackgroundColor(color);
    }
    
    public static void SetClipToBounds259(final UnoObject _this, final boolean clipToBounds)
    {
        android.view.View view = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        if (view instanceof android.view.ViewGroup)
        {
        	android.view.ViewGroup viewGroup = (android.view.ViewGroup)view;
        	viewGroup.setClipChildren(clipToBounds);
        	viewGroup.setClipToPadding(clipToBounds);
        }
    }
    
    public static void SetEnabled260(final UnoObject _this, final boolean value)
    {
        ((android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).setEnabled(value);
    }
    
    public static void SetHitTestEnabled261(final UnoObject _this, final boolean enabled)
    {
        android.view.View view = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        if (view instanceof com.fuse.android.views.ViewGroup) {
        	com.fuse.android.views.ViewGroup viewgroup = (com.fuse.android.views.ViewGroup)view;
        	viewgroup.HitTestEnabled = enabled;
        }
    }
    
    public static void SetIsVisible262(final UnoObject _this, final boolean isVisible)
    {
        android.view.View handle = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        handle.setVisibility( (isVisible) ? android.view.View.VISIBLE : android.view.View.INVISIBLE );
    }
    
    public static void SetOpacity263(final UnoObject _this, final float value)
    {
        ((android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).setAlpha(value);
    }
    
    public static void UpdateTransform264(final UnoObject _this, final float scaleX,final float scaleY,final float rotation,final float rotationX,final float rotationY)
    {
        android.view.View view = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        view.setPivotX(0);
        view.setPivotY(0);
        view.setScaleX(scaleX);
        view.setScaleY(scaleY);
        view.setRotation(rotation);
        view.setRotationX(rotationX);
        view.setRotationY(rotationY);
    }
    
    public static void UpdateViewRectImpl265(final UnoObject _this, final int x,final int y,final int w,final int h)
    {
        android.view.View view = (android.view.View)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this);
        com.fuse.android.views.ViewGroup.UpdateChildRect(view, x, y, w, h);
    }
    
}
