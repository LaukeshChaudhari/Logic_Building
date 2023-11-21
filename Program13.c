// WAP to print hello five times

#include<stdio.h>

void display(int iValue) //90
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		printf("Hello\n");
	}	
}

 int main()
{
	int iNumber = 0;
	printf("How many times do you want to print?"); //90
	scanf("%d", &iNumber);
	display(iNumber);//90
	return 0;
}