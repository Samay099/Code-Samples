#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 0;
    char ch = '\0';
    

    for(i = 1; i <= iRow; i++)
    {

        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            
            if((i % 2) == 0)
            {
                iCount++;
                printf("%d\t", iCount);
            }
            else 
            {
                printf("%c\t", ch);
            }
            
        }
        iCount = 0;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}