#include<stdio.h>
#include<stdbool.h>

bool stricmpX(char *str1, char *str2)
{
	while ((*str1 != '\0') && (*str2 != '\0'))
	{
		if(*str1 != *str2)
		{
			if((*str1 >= 'a') && (*str2 <= 'z'))	// First Letter is small
			{
				if(*str1 != (*str2 - 32))
				{
					break;
				}
			}
			else if((*str1 >= 'A') && (*str2 <= 'Z')) // // First Letter is capital
			{
				if(*str1 != (*str2 + 32))
				{
					break;
				}
			}
			else
			{
				break;
			}
		}

		str1++;
		str2++;

	}

	if((*str1 == '\0') && (*str2 == '\0'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[20];
	char Brr[20];
	bool bRet = false;

	printf("Enter first string : \n");
	scanf("%[^'\n']s", Arr);

	printf("Enter second string : \n");
	scanf(" %[^'\n']s", Brr);

	bRet = stricmpX(Arr,Brr);	//strcmpX(100,200)

	if(bRet == true)
	{
		printf("Both the are identical\n");
	}
	else
	{
		printf("Both the are different\n");
	}

	return 0;
}