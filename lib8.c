/*********************************************************
 // Function Name: addition
 // Description: It is used to perfrom addition of two numbers
 // Input: Integer, Integer 
 // Output: Integer
 // Date: 29/08/2023
 //Author Name: Splendid Infosystems
 *********************************************************/

int addition(int iValue1, int iValue2) //-10  70
{
	if(iValue1<0) //true
	{
		iValue1 = - iValue1; 
	}
	if(iValue2<0) //false
	{
		iValue2 = - iValue2;
	}

	return iValue1+iValue2; //10 + 70
}