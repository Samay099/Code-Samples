#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv >= 'a') && (chDiv <= 'z'))
    {
        chDiv = chDiv - 32;
    }

    switch(chDiv)
    {
        case 'A':
            printf("Your exam is at 7AM\n");
            break;

        case 'B':
            printf("Your exam is at 8.30AM\n");
            break;
        
        case 'C':
            printf("Your exam is at 9.20AM\n");
            break;

        case 'D':
            printf("Your exam is at 10.30AM\n");
            break;

        default:
            printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);
    
    return 0;
}