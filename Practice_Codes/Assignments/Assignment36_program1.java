/*Write a Java program which accept N numbers from user and accept
one anotehr number as NO check whether NO is present or not.*/

import java.util.*; 

class Assignment36_program1
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

        boolean iRet = mobj.Check(iNo);

        if(iRet == true)
        {
            System.out.println("Number "+iNo+" is present");
        }
        else
        {
            System.out.println("Number "+iNo+" is not present");
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

    public boolean Check(int iNum)
    {
        boolean ret = false;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                ret = true;
                break;
            }
        }
        return ret;
    }
}

