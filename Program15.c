// WAP to print hello five times

#include<stdio.h>

void display(int iValue) //-4
{
	if(iValue<0) //-4<0
	{
		printf("Please enter positive number");
		return;
	}
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iValue; iCnt++) //4
	{
		printf("Hello\n");
	}	
}

 int main()
{
	int iNumber = 0;
	printf("How many times do you want to print?"); //-4
	scanf("%d", &iNumber);
	display(iNumber);//90
	return 0;
}