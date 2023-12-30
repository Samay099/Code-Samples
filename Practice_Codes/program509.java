import java.util.*;
import java.io.*;

class program509
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder");
        String FolderName = sobj.nextLine();

        try
        {
            File fobj = new File(FolderName);

            boolean bRet = fobj.isDirectory();
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                
                System.out.println("Number of files in that directory are : "+list.length);
            }
            else
            {
                System.out.println("It's not a directory");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("Exception occured : "+iobj);
        }
    }
};
