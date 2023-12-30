#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bTemp = 0;

    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bTemp = true;
        }
    }

    if(bTemp == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iSize = 0;
    bool bRet = false;
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

    bRet = Check(ptr, iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    
    free(ptr);

    return 0;
}