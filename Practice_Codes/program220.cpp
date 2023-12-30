#include<iostream>
using namespace std;

class Digit
{
	private:
		int iNo;

	public:
		Digit(int X)
		{
			iNo = X;
		}

};

int main()
{
	int iValue = 0;
	int iRet = 0;

	cout<<"Enter number : "<<"\n";
	cin>>iValue;

	Digit dobj(iValue);

	cout<<"Summation of digits : "<<iRet<<"\n";

	return 0;	
}
