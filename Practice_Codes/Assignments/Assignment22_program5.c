#include<stdio.h>

void Reverse(char *str)
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

    Reverse(Arr);

    printf("%s\n", Arr);

    return 0;
}