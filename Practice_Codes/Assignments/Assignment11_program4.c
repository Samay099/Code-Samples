#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;
    int iCount = 0;
    int iTemp = 0;

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if((Arr[iCnt] > iNo1) && (Arr[iCnt] < iNo2))
        {
            printf("%d \t", Arr[iCnt]);
        }   
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    printf("Enter the starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter the end point : \n");
    scanf("%d", &iValue2);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unabel to allocate memory");
        return -1;
    }

    printf("Enter the elements \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Range(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}