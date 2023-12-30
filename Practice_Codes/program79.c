#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iLength)
{
     int iCnt = 0;
     int iCounter = 0;

     for(iCnt = 0; iCnt < iLength; iCnt ++)
     {
          if((Arr[iCnt] % 2) == 0)
          {
               iCounter++;
          }
     }

     return iCounter;

}  

int main()
{
     int iSize = 0;      
     int *ptr = NULL;    
     int iRet = 0;

     int iCnt = 0;

     printf("Enter number of elements : \n");
     scanf("%d",&iSize);

     ptr = (int*)malloc(sizeof(int) * iSize );

     printf("Enter the elements : \n");
     
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
          scanf("%d",&ptr[iCnt]);
     }

     iRet = EvenCount(ptr, iSize);

     printf("Number of even numbers are %d", iRet);

     free(ptr);

     return 0;
}