#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    int iBit = 0;
    UINT iRet = 0; 

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the Bit you want to turn Off : "<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue, iBit);
    cout<<"Result is :" <<iRet<<"\n";
    
    return 0;
}


/*

    0000    0000    0000    0000    0000    0000    0000    0000
    0       0       0       0       0       0       0       0    

*/