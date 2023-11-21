#include<stdio.h>
#include<stdbool.h>

int reverseNumber(int iNum)
{
	int iDigit = 0;
	int iRev = 0;

	while(iNum>0)
	{
		iDigit = iNum%10;
		iRev = iRev*10+iDigit;
		iNum = iNum/10;
	}

	return iRev;
}

bool checkPalindrome(int iNum)
{
	int iRev = 0;
	iRev = reverseNumber(iNum);
	if(iRev == iNum)
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
	
	bRet = checkPalindrome(iNum);

	if(bRet == true)
	{
		printf("%d is a palindrome number\n", iNum);
	}
	else
	{
		printf("%d is not a palindrome number\n", iNum);
	}
	return 0;
}