#include<stdio.h>
#include<stdbool.h>

int getSumOfFactors(int iNum)
{
	int iSum = 0;
	int iCnt = 0;
	for(iCnt = 1; iCnt<=iNum/2; iCnt++)
	{
		if((iNum%iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

bool checkPerfect(int iNum)
{
	int iAns = 0;
	iAns = getSumOfFactors(iNum);
	if(iAns == iNum)
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
	printf("Enter number\n"); //4
	scanf("%d", &iNum);
	bRet = checkPerfect(iNum);
	if(bRet == true)
	{
		printf("%d is a Perfect Number\n", iNum);
	}
	else
	{
		printf("%d is not a Perfect Number\n", iNum);
	}
	return 0;
}