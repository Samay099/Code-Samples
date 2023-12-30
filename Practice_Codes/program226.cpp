#include<iostream>
using namespace std;

void DisplayBinaryResultis(int iNo1, int iNo2)
{
    int iResult = 0;

    iResult = iNo1 & iNo2;
    cout<<"Result of & is :"<<iResult<<"\n";

    iResult = iNo1 | iNo2;
    cout<<"Result of | is :"<<iResult<<"\n";

    iResult = iNo1 ^ iNo2;
    cout<<"Result of ^ is :"<<iResult<<"\n";
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter First Number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second Number :"<<"\n";
    cin>>iValue2;

    DisplayBinaryResultis(iValue1,iValue2);

    return 0;
}