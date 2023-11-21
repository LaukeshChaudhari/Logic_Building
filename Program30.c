#include<stdio.h>
#include<stdbool.h>

bool checkPerfect(int iNum) 
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

	if(iSum == iNum)  
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int iNum = 0;
	bool bRet = false;
	printf("Enter Number:\n"); 
	scanf("%d", &iNum);
	bRet = checkPerfect(iNum);
	if(bRet == true)
	{
		printf("%d is a perfect number\n",iNum);
	}
	else
	{
		printf("%d is not a perfect number\n",iNum);
	}
	return 0;
}