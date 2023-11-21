#include<stdio.h>
int countDigits(int iNum)
{
	int iDigit = 0;
	int iCnt = 0;
	while(iNum>0)
	{
		iDigit = iNum%10;
		iCnt++;
		iNum = iNum/10;
	}
	return iCnt;
}
int main()
{
	int iNum = 0;
	int iRet = 0;
	printf("Enter number:\n");
	scanf("%d", &iNum);
	iRet = countDigits(iNum);
	printf("The number of digits = %d", iRet);
	return 0;
}