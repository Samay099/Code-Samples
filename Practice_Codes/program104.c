// Input : 7
// Output :A    A   A   A   A   A   A
// Input : 3
// Output : *   *   *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo ; iCnt++, ch++)
    {
        printf("%c\t", ch);
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