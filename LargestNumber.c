	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 12-june-2019
	Assignment:Largest of numbers*/
	
	#include <stdio.h>



	int FindLargestNumber(int num1, int num2, int num3)  //formal Arguments 
	{
		    // Nested condition statement for checking the numbers 
    		if (num1 >= num2 && num1 >= num3) 
                return num1; 
      
            else if (num2 >= num1 && num2 >= num3) 
                return num2; 
          
            else
                return num3; 
      
	}
	
	
	//Main function call 
	int main()
	{
		//Initialization of the variables
		int num1, num2, num3, largestNo=0;
		
		printf("Enter three numbers");
		scanf("%d %d %d",&num1,&num2,&num3); //fetch the data from User
		
	    largestNo=FindLargestNumber(num1, num2, num3);
		//final output of the function 
	
	    printf("largest Number Among three numbers is : %d",largestNo);
		return 0;
	}
