/*Write a Hava program which accept string from user
and count number of Small characters */

import java.util.*;

class Assignment33_program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : \n");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountSmall(str);

        System.out.println("Number of Small characters are : "+iRet);
    }
}

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

