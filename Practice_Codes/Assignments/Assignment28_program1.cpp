#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

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
    int iBit = 0;
    bool bRet = 0; 

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the Bit you want to check : "<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue, iBit);

    if(bRet == true)
    {
        cout<<"Bit is ON"<<"\n";
    }
    else
    {
        cout<<"Bit is Check"<<"\n";
    }
    

    return 0;
}


/*

    0000    0000    0000    0000    0000    0000    0000    0000
    0       0       0       0       0       0       0       0    

*/