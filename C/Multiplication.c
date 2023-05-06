#include<stdio.h>

int Multiplication(int a, int b, int c)
{
    int result = 0;

    result = a * b * c ;

    return result;
}

int main ()
{
    int No1 = 0;

    int No2 = 0;

    int No3 = 0;

    int X = 0;

    printf("Enter 3 numbers\n");

    scanf("%d" , &No1);

    scanf("%d" , &No2);

    scanf("%d" , &No3);

    X = Multiplication(No1, No2, No3);

    printf("%d\n",X);

    if(X % 2 == 0)
    {
        printf("X is divisible by 2\n");
    }
    else
    {
        printf("X is not divisible by 2\n");
    }

    return 0;
}