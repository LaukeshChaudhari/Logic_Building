#include<stdio.h>

int calculatePower(int iValue1, int iValue2)
{
	int iCnt = 0;
	int iMult = 1;
	for(iCnt = 1; iCnt <= iValue2; iCnt++)
	{
		iMult = iMult*iValue1;
	}
	return iMult;
}
int main()
{
	int iFirstNum = 0;
	int iSecNum = 0;
	int iRet = 0;

	printf("Enter first number:\n");
	scanf("%d", &iFirstNum);
	printf("Enter second number:\n");
	scanf("%d", &iSecNum);

	iRet = calculatePower(iFirstNum, iSecNum);
	printf("Power = %d", iRet);
	return 0;
}