#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iLength)
{
     int iSum = 0;
     int iCnt = 0;

     for(iCnt = 0; iCnt < iLength; iCnt ++)
     {
          iSum = iSum + Arr[iCnt];
     }

     return iSum;
}  

int main()
{
     int iSize = 0;      
     int *ptr = NULL;    
     int iRet = 0;

     int iCnt = 0;

     printf("Enter number of elements : \n");
     scanf("%d",&iSize);

     ptr = (int*)malloc(sizeof(int) * iSize);

     printf("Enter the elements : \n");
     
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
          scanf("%d",&ptr[iCnt]);
     }

     iRet = Addition(ptr, iSize);

     printf("Additon is  %d: ", iRet);

     free(ptr);

     return 0;
}