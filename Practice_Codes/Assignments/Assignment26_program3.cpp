#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X08104040;
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
        cout<<"7th, 15th, 21st and 28th Bits are ON"<<"\n";
    }
    else
    {
        cout<<"7th, 15th, 21st and 28th Bits are OFF"<<"\n";
    }

    return 0;
}


/*

    0000    1000    0001    0000    0100    0000    0100    0000
    0       8       1       0       4       0       4       0    

*/