#include<stdio.h>

void Frequency(char *str)
{
	int iCapCnt = 0;
	int iSmallCnt = 0;

	while(*str != '\0')
	{
		if((*str >='a') && (*str <= 'z'))
		{
			iSmallCnt++;
		}
		else if((*str >='A') && (*str <= 'Z'))
		{
			iCapCnt++;
		}
		str++;
	}

	printf("Frequency of Capital letters is : %d\n", iCapCnt);
	printf("Frequency of Small letters is : %d\n", iSmallCnt);

}

int main()
{
	char Arr[20];
	char ch = '\0';
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);

	Frequency(Arr);

	return 0;
}

