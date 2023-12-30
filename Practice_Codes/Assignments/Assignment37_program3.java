/*Write a java program which accepts 2 string from user and
check whether contents of two are equal or not*/

import java.util.*;

class Assignment37_program3

{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter the Second string : ");
        String str2 = sobj.nextLine();

        System.out.println("Enter the Number of contents : ");
        int iNo = sobj.nextInt();

        StringX obj = new StringX();

        boolean bRet = obj.StrCmpX(str1, str2, iNo);

        if(bRet == false)
        {
            System.out.println("Contents of strings are not equal");
        }
        else
        {
            System.out.println("Contents of strings are equal");
        }

    }
}

class StringX
{
    public boolean StrCmpX(String src, String dest, int iNum)
    {
        boolean ret = false;

        if(iNum > dest.length())
        {
            iNum = dest.length();
        }

        for(int iCnt = 0; iCnt < iNum; iCnt++)
        {
            if((src.charAt(iCnt)) == (dest.charAt(iCnt)))
            {
                ret = true;
            }
            else
            {
                ret = false;
            }
        }
    
        return ret;
    }

}

