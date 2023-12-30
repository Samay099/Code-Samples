#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
     UINT iMask = 0XFFFFFFBF;
     UINT iResult = 0;

     iResult = iNo & iMask;
     
     return iResult;
}

int main()
{
     UINT iValue = 0;
     UINT iRet = 0;
     UINT iBit = 0;

     cout<<"Enter Number :"<<"\n";
     cin>>iValue;

     iRet = OffBit(iValue,iBit);

     cout<<"Result is :"<<iRet<<"\n";

     return 0;
}
