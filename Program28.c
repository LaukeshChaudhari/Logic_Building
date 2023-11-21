#include<stdio.h>
void displayFactors(int iNum)
{
	int iCnt = 0;
	
	if(iNum < 0)
	{
		iNum = - iNum;
	}

	for(iCnt = 1; iCnt <= iNum/2; iCnt++)
	{
		if((iNum%iCnt) == 0)
		{
			printf("%d\n",iCnt );
		}
	}
	printf("%d\n",iNum );
}
int main()
{
	int iNum = 0;
	printf("Enter Number:\n");
	scanf("%d", &iNum);
	displayFactors(iNum);
	return 0;
}