#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask1 = 0X00000100;
    UINT iMask2 = 0X00000800;
    UINT iResult1 = 0, iResult2;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2) )
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
        cout<<"9th OR 12th Bit is ON"<<"\n";
    }
    else
    {
        cout<<"9th OR 12th Bit is OFF"<<"\n";
    }
    

    return 0;
}


/*

    0000    0000    0000    0000    0000    0001    0000    0000
    0       0       0       0       0       1       0       0    

    0000    0000    0000    0000    0000    1000    0000    0000
    0       0       0       0       0       8       0       0    

*/