#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;

    UINT iResult1 = 0, iResult2 = 0;

    if((iPos1 < 1) || (iPos1 > 32) || 
    (iPos2 < 1) || (iPos2 > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }
    
    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2) )
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
    UINT iBit1 = 0, iBit2 = 0;

    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the first bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit1;

    cout<<"Enter the second bit position (Range should be 1 to 32)"<<"\n";
    cin>>iBit2;

    bRet = CheckBit(iValue, iBit1, iBit2);
    if(bRet == true)
    {
        cout<<"TRUE"<<"\n";
    }
    else
    {
        cout<<"FALSE"<<"\n";
    }

    return 0;
}