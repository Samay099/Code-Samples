#include<stdio.h>
#include<stdbool.h>

bool ChkEight(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 8)
        {
            bFlag = true;
            break;
        }

        iNo = iNo/10;
    }
    return bFlag;
   
}

int main ()
{
    int iVaule = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iVaule);

    bRet = ChkEight(iVaule);
    
    if(bRet == true)
    {
        printf("Yes number %d has 8 in it", iVaule);
    }
    else
    {
        printf("No number %d does not have 8 in it", iVaule);
    }

    return 0;
}