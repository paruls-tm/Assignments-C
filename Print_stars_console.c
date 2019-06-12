	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 11-june-2019
	Assignment:print stars one console*/
	
	#include <stdio.h>



	void PrintStarsConsole(int number)  //formal Arguments 
	{
		
		//local variables declaration 
		int temp1, temp2;
		
		//for-loop for the printing the stars
		
		//first outer loop for the number of lines
    	for(temp1=0; temp1<5; temp1++)
    	{
    	    //inner loop for the printing the stars
    		for(temp2=0; temp2<=temp1; temp2++)
    		{
    			printf("* ");
    		}
    		printf("\n");    //new line
    	}
	}
	
	
	//Main function call 
	int main()
	{
		//Initialisation of the variables
		int number; 
		
		printf("Enter the number of stars\n");
		scanf("%d",&number); //fetch the data from stdin
		
	    PrintStarsConsole(number);
		//final output of the function 
	
		return 0;
	}
