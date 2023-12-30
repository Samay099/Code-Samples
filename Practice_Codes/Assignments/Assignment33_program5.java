/*Write a Hava program which accept string from user
and Display it in reverse order */

import java.util.*;

class Assignment33_program5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        obj.Reverse(str);

        
    }
}

class StringX
{
    public void Reverse(String strx)
    {   
        char Arr[] = strx.toCharArray();

        char cTemp = ' ';
        int iStart = 0;
        int iEnd = Arr.length-1;

        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }

        String ret = new String(Arr);
        System.out.println("Reverse string is : "+ret);
    }
}

