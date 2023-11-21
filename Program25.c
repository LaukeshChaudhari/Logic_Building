// WAP To accept no from user and check Whether is valid or invalid for billing Amount

#include<stdio.h>

void jwelersPortal(int iWeight)
{
	switch(iWeight)
	{
	case 1:
		printf("Your bill amount is 5k\n");
		break;
	case 2:
		printf("Your bill amount is 10k\n");
		break;
	case 5:
		printf("Your bill amount is 20k\n");
		break;
	case 10:
		printf("Your bill amount is 50k\n");
		break;
	default:
		printf("Invalid weight\n");
	}
}
int main()
{
	int iWeight = 0;
	printf("Enter weight of the coin\n");
	scanf("%d",&iWeight);
	jwelersPortal(iWeight);
	return 0;
}