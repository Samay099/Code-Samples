#include<stdio.h>

void struprX(char *str)
{
    int iCnt = 0;
    int Gap = 'a' - 'A';

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))
        {
            *str = *str - Gap;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Modified string is %s\n", Arr);

    return 0;
}