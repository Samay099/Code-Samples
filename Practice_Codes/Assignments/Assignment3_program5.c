#include<stdio.h>

int SumFact(int iNo1)
{
    int iCnt = 0;
    int iSumFact = 0;

    if(iNo1 < 0)         
    {
        iNo1 = -iNo1;
    }

    for(iCnt = 1; iCnt <= (iNo1/2); iCnt++)
    {
        if((iNo1 % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt; 
        }
    }
    
    return iSumFact;
}


int SumNonFact(int iNo2)
{
    int iCnt = 0;
    int iSumNonFact = 0;
     
    if(iNo2 < 0)         
    {
        iNo2 = -iNo2;
    }

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        if((iNo2 % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt; 
        }
    }

    return iSumNonFact;
}

int FactDiff(int iNo)
{
    int iFact = 0;
    int iNonFact = 0;
    int iDiff = 0;

    iFact = SumFact(iNo);
    iNonFact = SumNonFact(iNo);

    iDiff = iFact - iNonFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d",iRet );

    return 0;
    
}