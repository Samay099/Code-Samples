#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iDigit = 0;
    int iCnt = 0;
    int iCount = 0;
    int iTemp = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
        iTemp = Arr[iCnt];

        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;

            if(iCount == 3)
            {
                printf("%d \t", iTemp);
            }
        }

        iCount = 0;
    }
}

int main()
{
    int iSize = 0;
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

    Digits(ptr, iSize);

    free(ptr);

    return 0;
}