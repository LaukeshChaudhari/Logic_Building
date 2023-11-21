#include<stdio.h>
#include<stdbool.h>
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

bool checkArmstrong(int iNum)
{
	int iDigit = 0;
	int iDigitCnt = 0;
	int iTemp = iNum;
	int iSum = 0;

	//Calculate number of digits
	while(iNum>0)
	{
		iDigit = iNum%10;
		iDigitCnt++;
		iNum = iNum/10;
	}

	iNum = iTemp; //reinitialize value of iNum to original value

	//Separte digits
	while(iNum>0)
	{
		iDigit = iNum%10;
		iSum	 = iSum + calculatePower(iDigit, iDigitCnt);
		iNum = iNum/10;
	}

	if(iSum == iTemp)
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
	printf("Enter number:\n");
	scanf("%d", &iNum);
	 bRet = checkArmstrong(iNum);
	 if(bRet == true)
	 {
	 	printf("%d is a Armstrong number", iNum);
	 }
	 else
	 {
	 	printf("%d is not a Armstrong number", iNum);
	 }
}