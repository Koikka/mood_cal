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
import com.fuse.controls.cameraview.CameraImpl;
import com.fuse.controls.cameraview.IPictureCallback;
import com.fuse.controls.cameraview.RecordingSession;
import com.fuse.controls.cameraview.IStartRecordingSession;

public class Camera
{
    static void debug_log(Object message)
    {
        android.util.Log.d("mood_calendar", (message==null ? "null" : message.toString()));
    }

    public static Object Create290(final Object camera,final int cameraId,final int maxWidth,final int maxHeight)
    {
        CameraImpl view = new CameraImpl(com.apps.mood_calendar.mood_calendar.GetRootActivity(), (android.hardware.Camera)camera, cameraId, maxWidth, maxHeight);
        view.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return view;
    }
    
    public static void Dispose1291(final Object handle)
    {
        ((CameraImpl)handle).dispose();
    }
    
    public static void GetSupportedPictureSizes292(final UnoObject _this, final Object camera,final com.uno.IntArray output)
    {
        java.util.List<android.hardware.Camera.Size> sizes = ((android.hardware.Camera)camera).getParameters().getSupportedPictureSizes();
        for (int i = 0; i < sizes.size(); i++) {
        	output.set((i * 2) + 0, sizes.get(i).width);
        	output.set((i * 2) + 1, sizes.get(i).height);
        }
    }
    
    public static int GetSupportedPictureSizesCount293(final UnoObject _this, final Object camera)
    {
        return ((android.hardware.Camera)camera).getParameters().getSupportedPictureSizes().size();
    }
    
    public static void Release294(final Object handle)
    {
        ((android.hardware.Camera)handle).release();
    }
    
    public static void RestoreParameters295(final UnoObject _this, final String parameters)
    {
        ((CameraImpl)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).restoreParameters(parameters);
    }
    
    public static String SaveParameters296(final UnoObject _this)
    {
        return ((CameraImpl)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).saveParameters();
    }
    
    public static void SetFlashMode297(final UnoObject _this, final Object handle,final String flashMode)
    {
        ((CameraImpl)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).setFlashMode(flashMode);
    }
    
    public static void SetPictureSize298(final UnoObject _this, final int width,final int height)
    {
        ((CameraImpl)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).setPictureSize(width, height);
    }
    
    public static void StartRecording1299(final UnoObject _this, final com.foreign.Uno.Action_Object resolve,final com.foreign.Uno.Action_String reject)
    {
        ((CameraImpl)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).startRecording(new IStartRecordingSession() {
        	public void onSuccess(RecordingSession recordingSession) {
        		resolve.run(recordingSession);
        	}
        	public void onException(String message) {
        		reject.run(message);
        	}
        });
    }
    
    public static void TakePicture300(final UnoObject _this, final com.foreign.Uno.Action_Object resolve,final com.foreign.Uno.Action_String reject)
    {
        ((CameraImpl)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).takePicture(new IPictureCallback() {
        	public void onPictureTaken(byte[] data) {
        		resolve.run(data);
        	}
        	public void onError(Exception e) {
        		reject.run(e.getMessage());
        	}
        });
    }
    
    public static void UpdatePreviewStretchMode301(final UnoObject _this, final boolean shouldFill)
    {
        ((CameraImpl)ExternedBlockHost.callUno_Fuse_Controls_Native_ViewHandle_NativeHandleGet245(_this)).updateStretchMode(shouldFill);
    }
    
}
