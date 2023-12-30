#include<stdio.h>

void strncatX(char *src, char *dest, int iLength)
{
	while(*dest != '\0')
	{
		dest++;
	}

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;

		iLength --;

		if(iLength == 0)
		{
			break;
		}
	}
	
	*dest = '\0';

}

int main()
{
	int iNo = 0;
	char Arr[20];
	char Brr[20] = "Demo";

	char ch = '\0';
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);

	printf("Enter the number of letters that you want to concate\n");
	scanf("%d", &iNo);

	strncatX(Arr, Brr, iNo);

	printf("String after copy is : %s\n", Brr);

	return 0;
}

