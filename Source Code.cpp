/*
	Author	:	Thati Prashanth
	Question:	Write a C program to generate the report card of a student based on his marks secured in the 
				final examination.
	Project	:	Report Card Generator App

*/
#include <stdio.h>
#include <unistd.h>

int main() {
	
	puts("-------------------------------------------");
	puts("\t\t WELCOME");
	puts("-------------------------------------------\n");
	
	char name[30];
	int standard;
	char section;
	
	printf("Please Enter your Name : ");
	scanf("%[^\n]%*c", name);
	
	printf("Enter your Standard : ");
	scanf("%d", &standard);
	
	while((getchar()) != '\n');
	
	printf("Enter your Section : ");
	scanf("%c", &section);
	
	puts("\n\nPlease enter your marks secured out of 100 :");
	
	int maths, hindi, english, science, social;
	
	printf("Mathematics : ");
	scanf("%d", &maths);
	
	printf("English : ");
	scanf("%d", &english);
	
	printf("Hindi : ");
	scanf("%d", &hindi);
	
	printf("Science : ");
	scanf("%d", &science);
	
	printf("Social Science : ");
	scanf("%d", &social);
	
	int totalMarks;
	
	totalMarks = maths + english + hindi + science + social;

	if (totalMarks >= 0  &&  totalMarks <= 500) {
		printf("\n\nReport Card Generated.....");
		usleep(3000000);
	} else {
	    printf("\n Due to incorrect marks, Report Card will not get Generated....");
	    _Exit(0);
	}
	
	
    puts("\n\n-------------------------------------------");
	puts("\tJawahar Navodaya Vidyalaya");
	puts("\t   Annual Report Card");
	puts("-------------------------------------------\n");
	
	printf("Name : %s\n", name);
	printf("Standard : %d\n", standard);
	printf("Section : %c\n", section);
	
	puts("\n\nMarks secured out of 100");
	
	printf("\nMathematics : %d\n", maths);
	printf("English : %d\n", english);
	printf("Hindi : %d\n", hindi);
	printf("Science : %d\n", science);
	printf("Social Science : %d\n", social);
	printf("Total Marks secured : %d\n", totalMarks);
	
	char grade;
	
	if (totalMarks > 450  &&  totalMarks < 500) {
		printf("Grade : A");
	} else if (totalMarks > 400  &&  totalMarks < 449) {
		printf("Grade : B");
	} else if (totalMarks > 350  &&  totalMarks < 399) {
		printf("Grade : C");
	} else if (totalMarks > 300  &&  totalMarks < 349) {
		printf("Grade : D");
	} else if (totalMarks > 200  &&  totalMarks < 299) {
		printf("Grade : E");
	} else {
		printf("Grade : F");
    }
	
	puts("\n\n-----------------------------------------------");
	puts("\t\t THANK YOU");
	puts("-----------------------------------------------"); 
	
	return 0;
}
