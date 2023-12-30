#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00020010;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }


}

int main()
{
    UINT iValue = 0;
    bool bRet = 0; 

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"5th and 18th Bits are ON"<<"\n";
    }
    else
    {
        cout<<"5th and 18th Bits are OFF"<<"\n";
    }

    return 0;
}


/*

    0000    0000    0000    0010    0000    0000    0001    0000
    0       0       0       2       0       0       1       0    

*/