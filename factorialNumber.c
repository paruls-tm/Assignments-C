	//Code created by : Parul Shrivastava
	//created date : 11-june-2019
	//updated date: 11-june-2019
	//Assignment: Factorial of the given no


	#include <stdio.h>



	float FindFactorialNumber(int number)  //formal Arguments 
	{
		//local variable declaration 
		long int factorial=1;
		 
		//For-loop for the iteration of the vcariable for finding the fractorial
		for(int temp = number; temp>0;temp--)
		{
			factorial= factorial*temp; //multiplication 
		}
		return factorial;
		
	}

	int main()
	{
		 // Initialization of  the Number wanted to find factorial 
		int number;
		long int factorial=1;
		
		//Initialization of the variable 
		printf("enter the factorial number");
		scanf("%d", &number);
		factorial= FindFactorialNumber(number);

		// final output  of the number 
		printf("factorial of the given no is: %ld",factorial); // output
		return 0;
	}