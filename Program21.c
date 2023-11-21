// WAP to print summation of entered no

#include<stdio.h>
int summation(int iValue)
{
	int iCnt = 0;
	int sum = 0;
	if(iValue<0) 
	{
		iValue = - iValue;
	}
	for(iCnt = 1;iCnt <= iValue;iCnt++)
	{
		sum = sum+iCnt;
	}
	return sum;
}

int main()
{
	int iNumber = 0;
	int iResult = 0;
	printf("Enter any number:\n");
	scanf("%d", &iNumber);
	iResult = summation(iNumber);
	printf("Summation = %d", iResult);
	return 0;
}