#include<stdio.h>
#define ERR_NOTFOUND -1

void StrRevX(char *str)
{
    char *end = NULL;
    char cTemp = '\0';

    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(str < end)
    {
        cTemp = *str;
        *str = *end;
        *end = cTemp;

        str++;
        end--;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("%s\n",Arr);
    
    return 0;
}