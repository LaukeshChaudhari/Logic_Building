#include<stdio.h>
int main()
{
	int iArr[5];
	int iCnt = 0;
	printf("Enter the numbers:\n");
	for(iCnt = 0; iCnt <= 4; iCnt++)
	{
		scanf("%d", &iArr[iCnt]);
	}
	
	printf("Array elements are:\n");
	for(iCnt = 0; iCnt <= 4; iCnt++)
	{
		printf("%d\n", iArr[iCnt]);
	}

	return 0;
}