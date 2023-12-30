#include<stdio.h>

void strtoggleX(char *str)
{
    int iCnt = 0;
    int Gap = 'a' - 'A';

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))
        {
            *str = *str - Gap;
        }
        else if((*str >= 'A') && (*str <='Z'))
        {
            *str = *str + Gap;
        } 
        str++;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Modified string is %s\n", Arr);

    return 0;
}