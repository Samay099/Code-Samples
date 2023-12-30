#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X000001C0;
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
        cout<<"7th, 8th and 9th Bits are ON"<<"\n";
    }
    else
    {
        cout<<"7th, 8th and 9th Bits are OFF"<<"\n";
    }

    return 0;
}


/*

    0000    0000    0000    0000    0000    0001    1100    0000
    0       0       0       0       0       1       C       0    

*/