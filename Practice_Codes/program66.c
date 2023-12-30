
#include<stdio.h>


float DigitsAverage(int iNo)
{
     int iDigit = 0;
     int iSum = 0;
     int iCnt = 0;

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     while(iNo != 0)
     {
          iDigit = iNo % 10;

          iSum = iSum + iDigit;
          iCnt++;

          iNo = iNo/10;        
     }

     return (float)((float)iSum/(float)iCnt);

}

int main ()
{
     int iVaule = 0.0f;
     float fRet = 0.0f;

     printf("Enter number : \n");
     scanf("%d", &iVaule);

     fRet = DigitsAverage(iVaule);

     printf("Average of digits is : %f \n", fRet);
     
     return 0;
}