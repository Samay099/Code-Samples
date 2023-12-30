#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    
    return bFlag;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
    int *ptr = NULL;
    bool bRet = false;
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

    printf("Enter the element to be searched : \n");
    scanf("%d", &iValue);

    printf("Elements of the array are :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d \t", ptr[iCnt]);
    }
    
    printf("\n");

    bRet = Search(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present", iValue);
    }
    else
    {
        printf("%d is not present", iValue);
    }

    free(ptr);

    return 0;
}