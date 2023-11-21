#include<stdio.h>
int main()
{
	int iArr[5];
	printf("Enter the numbers:\n");
	scanf("%d", &iArr[0]);
	scanf("%d", &iArr[1]);
	scanf("%d", &iArr[2]);
	scanf("%d", &iArr[3]);
	scanf("%d", &iArr[4]);

	printf("Array elements are:\n");
	printf("%d\n", iArr[0]);
	printf("%d\n", iArr[1]);
	printf("%d\n", iArr[2]);
	printf("%d\n", iArr[3]);
	printf("%d\n", iArr[4]);

	return 0;
}