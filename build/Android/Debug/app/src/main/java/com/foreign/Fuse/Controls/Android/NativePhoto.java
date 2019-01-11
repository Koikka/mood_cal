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
import com.fusetools.camera.ImageStorageTools;
import java.io.File;
import java.io.FileOutputStream;
import java.lang.Thread;
import java.lang.Runnable;
import java.io.InputStream;
import java.io.ByteArrayInputStream;
import android.media.ExifInterface;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.util.DisplayMetrics;

public class NativePhoto
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Kalenteri", (message==null ? "null" : message.toString()));
    }

    public static Object GetInputStream318(final Object byteArray)
    {
        return new java.io.ByteArrayInputStream((byte[])byteArray);
    }
    
    
    public static class UploadTexturePromise
    {
        public static Object DecodeJpegBytes309(final com.foreign.Uno.Action_String onReject,final Object byteArray)
        {
            try {
            	byte[] jpegBytes = (byte[])byteArray;
            	return android.graphics.BitmapFactory.decodeByteArray(jpegBytes, 0, jpegBytes.length);
            } catch(Exception e) {
            	onReject.run("Failed to decode jpeg byte array: " + e.getMessage());
            	return null;
            }
        }
        
        public static int GetHeight310(final Object bitmap)
        {
            return ((android.graphics.Bitmap)bitmap).getHeight();
        }
        
        public static int GetWidth311(final Object bitmap)
        {
            return ((android.graphics.Bitmap)bitmap).getWidth();
        }
        
        public static void Upload1312(final com.foreign.Uno.Action_String onReject,final Object bitmap)
        {
            try {
            	android.opengl.GLUtils.texImage2D(android.opengl.GLES20.GL_TEXTURE_2D, 0, (android.graphics.Bitmap)bitmap, 0);
            } catch (Exception e) {
            	onReject.run("Failed to upload texture: " + e.getMessage());
            }
        }
        
    }
    
    
    public static class PhotoHandlePromise
    {
        public static Object GetInputStream313(final Object byteArray)
        {
            return new java.io.ByteArrayInputStream((byte[])byteArray);
        }
        
        public static void Load314(final UnoObject _this, final Object byteArray,final com.uno.FloatArray matrix,final com.foreign.Uno.Action_Object onResolve,final com.foreign.Uno.Action_String onReject)
        {
            new Thread(
            	new Runnable() {
            		public void run() {
            			try {
            				byte[] array = (byte[])byteArray;
            				Bitmap bitmap = BitmapFactory.decodeByteArray(array, 0, array.length);
            				Matrix m = new Matrix();
            				m.setValues(matrix.copyArray());
            				bitmap = Bitmap.createBitmap(bitmap, 0, 0, bitmap.getWidth(), bitmap.getHeight(), m, true);
            				onResolve.run(bitmap);
            			} catch (Exception e) {
            				onReject.run(e.getMessage());
            			}
            		}
            	}
            ).start();
        }
        
    }
    
    
    public static class SavePromise
    {
        public static void Save315(final Object byteArray,final com.foreign.Uno.Action_String resolve,final com.foreign.Uno.Action_String reject)
        {
            new java.lang.Thread(
            	new java.lang.Runnable() {
            		public void run() {
            			try {
            				String filePath = ImageStorageTools.createFilePath("jpeg", true);
            				File picture = new File(filePath);
            				FileOutputStream fos = new FileOutputStream(picture);
            				fos.write((byte[])byteArray);
            				fos.close();
            				resolve.run(filePath);
            			} catch (Exception e) {
            				reject.run(e.getMessage());
            			}
            		}
            	}
            ).start();
        }
        
    }
    
    
    public static class SaveThumbnailPromise
    {
        public static void RunAsync316(final com.foreign.Uno.Action callback)
        {
            new java.lang.Thread(callback).start();
        }
        
        public static void SaveThumbnail1317(final Object byteArray,final int exifOrientation,final com.foreign.Uno.Action_String resolve,final com.foreign.Uno.Action_String reject,final boolean useHint,final float widthHint,final float heightHint)
        {
            Bitmap input = null;
            Bitmap output = null;
            try {
            	byte[] bytes = (byte[])byteArray;
            	input = BitmapFactory.decodeByteArray(bytes, 0, bytes.length);
            
            	DisplayMetrics displayMetrics = new DisplayMetrics();
            	fi.samk.mood_cal.Kalenteri
            		.GetRootActivity()
            		.getWindowManager()
            		.getDefaultDisplay()
            		.getMetrics(displayMetrics);
            
            	float width = (float)input.getWidth();
            	float height = (float)input.getHeight();
            
            	float targetWidth;
            	float targetheight;
            
            	if (useHint) {
            		targetWidth = Math.min(widthHint, width);
            		targetheight = Math.min(heightHint, height);
            	} else {
            		targetWidth = (float)displayMetrics.widthPixels / 2;
            		targetheight = (float)displayMetrics.heightPixels / 2;
            	}
            
            	float scale = Math.min(targetWidth / width, targetheight / height);
            
            	int scaledWidth = (int)Math.ceil(width * scale);
            	int scaledHeight = (int)Math.ceil(height * scale);
            
            	output = Bitmap.createScaledBitmap(input, scaledWidth, scaledHeight, true);
            
            	String filePath = ImageStorageTools.createFilePath("jpeg", true);
            	File picture = new File(filePath);
            	FileOutputStream fos = new FileOutputStream(picture);
            	output.compress(Bitmap.CompressFormat.JPEG, 100, fos);
            	fos.close();
            
            	// Meh..
            	ExifInterface exif = new ExifInterface(filePath);
            	exif.setAttribute(ExifInterface.TAG_ORIENTATION, Integer.toString(exifOrientation));
            	exif.saveAttributes();
            
            	resolve.run(filePath);
            } catch (Exception e) {
            	reject.run(e.getMessage());
            }
            
            if (input != null) {
            	input.recycle();
            }
            
            if (output != null && !output.isRecycled()) {
            	output.recycle();
            }
        }
        
    }
    
}
