// Take two numbers from user x & y and return x^y //

#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG; 

ULONG CalculateFactorial(int iNo)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        iResult = iResult * iCnt;
    }

    return iResult;

}

int main()
{
    int iValue = 0; 
    ULONG iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CalculateFactorial(iValue);

    printf ("Result is : %d\n", iRet);

    return 0;
}

