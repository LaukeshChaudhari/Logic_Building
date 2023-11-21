#include<stdio.h>
int sumOfDigits(int iNum)
{
	int iDigit = 0;
	int iSum = 0;
	if (iNum < 0) 
	{
		iNum = -iNum;
	}
	while(iNum>0)
	{
		iDigit = iNum%10;
		iSum = iSum + iDigit;
		iNum = iNum/10;
	}
	return iSum;
}
int main()
{
	int iNum = 0;
	int iRet = 0;
	printf("Enter number:\n");
	scanf("%d", &iNum);
	iRet = sumOfDigits(iNum);
	printf("Summation = %d", iRet);
	return 0;
}