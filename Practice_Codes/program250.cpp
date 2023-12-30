#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{    
     return (iNo & 0XFFFFFFBF);
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
