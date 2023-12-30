#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        while (ch != 'a')
        {
            printf("%c\t", ch);
            ch--;
        }
        printf("%c\t", ch);
            
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        while (ch != 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("%c\t", ch);
    }
    else
    {
        return;
    } 
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}