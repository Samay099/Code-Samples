#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("$");
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}