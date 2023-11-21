#include<stdio.h>
void display(int *ptr)
{
	register int iCnt = 0;
	printf("Array elements are:\n");
	for(iCnt = 0; iCnt <= 4; iCnt++)
	{
		printf("%d\n", *ptr);
		ptr++;
	}
}
int main()
{
	auto int iArr[5];
	register int iCnt = 0;

	printf("Enter the numbers:\n");
	for(iCnt = 0; iCnt <= 4; iCnt++)
	{
		scanf("%d", &iArr[iCnt]);
	}

	display(iArr);

	return 0;
}