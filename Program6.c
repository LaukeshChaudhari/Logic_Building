#include<stdio.h>

/*********************************************************
 // Function Name: addition
 // Description: It is used to perfrom addition of two numbers
 // Input: Integer, Integer 
 // Output: Integer
 // Date: 29/08/2023
 //Author Name: Splendid Infosystems
 *********************************************************/

int addition(int iValue1, int iValue2)
{
	return iValue1+iValue2;
}

/*********************************************************
 // Function Name: main
 // Description: It is an entry point function
 // Input: NA
 // Output: NA
 // Date: 29/08/2023
 //Author Name: Splendid Infosystems
 *********************************************************/

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