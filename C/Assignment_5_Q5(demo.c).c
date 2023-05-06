#include<stdio.h>

extern int i;
extern int j;
extern arr[4];

void gun();

int main()
{
    printf("Value of i is %d\n", i);
    printf("Value of j is %d\n", j);

    j = 51;
    printf("Value of j is %d\n", j);
    printf("Value of array is %d\n", arr[0]);

    fun();
    gun();

    return 0;
}

int i = 21;

void gun()
{
    printf("Inside gun\n");
}