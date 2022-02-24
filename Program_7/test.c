/*COP 2220  program 7 - larger program
//Samantha Cruz - A program to purchase
event tickets and open, read, and write
a text file*/

#define _CRT_SECURE_NO_WARNINGS //for Visual studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for printf and scanf
#include<ctype.h> //for toupper function

//function prototypes go here
void totalPrice(double prices[], int numItems);

int main()
{
	double vals[]={3, 5, 7, 2};
	totalPrice(vals, 4);
	
	// do not forget to return SUCCESS
    return 0;
 
}

void totalPrice(double prices[], int numItems) {
	FILE* inPtr;
	double value;
	inPtr = fopen("/Users/samanthacruz/Desktop/COPAssignments/Program_7/test.txt", "r");
	fscanf(inPtr, "%lf", &value);
	for(int i = 0; i < numItems; i++)
	{

		prices[i] -= value;
		printf("%f\n", prices[i]);
	}
	fclose(inPtr);

}
