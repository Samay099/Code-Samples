#include<stdio.h>
#include<stdlib.h>

int main()
{
     int iSize = 0;      //To store size of array
     int *ptr = NULL;    // To store address of array

     int iCnt = 0;

     //Step1 : Accept the number of elements from user
     printf("Enter number of elements : \n");
     scanf("%d",&iSize);

     //Step2 : Allocate memory dynamically
     ptr = (int*)malloc(sizeof(int) * iSize );

     //STEP3 : Accept the values from user
     printf("Enter the elements : \n");
     
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
          scanf("%d",&ptr[iCnt]);
     }

     printf("Elements of array are : \n");
     
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
          printf("%d\n", ptr[iCnt]);
     }

     return 0;
}