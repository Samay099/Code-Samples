#include<stdio.h>
#include<stdbool.h>

int CountOddDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) != 0)
        {
            iCnt ++;
        }
        
        iNo = iNo/10;
    }
    return iCnt;
   
}

int main ()
{
    int iVaule = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iVaule);

    iRet = CountOddDigits(iVaule);
    
    printf("Frequency of Odd digits in %d is : %d",iVaule,iRet);

    return 0;
}