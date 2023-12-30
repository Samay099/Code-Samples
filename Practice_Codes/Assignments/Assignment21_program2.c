#include<stdio.h>

void Display(char ch)
{
    int Gap = 'a' - 'A';

    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - Gap;
        printf("%c",ch);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + Gap;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}