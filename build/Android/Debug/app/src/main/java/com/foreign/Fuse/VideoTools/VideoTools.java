package com.foreign.Fuse.VideoTools;

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
import android.os.Environment;
import java.io.File;
import android.media.MediaScannerConnection;

public class VideoTools
{
    static void debug_log(Object message)
    {
        android.util.Log.d("mood_calendar", (message==null ? "null" : message.toString()));
    }

    
    public static class AndroidVideoTools
    {
        public static boolean SaveVideo418(final String outputFileURL)
        {
            String filename = "";
            File originalFile;
            File destinationFile;
            
            try {
            	originalFile = new File(outputFileURL);
            } catch (Exception e) {
            	return false;
            }
            
            String outPath = null;
            String state = Environment.getExternalStorageState();
            
            if(Environment.MEDIA_MOUNTED.equals(state))
            	outPath = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_MOVIES) + "/" + originalFile.getName();
            else
            	outPath = com.fuse.Activity.getRootActivity().getFilesDir().getAbsolutePath() + "/" + originalFile.getName();
            
            try {
            	destinationFile = new File(outPath);
            } catch (Exception e) {
            	return false;
            }
            
            boolean managed = originalFile.renameTo(destinationFile);
            
            if (managed)
            	MediaScannerConnection.scanFile(com.fuse.Activity.getRootActivity(), new String[] { outPath }, null, null);
            
            return managed;
        }
        
    }
    
}
