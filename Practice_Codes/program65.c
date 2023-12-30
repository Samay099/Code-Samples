// Number is pallindrom or not

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrom(int iNo)
{

     int iDigit = 0;
     int iReverse = 0;
     int iTemp = iNo; 

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     while( iNo != 0)
     {
          iDigit = iNo % 10;
          iReverse = (iReverse * 10) + iDigit;
          iNo = iNo / 10;
     }

     if(iReverse == iTemp)
     {
          return true;
     }
     else
     {
          return false;
     }


}

int main ()
{
     int iVaule = 0;
     bool bRet = 0;

     printf("Enter number : \n");
     scanf("%d", &iVaule);

     bRet = CheckPallindrom(iVaule);
     
     if(bRet == true)
     {
          printf("Number is a Pallindrom number");
     }
     else
     {
          printf("Number is not a Pallindrom number");
     }

    
     return 0;
}