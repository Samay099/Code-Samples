#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("ASCII Table\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\n",iCnt, iCnt);
        printf("%x\t%d\n",iCnt, iCnt);
        printf("%o\t%d\n",iCnt, iCnt);
        printf("\n");
    }
}

int main()
{

    DisplayASCII();

    return 0;
}