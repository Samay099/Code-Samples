#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00000108;
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
    bool bRet = false;

    cout<<"Enter Number :"<<"\n";
    cin>>iValue;

   bRet = CheckBit(iValue);

   if(bRet == true)
   {
        cout<<"4th and 9th bits are ON"<<"\n";
   }
   else
   {
        cout<<"4th and 9th bits are OFF"<<"\n";
   }

    return 0;
}


/*

    0000    0000    0000    0000    0000    0000    0000    0000

    0000    0000    0000    0000    0000    0001    0000    1000

    0        0      0       0       0       1       0       8

    0X00000108
*/
