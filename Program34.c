#include <stdio.h>
int countFactors(int iNum)
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
	return iFactCount;
}

int main()
{
	int iNum = 0;
	int iRet = 0;
	printf("Enter Number:\n");
	scanf("%d", &iNum);
	iRet = countFactors(iNum);
	printf("Factors count is = %d", iRet);
	return 0;
}