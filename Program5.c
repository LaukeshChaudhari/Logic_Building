// Addition of two no in C

#include<stdio.h>

int addition(int iValue1, int iValue2)
{
	return iValue1+iValue2;
}

int main()
{
	int iFirstNumber = 0;
	int iSecondNumber = 0;
	int iResult = 0;

	printf("Enter first number:\n"); 
	scanf("%d", &iFirstNumber);

	printf("Enter second number:\n"); 
	scanf("%d", &iSecondNumber);

	iResult = addition(iFirstNumber, iSecondNumber); 

	printf("Addition is:%d", iResult);
	return 0;
}