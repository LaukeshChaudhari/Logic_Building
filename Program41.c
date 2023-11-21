#include<stdio.h>
void displayEvenDigits(int iNum)
{
	int iDigit = 0;
	if (iNum < 0) 
	{
		iNum = -iNum;
	}
	while(iNum>0)
	{
		iDigit = iNum%10;
		if((iDigit%2)==0)
		{
			printf("%d", iDigit);
		}
		iNum = iNum/10;
	}
}
int main()
{
	int iNum = 0;
	printf("Enter number:\n");
	scanf("%d", &iNum);
	displayEvenDigits(iNum);
	return 0;
}