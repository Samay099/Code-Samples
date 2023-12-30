#include<stdio.h>

int Difference(char *str)
{
    int iCntCpt = 0;
    int iCntSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <='Z'))
        {
            iCntCpt++;
        }
        else if((*str >= 'a') && (*str <='z'))
        {
            iCntSmall++;
        } 
        str++;
    }

    return (iCntSmall - iCntCpt);
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}