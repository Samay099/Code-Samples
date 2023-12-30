/*Write a java program which accepts 2 string from user and concat
N characters of second string after first string. Value of N should
be accept from user.
If third parameter is greater that the size of second string then
concat whole string after first string*/

import java.util.*;

class Assignment37_program1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string : ");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.StrNCatX(str1,str2);

        System.out.println("Modified String is : "+sRet);

    }
}

class StringX
{
    public String StrNCatX(String src, String dest)
    {
        char Arr[20] = src.toCharArray();
        char Brr[20] = dest.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length+1;

        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Arr[iEnd] = Brr[iStart];
            iStart++;
            iEnd++;
        }

        String ret = new String(Arr);
    
        return ret;
    }

}

