#include<stdio.h>

int DisplayDigits(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = DisplayDigits(Arr);

    printf("Number of White Spaces : %d", iRet);

    return 0;
}