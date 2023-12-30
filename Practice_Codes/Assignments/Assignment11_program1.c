#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    bool bTemp = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bTemp = true;        
        }   
    }

    return bTemp;
}

int main()
{
    int iValue = 0;
    int iSize = 0;
    bool bRet = false;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iSize);

    printf("enter the number to be searched : \n");
    scanf("%d", &iValue);

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


    bRet = Check(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("Number %d is present", iValue);
    }
    else
    {
        printf("Number %d is not present", iValue);
    }

    free(ptr);

    return 0;
}