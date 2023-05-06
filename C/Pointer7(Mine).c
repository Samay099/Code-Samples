#include<stdio.h>

int Addition(int No1, int No2)  //1000
{
    int Ans = 0;

    Ans = No1 + No2;

    return Ans;
}

int main()
{   
    int Value1 = 10, Value2 = 11;
    int Ret = 0;

    // Ret = Addition(Value1, Value2);

    int(*ptr)(int , int);

    ptr = Addition;

    Ret = ptr(Value1,Value2);

    printf("%d\n",Ret); //21
    
    return 0;
}