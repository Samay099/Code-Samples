#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
        
    }

    return iCount;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

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

    iRet = Frequency(ptr, iSize);

    printf("Frequency of 11 is %d",iRet);

    free(ptr);

    return 0;
}