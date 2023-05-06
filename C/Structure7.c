#include<stdio.h>

struct Demo
{
    int i;
    float f;
    //struct Demo obj;    //Not Allowed
};

int main()
{
    struct Demo obj1;   //Allowed

    return 0;
}