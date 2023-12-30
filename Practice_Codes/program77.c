#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int Arr[], int iLength)
{
     int iCnt = 0;

     for(iCnt = 0; iCnt < iLength; iCnt ++)
     {
          if((Arr[iCnt] % 2) != 0)
          {
               printf(" %d", Arr[iCnt]);
          }
     }

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

     OddDisplay(ptr, iSize);

     free(ptr);

     return 0;
}