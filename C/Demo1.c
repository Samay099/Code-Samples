#include<stdio.h>

int main()
{
    int no = 11;
    int no2 = 21;

    int *p = &no;
    int *q = &no2;

    int ans = *p +*q;

    printf("%d",ans);
    return 0;
}