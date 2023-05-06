import java.io.*;

class CreateFile
{
    public static void main(String Arg[]) throws Exception
    {
        File fobj = new File("Infosystems.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File successfully created");
        }
        else 
        {
            System.out.println("Unable to create the file");
        }    
    }
}