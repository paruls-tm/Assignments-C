	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 11-june-2019
	Assignment: Reverse of the number */
	
	#include <stdio.h>



	int FindReverseNumber(int number)  //formal Arguments 
	{
		
		//local variables declaration 
		int reverse =0; 
		
		//while statements
		while(number!=0)
		{
			reverse= reverse*10;
			reverse = reverse+(number % 10);
			number = number/10;
			
		}
		return reverse; //return the reverse value 
		
	}
	//Main function call 
	int main()
	{
		//Initialization of the variables
		int number, reverse=0; 
		
		printf("Enter the given number");
		scanf("%d",&number); //fetch the data from stdin
		
		//condition when the entered number is zero 
		if(number == 0 )
		{
		    printf("enter number is zero");
		}
		
		//calling of the reverse function
	    reverse = FindReverseNumber(number);
		//final output of the function 
		printf("Reverse of the number: %d",reverse);
		
		return 0;
	}
