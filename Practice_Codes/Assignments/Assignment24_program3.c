#include<stdio.h>

#define ERR_NOTFOUND -1

int FirstChar(char *str, char ch)
{
    int iCount = 1;

    while ((*str != '\0') && (*str != ch))
    {
        iCount++;
        str++;
    }

    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCount;
    }
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

    iRet = FirstChar(Arr, cValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("First Occurrence is at position %d", iRet);
    }
    
    return 0;
}