// Addition of two no in C

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("Enter first number:\n"); //10
	scanf("%d", &a);

	printf("Enter second number:\n"); //20
	scanf("%d", &b);

	c = a+b;

	printf("Addition is:%d", c);
	return 0;
}