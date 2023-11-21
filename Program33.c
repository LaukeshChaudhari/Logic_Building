#include <stdio.h>
#include <stdbool.h>
bool checkPrime(int iNum)
{
	int iCnt = 0;
	bool bIsPrime = true;
	for(iCnt = 2; iCnt <= iNum/2; iCnt++)
	{
		if((iNum%iCnt) == 0)
		{
			bIsPrime = false;
			break;
		}
	}
	return bIsPrime;
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
		printf("%d is prime number", iNum);
	}
	else
	{
		printf("%d is not prime number", iNum);
	}
	return 0;
}