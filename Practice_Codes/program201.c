#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrom(char *str)
{
	char *start = NULL;
	char *end = NULL;
	bool bFlag = true;

	start = str;
	end = str;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while(start < end)
	{
		if(*start != *end)
		{
			bFlag = false;
			break;
		}
		start++;
		end--;
	}

	return bFlag;
}

int main()
{
	char Arr[20];
	bool bRet = false;

	printf("Enter string : \n");
	scanf("%[^'\n']s", Arr);

	bRet = CheckPallindrom(Arr);

	if(bRet = true)
	{
		printf("String is pallindrom\n");
	}
	else
	{
		printf("String is not pallindrom\n");
	}

	return 0;
}