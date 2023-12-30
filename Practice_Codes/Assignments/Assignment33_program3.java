/*Write a Hava program which accept string from user
and return difference between frequency of small characters
and frequency of capital characters  */

import java.util.*;

class Assignment33_program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : \n");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountDiff(str);

        System.out.println("Frequency is : "+iRet);
    }
}

class StringX
{
    public int CountSmall(String strx)
    {
        char Arr[] = strx.toCharArray();
        int iCount1 = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount1++;
            }
        }

        return iCount1;
    }

    public int CountCapital(String strx)
    {
        char Arr[] = strx.toCharArray();
        int iCount2 = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount2++;
            }
        }

        return iCount2;
    }

    public int CountDiff(String strx)
    {
        int iFreqSmall = CountSmall(strx);
        int iFreqCapital = CountCapital(strx);

        int iDiff = iFreqSmall - iFreqCapital;

        return iDiff;
    }
}

