// Input : 7
// Output :A    A   A   A   A   A   A
// Input : 3
// Output : *   *   *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("A \t");
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency of Symbol : \n");
    scanf("%d", &iFrequency);

    Display(iFrequency);

    return 0;
}                             