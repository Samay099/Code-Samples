#include<stdio.h>
#include<stdbool.h>

int CountDigitFrequency(int iNo)
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
        
        if(iDigit == 8)
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

    iRet = CountDigitFrequency(iVaule);
    
    printf("Frequency of 8 is : %d", iRet);

    return 0;
}