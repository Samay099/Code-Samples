#include<stdio.h>

#include "PPA.h"

int main()
{
    struct Demo obj;

    printf("Inside main\n");

    printf("Rate of intrest is %f\n",ROI);  // 10.7

    printf("Fees of Logic Building batch : %d\n",FEES);   //18200

    printf("Size of demo structure :%d\n",sizeof(obj)); // 8

    return 0;
}