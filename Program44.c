#include<stdio.h>
#include<stdbool.h>
bool checkPalindrome(int iNum)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = iNum;

	while(iNum>0)
	{
		iDigit = iNum%10;
		iRev = iRev*10+iDigit;
		iNum = iNum/10;
	}

	if(iRev == iTemp)
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