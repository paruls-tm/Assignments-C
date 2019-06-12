	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 12-june-2019
	Assignment: Root of quaderatic Equation */
    	
    #include<stdio.h> 
    #include<math.h> 
    
    
    
    // Prints roots of quadratic equation ax*2 + bx + x 
    //Function Definition 
    void FindRootsQuaderaticEquation(int val1, int val2, int val3) 
    { 
    
    
        //Check multiple condition for finding the roots
    	// If val1 is 0, then equation is not quadratic 
    	// Its linear equation
    	if (val1 == 0) 
    	{ 
    		printf("Not a valid equation"); 
    		return; 
    	} 
    
        //find the formula  ( b^2 - 4*a*c)
        //Initialize the temp variable with the formula values
        
        
    	int temp = val2*val2 - 4*val1*val3; 
    	
    	//find the squre root of absolute values 
    	double sqrt_val = sqrt(abs(temp)); 
    
    	if (temp > 0) 
    	{ 
    		printf(" When roots are real and different \n"); 
    		printf("%f\n%f",(double)(-val2 + sqrt_val)/(2*val1) 
    			, (double)(-val2 - sqrt_val)/(2*val1)); 
    	} 
    	else if (temp == 0) 
    	{ 
    		printf(" When roots are real and same \n"); 
    		printf("%f",-(double)val2 / (2*val1)); 
    	} 
    	else 
    	{ 
    		printf("when roots are complex \n"); 
    		printf("%f + i%f\n%f - i%f", -(double)val2 / (2*val1),sqrt_val 
    			,-(double)val2 / (2*val1), sqrt_val); 
    	} 
    } 
    

	
	
	//Main function call 
	int main()
	{
		//Initialization of the variables
		int num1, num2, num3;
		
		printf("Enter the values of the quaderatic equation");
		scanf("%d %d %d",&num1,&num2,&num3); //fetch the data from User
		
	    FindRootsQuaderaticEquation(num1, num2, num3);
		//final output of the function 
	
	    
		return 0;
	}
