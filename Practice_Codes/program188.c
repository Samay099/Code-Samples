#include<stdio.h>

void strrevX(char *src, char *dest)
{
	int iLength = 0;

	while(*src != '\0')
	{
		src++;
		iLength++;
	}

	src--;

	for(; iLength != 0; iLength--)
	{
		*dest = *src;
		src--;
		dest++;
	}

	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];

	char ch = '\0';
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);

	strrevX(Arr, Brr);

	printf("String after copy is : %s\n", Brr);

	return 0;
}

