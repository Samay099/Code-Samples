#include<stdio.h>

void DisplayDigits(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <='9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}