// WAP to print 1 - 5

#include<stdio.h>
void display(int iValue)
{
	int iCnt = 0;
	for(iCnt = 1;iCnt <= iValue;iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iNumber = 0;
	printf("Enter any number:");
	scanf("%d", &iNumber);
	display(iNumber);
	return 0;
}