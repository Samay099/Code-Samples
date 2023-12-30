#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{   
    int iMult = 0;

    if((iNo1 == 0) && (iNo2 == 0))
    {
        iMult = iNo3;
    }
    else if((iNo2 == 0) && (iNo3 == 0))
    {
        iMult = iNo1;
    }
    else if((iNo3 == 0) && (iNo1 == 0))
    {
        iMult = iNo2;
    } 
    else if((iNo1 == 0))
    {
        iMult = iNo2 * iNo3;
    }
    else if((iNo2 == 0))
    {
        iMult = iNo1 * iNo3;
    }
    else if((iNo3 == 0))
    {
        iMult = iNo1 * iNo2;
    }    
    else if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        iMult = 0;
    }
    else
    {
        iMult = iNo1 * iNo2 * iNo3;
    }
    
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter Three Number  : \n");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is %d", iRet);

    
    return 0;
}