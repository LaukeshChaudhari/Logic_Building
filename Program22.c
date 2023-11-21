// WAP To accept no from user and check Whwther that number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool checkEven(int iValue)
{
	if((iValue%2) == 0)
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
	int iNumber = 0;
	bool bRet = false;

	printf("Enter number:\n");
	scanf("%d", &iNumber);
	bRet = checkEven(iNumber);
	if (bRet == true)
	{
		printf("%d is a even number\n", iNumber);
	}
	else
	{
	printf("%d is a odd number\n", iNumber);
	}
	return 0;
}