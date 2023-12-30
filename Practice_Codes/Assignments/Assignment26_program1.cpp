#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00004000;
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
        cout<<"15th Bit is ON"<<"\n";
    }
    else
    {
        cout<<"15th Bit is OFF"<<"\n";
    }

    return 0;
}


/*

    0000    0000    0000    0000    0100    0000    0000    0000
    0       0       0       0       4       0       0       0    

*/