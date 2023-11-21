#include <stdio.h>
#include <stdbool.h>
bool checkPrime(int iNum)
{
	int iCnt = 0;
	int iFactCount = 0;
	for(iCnt = 2; iCnt <= iNum/2; iCnt++)
	{
		if((iNum%iCnt) == 0)
		{
			iFactCount++;
		}
	}
	if(iFactCount == 0)
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
	int iNum = 0;
	bool bRet = false;
	printf("Enter Number:\n");
	scanf("%d", &iNum);
	bRet = checkPrime(iNum);
	if(bRet == true)
	{
		printf("%d is a prime number", iNum);
	}
	else
	{
		printf("%d is not a prime number", iNum);
	}
	return 0;
}