#include<stdio.h>
typedef unsigned long int ULONG;

ULONG calculatePower(int iValue1, int iValue2)
{
	register int iCnt = 0;
	auto ULONG iMult = 1;
	for(iCnt = 1; iCnt <= iValue2; iCnt++)
	{
		iMult = iMult*iValue1;
	}
	return iMult;
}
int main()
{
	auto int iFirstNum = 0;
	auto int iSecNum = 0;
	auto ULONG iRet = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);
	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iRet = calculatePower(iFirstNum, iSecNum);
	printf("Power = %ld", iRet);
	return 0;
}