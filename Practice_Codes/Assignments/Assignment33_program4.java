/*Write a Hava program which accept string from user
and check whether it contains vowels in it or not  */

import java.util.*;

class Assignment33_program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        boolean iRet = obj.CheckVowel(str);

        if(iRet == true)
        {
            System.out.println("String contains Vowels\n");
        }
        else
        {
            System.out.println("String does not contain Vowels\n");
        }

    }
}

class StringX
{
    public boolean CheckVowel(String strx)
    {
        char Arr[] = strx.toCharArray();
        boolean Chk = false;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') 
            || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u') || (Arr[iCnt] == 'A') 
            || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') 
            || (Arr[iCnt] == 'U'))
            {
                Chk = true;
                break;
            }
        }

        return Chk;
    }
}

