#include<stdio.h>
int reverseNumber(int iNum)
{
	int iDigit = 0;
	int iRev = 0;
	while(iNum>0)
	{
		iDigit = iNum%10;
		iRev = iRev*10+iDigit;
		iNum = iNum/10;
	}
	return iRev;
}
int main()
{
	int iNum = 0;
	int iRet = 0;
	printf("Enter number:\n");
	scanf("%d", &iNum);
	iRet = reverseNumber(iNum);
	printf(" Reverse Number is = %d", iRet);
	return 0;
}