/*Write a Java program which accept number froma user and 
return difference between summation of even digits and 
summation of odd digits.*/

import java.util.*;

class Assignment35_program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a Number: ");
        int iNum = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountDiff(iNum);

        System.out.println("Difference is : "+iRet);
    }
}

class Digits
{
    public int CountDiff(int iNo)
    {
        int iSumEven = 0;
        int iSumOdd = 0;
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while( iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else if((iDigit % 2) != 0)
            {
                iSumOdd = iSumOdd + iDigit;
            } 
            iNo = iNo / 10;
        }

        int iDiff = iSumEven - iSumOdd;
        return iDiff;
    }
}


