// WAP to print 1 - 5

#include<stdio.h>
void display(int iValue)
{
	int iCnt = 0;
	if(iValue<0) 
	{
		iValue = - iValue;
	}
	// for(iCnt = 1;iCnt <= iValue;iCnt++)
	// {
	// 	printf("%d\n",iCnt);
	// }

	iCnt = 1;					//Initialization(1)
	while(iCnt <= iValue) 		//Condition(2)
	{
		printf("%d\n",iCnt); //Body(3)
		iCnt++; 						//Displacement(4)
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