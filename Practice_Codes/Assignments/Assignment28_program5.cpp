#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0XF000000F;
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

    iRet = ToggleNibble(iValue);
    cout<<"Result is :" <<iRet<<"\n";
    
    return 0;
}


/*

    0000    0000    0000    0000    0000    0000    0000    0000
    0       0       0       0       0       0       0       0    

*/