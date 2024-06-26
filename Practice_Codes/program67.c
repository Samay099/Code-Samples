
#include<stdio.h>


int MinimumDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     while(iNo != 0)
     {
          iDigit = iNo % 10;
          if(iDigit < iMin)
          {
               iMin = iDigit;
          }
          iNo = iNo / 10;
     }
     return iMin;

}

int main ()
{
     int iVaule = 0.0f;
     int iRet = 0.0f;

     printf("Enter number : \n");
     scanf("%d", &iVaule);

     iRet = MinimumDigit(iVaule);

     printf("Smallest digit is %d \n", iRet);
     
     return 0;
}