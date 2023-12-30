/*Write a Java program which accept N numbers from user and Range
Display all elements from that range .*/

import java.util.*; 

class Assignment36_program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();

        System.out.println("Enter the Range you want to search : ");
        System.out.print("Start : ");
        int iStart = sobj.nextInt();
        System.out.print("End : ");
        int iEnd = sobj.nextInt();

        mobj.DisplayRange(iStart, iEnd);


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

    public void DisplayRange(int iStart, int iEnd)
    {
        System.out.println("All elements from range "+iStart+" to "+iEnd+" are :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
            {
                System.out.print(Arr[iCnt]+"\t");
            }   
        }
    }

    
}

