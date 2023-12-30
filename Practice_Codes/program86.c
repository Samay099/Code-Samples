#include<stdio.h>
#include<stdlib.h>

void MaximumMinimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    
    printf("Largenst element is : %d\n", iMax);
    printf("Smallest element is : %d\n", iMin);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    
    printf("Enter the elements \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of the array are :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d \t", ptr[iCnt]);
    }
    
    printf("\n");

    MaximumMinimum(ptr, iSize);

    free(ptr);

    return 0;
}