	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 11-june-2019
	Assignment Name: Area of Triangle*/



	#include <stdio.h>
	#include <math.h>

	// Definition of the function 
	double FindAreaTriangle( float side1, float side2, float side3)  //formal Arguments 
	{
		
		 //find the area of the triangle of the given sides 
		float s= (side1+side2+side3)/2;
		return (sqrt(s*(s-side1)*(s-side2)*(s-side3))); // return the area of the sides
		
	}

	int main()
	{  
		
		// declaration of the triangle sides 
		float  side1, side2, side3;
		//double Area;
		
		//Initializationn of the sides
		printf("Enter the values of the triangle sides");
		scanf("%f %f %f",&side1,&side2,&side3);
		
		
		//function calling 
		//after definition it returns the area of the triangle from the function 
	    //Area = FindAreaTriangle(side1,side2,side3); // Actual Arguments of the function 

	   
		//final output of the program 
		printf("Area of the given sides of triangle is %f",FindAreaTriangle(side1,side2,side3)); // output 
		
		return 0;
	}
