/*COP 2220  program 7 - larger program
//Samantha Cruz - A program to purchase
event tickets and open, read, and write
a text file*/

#define _CRT_SECURE_NO_WARNINGS //for Visual studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for printf and scanf
#include<ctype.h> //for toupper function

//function prototypes go here


int main()
{
	char choiceInMain;
	double balanceInMain;

	//inPtr to read from the file, outPtr to write to the file
	FILE *inPtr;

	//connect to the file
    inPtr = fopen("/Users/samanthacruz/Desktop/COPAssignments/Program_7/eventAccountBalance.txt", "r+");
	
	//get the account balance from the file
    fscanf(inPtr, " %lf", &balanceInMain);
    printf("%lf\n", balanceInMain);
    fprintf(inPtr,"HELP ME!!!");

	
	
	fclose(inPtr);
	// do not forget to return SUCCESS
    return 0;
 
}
