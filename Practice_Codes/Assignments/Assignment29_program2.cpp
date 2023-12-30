#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iTemp1 = iNo1;
    UINT iTemp2 = iNo2;
    int iDigit1 = 0, iDigit2 = 0;
    int iCnt = 0;

    while((iTemp1 != 0) || (iTemp2 != 0))
    {
        iDigit1 = iTemp1 % 2;
        iDigit2 = iTemp2 % 2;

        iCnt++;

        if((iDigit1 == 1) && (iDigit2 == 1))
        {
            cout<<iCnt<<"\t";
        }

        iTemp1 = iTemp1 / 2;
        iTemp2 = iTemp2 / 2;
    }
    
    
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;
   
    cout<<"Enter First Number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter Second Number : "<<"\n";
    cin>>iValue2;

    CommonBits(iValue1, iValue2);

    return 0;
}


/*

    0000    0000    0000    0000    0000    0001    0000    0000
    0       0       0       0       0       1       0       0    

    0000    0000    0000    0000    0000    1000    0000    0000
    0       0       0       0       0       8       0       0    

*/