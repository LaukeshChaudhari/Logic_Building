#include<stdio.h>
void displayFactors(int iNum) //6
{
	int iCnt = 0;
	int iSum = 0;
	
	if(iNum < 0)
	{
		iNum = - iNum;
	}

	for(iCnt = 1; iCnt <= iNum/2; iCnt++)
	{
		if((iNum%iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	iSum = iSum + iNum;
	printf("Sum of factors is:%d\n", iSum);
}
int main()
{
	int iNum = 0;
	printf("Enter Number:\n"); //6
	scanf("%d", &iNum);
	displayFactors(iNum);
	return 0;
}