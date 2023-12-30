#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0; 

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}


/*

    0000    0000    0000    0000    0000    0000    0100    0000
    0       0       0       0       0       0       4       0    

*/