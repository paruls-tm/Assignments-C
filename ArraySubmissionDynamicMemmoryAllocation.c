	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 11-june-2019
	Assignment: ArraySubmissionDynamicMrmoryAllocation */


	#include <stdio.h> 
	#include <stdlib.h> 

	int main() 
	{ 

		//Initialization of the variables
		int* arr1, *arr2, *resultmatrix; 
		int number, temp,temp1,data, sum = 0; 

		// Get the number of elements for the array 
		printf("Enter number of elements:\n"); 
		scanf("%d",&number);

		// Dynamically allocate memory using malloc() 
		arr1 = (int*)malloc(number * sizeof(int)); 
		arr2 = (int*)malloc(number * sizeof(int)); 


		
		

		// Memory has been successfully allocated 
		printf("Memory successfully allocated using malloc.\n"); 

		// initialize the first element of the array
		for (temp= 0; temp< number; temp++) { 
			scanf("%d",&data);
			arr1[temp] = data; 
		} 
		data=0;  //assign 0 
		// Get the elements of the array 
		printf("enter the values of second one  array");
		for (temp= 0; temp< number; temp++) { 
			scanf("%d",&data);
			arr2[temp] = data; 
		}
		
		//allocation of resultant array 
		resultmatrix = (int*)malloc(number * sizeof(int)); 
		
		  
		for(temp = 0; temp < sizeof(resultmatrix); temp++)
			resultmatrix[temp] = arr1[temp] + arr2[temp1];
			
		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (temp = 0; temp < number; ++temp) { 
			printf("%d ", resultmatrix[temp]); 
		} 
	 

		return 0; 
	} 
