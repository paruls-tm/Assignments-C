	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 12-june-2019
	Assignment: floating point array bubble sort*/
	
	#include <stdio.h>

	//Main function call 
	int main()
	{
		//Initialization of the variables
    	int temp,temp1,number = 10,j;
        float value=0.0f;
        
        //total no of elemnet of the array
        printf("Enter the size of the array element");
        scanf("%d",&number);
        
        float array[number];
        
        printf("enter the values of the array");
        for(int temp=0;temp<number;temp++)
        {
            scanf("%f",&array[temp]);
        }

        printf("\n\n");
        
        //for loop for bubble sort implementation
        for(temp=0;temp<number-1;temp++)
        {
            for(temp1=0;temp1<number-temp-1;temp1++)
            {
                if(array[temp1]>array[temp1+1])
                {
                    value=array[temp1+1];
                    array[temp1+1]=array[temp1];
                    array[temp1]=value;
                }
            }
        }
        
        //final output of the bubble sort 
        for(temp= 0; temp< number; temp++) {
            printf("%.2f  ", array[temp]);
        }
		
	    
	
	   
		return 0;
	}

