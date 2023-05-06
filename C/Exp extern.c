#include<stdio.h>

int Multiplication(int a, int b, int c)
{
    int result = 0;

    result = a * b * c ;

    printf("Enter 3 numbers\n");

    scanf("%d" , &a);

    scanf("%d" , &b);

    scanf("%d" , &c);

    return result;
}
