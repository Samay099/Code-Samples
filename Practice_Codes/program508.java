import java.util.*;
import java.io.*;

class program508
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
                System.out.println("It's a drectory");
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
