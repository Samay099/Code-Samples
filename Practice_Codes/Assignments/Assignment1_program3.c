#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d", iCnt);
    }

}

int main()
{
    Display();

    return 0;
}