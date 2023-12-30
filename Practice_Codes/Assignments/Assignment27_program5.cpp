#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X0000000F;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0; 

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    iRet = ToggleBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}


/*

    0000    0000    0000    0000    0000    0000    0000    1111
    0       0       0       0       0       0       0       F    

*/