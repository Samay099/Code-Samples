#include<stdio.h>
#include<stdlib.h>

int LastOccurance(char *str, char cValue)
{
	int iCnt = 1;
	int iPos = 0;

	while(*str != '\0')
	{
		if(*str == cValue)
		{
			iPos = iCnt;
		}
		str++;
		iCnt++;
	}
	return iPos;
}

int main()
{
	char Arr[20];
	char ch = '\0';
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);

	fflush(stdin);

	printf("Enter the character :\n");
	scanf("%c",&ch);

	iRet = LastOccurance(Arr, ch);

	printf("Last occurance of that character is at : %d\n", iRet);

	return 0;
}

