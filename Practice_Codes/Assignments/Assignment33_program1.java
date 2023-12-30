/*Write a Hava program which accept string from user
and count number of capital characters */

import java.util.*;

class Assignment33_program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : \n");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountCapital(str);

        System.out.println("Number of Capital characters are : "+iRet);
    }
}

class StringX
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

