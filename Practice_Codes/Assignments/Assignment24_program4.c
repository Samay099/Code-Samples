#include<stdio.h>
#define ERR_NOTFOUND -1

int LastChar(char *str, char ch)
{
    int iCount = 1;
    int iPos = ERR_NOTFOUND;

    while ((*str != '\0'))
    {
        if(*str == ch)
        {
            iPos = iCount;
        }
        str++;
        iCount++;
    }

    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character :\n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr, cValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("Last Occurrence is at position %d", iRet);
    }
    
    return 0;
}