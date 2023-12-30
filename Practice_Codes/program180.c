#include<stdio.h>

void struprX(char *str)
{
	while(*str != '\0')
	{
		if((*str >='a') && (*str <= 'z'))
		{
			*str = *str - 32;
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

	struprX(Arr);

	printf("String after editing is : %s\n", Arr);

	return 0;
}

