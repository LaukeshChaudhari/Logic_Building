// Addition of two no in C

#include<stdio.h>
int main()
{
	int iFirstNumber = 0;
	int iSecondNumber = 0;
	int iResult = 0;

	printf("Enter first number:\n"); //10
	scanf("%d", &iFirstNumber);

	printf("Enter second number:\n"); //20
	scanf("%d", &iSecondNumber);

	iResult = iFirstNumber + iSecondNumber;

	printf("Addition is:%d", iResult);
	return 0;
}