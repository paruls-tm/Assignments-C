/* ***************************** Assignments of  C *************************** */

	/*Code created by : Parul Shrivastava
	Created date : 11-june-2019
	Updated date: 11-june-2019
	Assignment: Sort By Name of Student Record*/
	
#include <stdio.h> 
#include <string.h> 

// Structure of the student record 
struct Student { 
	char* name; 
	int rollno; 
}; 

//comparision on the basis of the name 
//function definition
int comparator(const void* p, const void* q) 
{ 
	return strcmp(((struct Student*)p)->name, 
				((struct Student*)q)->name); 
} 

// main () call
int main() 
{ 
    //initialization of the variables 
	int temp = 0, records; 
	
	//enter the student records 
    printf("enter the number of student Records:\n");
    scanf("%d",&records);
    
	struct Student studentRecord[records]; //crewted the student object of the structre type
	
    //entered the data of the student roll number and name 
    for(temp=0;temp<records;temp++){
        scanf("%s %d",studentRecord.name[temp],studentRecord.rollno[temp]);
    }
	
	
	//  Unsorted Structure of the student Records
	printf("Unsorted Student Records:\n"); 
	for (temp = 0; temp < records; temp++) { 
		printf("Name = %s, RollNo = %d \n", 
			studentRecord.name[temp],studentRecord.rollno[temp]); 
	} 
	
    //comparioson function calling 
	qsort(studentRecord, records, sizeof(struct Student), comparator); 

e 	//Sorted Structure of the student Records
	printf("\n\nStudent Records sorted by Name:\n");
	
	//final sorted data
	for (temp = 0; temp < records; temp++) { 
		printf("Name = %s, rollno = %d \n", 
			studentRecord.name[temp],studentRecord.rollno[temp]); 
	} 

	return 0; 
} 
