#include<stdio.h>

void strtoggleX(char *src, char *dest)
{
	int Gap = 'a' - 'A'; 

	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + Gap;
			
		}
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src - Gap;
		}
		else
		{
			*dest = *src;
		}
		dest++;
		src++;
		
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

	strtoggleX(Arr, Brr);

	printf("String after copy is : %s\n", Brr);

	return 0;
}

