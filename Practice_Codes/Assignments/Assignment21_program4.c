#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') 
    || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == true)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }
    return 0;
}