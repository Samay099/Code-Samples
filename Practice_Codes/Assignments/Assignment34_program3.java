/*Write a Java program which accept N numbers from user and
Display all such elements which are even and divisible by 5 */

import java.util.*;

class Assignment34_program3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        
        mobj.Accept();
        mobj.Display();

        mobj.DisplayDivisible();
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

    public void DisplayDivisible()
    {
        System.out.println("Numbers which are Even and Divisible by 5 are : ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] % 2) == 0) && ((Arr[iCnt] % 5) == 0))
            {
                System.out.print(Arr[iCnt]+"\t");
            }
        }
    }
}

