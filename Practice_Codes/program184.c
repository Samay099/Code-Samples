#include<stdio.h>

void strcpysamallX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src;
			dest++;
		}
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

	strcpysamallX(Arr, Brr);

	printf("String after copy is : %s\n", Brr);

	return 0;
}

