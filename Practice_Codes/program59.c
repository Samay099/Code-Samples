#include<stdio.h>
#include<stdbool.h>

int ChkDigit(int iNo , int iFind)
{
    int iDigit = 0;
    int iCnt = 0;

    if((iFind < 0) || (iFind > 9))
    {
        printf("Invalid Input \n");
        printf("Please enter digit in range 0 to 9");
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == iFind)
        { 
            iCnt++;
        }

        iNo = iNo/10;
    }
    return iCnt;
   
}

int main ()
{
    int iVaule1 = 0, iVaule2 = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iVaule1);

    printf("Enter a Digit (0 to 9) : \n");
    scanf("%d", &iVaule2);

    iRet = ChkDigit(iVaule1, iVaule2);

    printf("Frequency of %d is int %d: %d", iVaule2,iVaule1,iRet);
    

    return 0;
}