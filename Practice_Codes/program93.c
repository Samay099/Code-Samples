#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    for(iCnt = iLength-1; iCnt >=0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }
    
    return iCnt;
}

int main()
{
    int iSize = 0;
    int iValue = 0;
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

    printf("Enter the element to be searched : \n");
    scanf("%d", &iValue);

    printf("Elements of the array are :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d \t", ptr[iCnt]);
    }
    
    printf("\n");

    iRet = SearchLastOccurance(ptr, iSize, iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such elemntent");
    }
    else
    {
        printf(" %d occured at index  %d", iValue,iRet);
    }
    
    free(ptr);

    return 0;
}