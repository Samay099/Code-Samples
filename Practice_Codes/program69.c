
#include<stdio.h>

int MaximumDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     while(iNo != 0)
     {
          iDigit = iNo % 10;
          if(iDigit > iMax)
          {
               iMax = iDigit;
          }
          if(iMax == 9)
          {
               break;
          }
          
          iNo = iNo / 10;
     }
     return iMax;

}

int main ()
{
     int iVaule = 0.0f;
     int iRet = 0.0f;

     printf("Enter number : \n");
     scanf("%d", &iVaule);

     iRet = MaximumDigit(iVaule);

     printf("Largest digit is %d \n", iRet);
     
     return 0;
}