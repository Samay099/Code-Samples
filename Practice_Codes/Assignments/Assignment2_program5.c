#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
   if((iNo % 2) == 0)
   {
     return true;
   }
   else
   {
     return false;
   }

}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
     printf("%d is an Even Number ", iValue);
    }
    else
    {
     printf("%d is an Odd Number ", iValue);
    }

    return 0;
}