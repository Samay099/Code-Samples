/*Write a Java program which accept N numbers from user and accept
one another number as No, return index of first occurence of that No .*/

import java.util.*; 

class Assignment36_program2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);

        mobj.Accept();

        System.out.println("Enter the number you want to search : ");
        int iNo = sobj.nextInt();

        mobj.Display();

        int iRet = mobj.FirstOcc(iNo);

        if(iRet == -1)
        {
            System.out.println(iNo+" is not present");
        }
        else
        {
            System.out.println("First occurence of "+iNo+" is at index no "+ iRet);
        }

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

    public int FirstOcc(int iNum)
    {
        int iPos = -1;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                iPos = iCnt;
                break;
            }
        }
        return iPos;
    }
}

