	/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 12-june-2019
	Assignment: Matrix Multiplication and Addition  */
    	
    #include<stdio.h> 
    #include<math.h> 
    
	//Main function call 
	int main()
	{
	
        //Initialization of the diemnsions or variables
        int row, columns, temp1, temp2, temp3, sum=0;
     
        printf("Enter number of rows and columns of first matrix\n");
        scanf("%d%d", &row, &columns);
      
        //dlaration of the matrices
        int FirstMatrix[row][columns], SecondMatrix[row][columns],MultipleMatrix[row][columns],AddMatrix[row][columns];
      
      
        printf("Enter elements of first matrix\n");
        
        //Initialize the values in first matrix
        for (temp1 = 0; temp1< row; temp1++)
            for (temp2 = 0; temp2 <columns; temp2++)
                scanf("%d", &FirstMatrix[temp1][temp2]);
         
     
     
      
        printf("Enter elements of second matrix\n");
     
        //initialization of the second matrix
        for (temp1 = 0; temp1 < row; temp1++)
            for (temp2 = 0; temp2 < columns; temp2++)
                scanf("%d", &SecondMatrix[temp1][temp2]);
        
        //Multiplication of the  two matrix    
        for (temp1 = 0; temp1 < row; temp1++) 
        {
          for (temp2 = 0; temp2 < columns; temp2++) {
            for (temp3 = 0; temp3< row; temp3++) {
              sum = sum + FirstMatrix[temp1][temp3]*SecondMatrix[temp3][temp1];
            }
        
            MultipleMatrix[temp1][temp2] = sum;
            sum = 0;
          }
        }
        
        //Addition of the matrix 
        for (temp1 = 0; temp1 < row; temp1++) {
          for (temp2 = 0; temp2 < columns; temp2++)
            AddMatrix[temp1][temp2] = FirstMatrix[temp1][temp2] + SecondMatrix[temp1][temp2];
     
          printf("\n");
        }
        
    
        printf("multiplication of the matrix:\n");
     
        for (temp1 = 0; temp1 < row; temp1++) {
          for (temp2 = 0; temp2 < columns; temp2++)
            printf("%d\t", MultipleMatrix[temp1][temp2]);
     
          printf("\n");
        }
        
        printf("Addition of the given matrix:\n");
         for (temp1 = 0; temp1 < row; temp1++) {
          for (temp2 = 0; temp2 < columns; temp2++)
            printf("%d\t", AddMatrix[temp1][temp2]);
     
          printf("\n");
        }
          
         
	
	    
		return 0;
	}
