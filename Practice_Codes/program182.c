#include<stdio.h>

void strtoggleX(char *str)
{
	int Gap = 'a' - 'A';

	while(*str != '\0')
	{
		if((*str >='A') && (*str <= 'Z'))
		{
			*str = *str + Gap;
		}
		else if((*str >='a') && (*str <= 'z'))
		{
			*str = *str - Gap;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	char ch = '\0';
	int iRet = 0;

	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);

	strtoggleX(Arr);

	printf("String after editing is : %s\n", Arr);

	return 0;
}

