//Module 2 Simple programs in C example from notes
/* Another way to do comments */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warning

#include<stdio.h>//for printf and scanf

int main()
//start of the block of code for the main function
{
	//function body 

	//variable declarations
	
	int num;
	int myAge = 20, yourAge = 30, age = 21; //DECLARATION AND INITIALIZATION (Assignment)
	
	double height, width = 20.5;
	char initial = 'x';

	age = 12; //assigns the value 12 to a variable age
	num = 10 * 5 / 2; //assigns the result of a calculation to a variable num
	age = myAge + yourAge; //adds the values of 2 variables and assigns the result to age 

	height = width / 4; //divides the variable width by 4 and assigns the result to height

	printf("What you want to see.");
	printf("Displays an variable %d years.\n", age); //one placeholder
	//three placeholders, %d, %f, %c
	printf("Displays several %d, %f, %c values.\n", age, height, initial);

	/*This statement increments or increases the value in the variable by 1.
	This is a perfectly valid statement and occurs fairly frequently in programs. */
	age = age + 1;

	printf("Enter an integer between 0 and 10 >"); //prompt
	scanf("%d", &num); //get a number from the user
	printf("\nYou entered: %d\n", num); //display the number that was entered

	printf("Enter your age as an integer: "); //ask for age
	scanf("%d", &age);
	printf("Enger your height as a double: "); //add a prompt here for the height
	scanf("%lf", &height);
	printf("Tell your first initial: "); //add a prompt here for the initial
	scanf(" %c", &initial); //ADD SPACE between ì and % for char

	return 0;
}//end of the block of code for the main function







