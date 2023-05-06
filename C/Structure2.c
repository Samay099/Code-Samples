#include<stdio.h>

struct Demo
{
    int i;
    float f;
    double d;
    int j;
};obj1;

int main()
{
    struct Demo obj1;

    obj1.i = 11;
    obj1.f = 90.9;
    obj1.j = 21;

    printf("%d\n",obj1.i);  //11
  
    return 0;
}