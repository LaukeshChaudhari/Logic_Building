// WAP To accept no from user and check Whether that percentage is Pass or Fail

#include<stdio.h>
void displayClass(float fPercentage)
{
	if ((fPercentage >= 0.0) && (fPercentage <= 34.0))
	{
		printf("Fail\n");
	}

	else if ((fPercentage >= 35.0) && (fPercentage <= 49.0))
	{
		printf("Pass Class\n");
	}

	else if ((fPercentage >= 50.0) && (fPercentage <= 59.0))
	{
		printf("Second Class\n");
	}

	else if ((fPercentage >= 60.0) && (fPercentage <= 69.0))
	{
		printf("First Class\n");
	}

	else if ((fPercentage >= 70.0) && (fPercentage <= 100.0))
	{
		printf("First Class with Distinction\n");
	}

	else
	{
		printf("Invalid Percentage\n");
	}
}

int main()
{
	float fPercentage = 0.0;
	printf("Enter percentage:\n");
	scanf("%f", &fPercentage);
	displayClass(fPercentage);
	return 0;
}