/*Write a Java program which accept N numbers from user and return difference
betweeen summation of even elements and summation of odd elements */

import java.util.*;

class Assignment34_program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.Difference();
        
        System.out.println("Difference is : "+iRet);
    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        System.out.println("Enter the elements : ");
        Scanner sobj = new Scanner(System.in);
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Emelents of Array are : ");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.print("\n");
    }

}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int Difference()
    {
        int iSumEven = 0;
        int iSumOdd = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iSumEven = iSumEven + Arr[iCnt];
            }
            else if((Arr[iCnt] % 2) != 0)
            {
                iSumOdd = iSumOdd + Arr[iCnt];
            }
        }

        int iDiff = iSumEven - iSumOdd;

        return iDiff;
    }
}

