#include<stdio.h>
#include<stdbool.h>

bool Difference(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') 
        || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20];
    bool bRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    bRet = Difference(Arr);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}