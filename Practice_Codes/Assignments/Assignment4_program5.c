#include<stdio.h>

float Percentage(float fNo1, float fNo2)
{
    if(fNo1 <= 0)
    {
        printf("Invalid Input\n");
        printf("Total Marks must be greater than 0 \n");

        return 0;
    }

    float fPntg = 0.0f;

    fPntg = (fNo2 / fNo1) * 100;

    return fPntg;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    float fRet = 0.0f;

    printf("Enter Total Marks  : \n");
    scanf("%d",&fValue1);

    printf("Enter Obtained Marks  : \n");
    scanf("%d",&fValue2);

    fRet = Percentage(fValue1, fValue2);
    printf("Percentage is %f %%", fRet);

    return 0;
}