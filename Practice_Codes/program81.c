#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[], int iLength)
{
     int iSum = 0;
     int iCnt = 0;
    
     for(iCnt = 0; iCnt < iLength; iCnt ++)
     {
          iSum = iSum + Arr[iCnt];
     }

     return (float)((float)iSum/ (float)iLength);
}  

int main()
{
     int iSize = 0;      
     int *ptr = NULL;    
     float fRet = 0.0f;

     int iCnt = 0;

     printf("Enter number of elements : \n");
     scanf("%d",&iSize);

     ptr = (int*)malloc(sizeof(int) * iSize );

     printf("Enter the elements : \n");
     
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
          scanf("%d",&ptr[iCnt]);
     }

     fRet = Average(ptr, iSize);

     printf("Average is  %f: ", fRet);

     free(ptr);

     return 0;
}