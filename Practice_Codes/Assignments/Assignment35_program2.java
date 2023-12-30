/*Write a Java program which accept number froma user and 
return the count of odd digits*/

import java.util.*;

class Assignment35_program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a Number: ");
        int iNum = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountOdd(iNum);

        System.out.println("Number of Odd digits : "+iRet);
    }
}

class Digits
{
    public int CountOdd(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while( iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) != 0)
            {
                iCount++;
            } 
            iNo = iNo / 10;
        }
        return iCount;
    }
}


