#include<stdio.h>

int main()
{
    int value = 3;
    int *p = &value;
    int *q = p;
    int ans = *p + *q;

    printf("%d\n", value);
    printf("%d\n", &value);
    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", ans);


    return 0;
}