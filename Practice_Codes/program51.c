#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d \n ", iDigit);
        iNo = iNo/10;
    }
}

int main ()
{
    int iVaule = 0;

    printf("Enter number : \n");
    scanf("%d", &iVaule);

    Display(iVaule);

    return 0;
}