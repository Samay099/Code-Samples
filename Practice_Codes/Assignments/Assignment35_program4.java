/*Write a Java program which accept number froma user and 
return the multiplication of all the digits*/

import java.util.*;

class Assignment35_program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a Number: ");
        int iNum = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.Multiply(iNum);

        System.out.println("Multiplication of all Digits is : "+iRet);
    }
}

class Digits
{
    public int Multiply(int iNo)
    {
        int iMult = 1;
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while( iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }
}


