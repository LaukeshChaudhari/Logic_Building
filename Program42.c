#include<stdio.h>
int sumOfEvenDigits(int iNum)
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
		if((iDigit%2)==0)
		{
			iSum = iSum + iDigit;
		}
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
	iRet = sumOfEvenDigits(iNum);
	printf("Summation is = %d", iRet);
	return 0;
}