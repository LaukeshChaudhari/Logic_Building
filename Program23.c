// WAP To accept no from user and check Whwther that number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool checkDivisible(int iValue)
{
	if((iValue%3) == 0 && (iValue%5) == 0) 
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
	bRet = checkDivisible(iNumber);
	if (bRet == true)
	{
		printf("%d is divisible by 3 & 5\n", iNumber);
	}
	else
	{
	printf("%d is not divisible by 3 & 5\n", iNumber);
	}
	return 0;
}