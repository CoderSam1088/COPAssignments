#define _CRT_SECURE_NO_WARNINGS // for Visual studio compiler
#pragma warning(disable:6031) //ignore scanf warnings
#include<stdio.h> //for printf and scanf
#include<ctype.h> //to check if a character is an integer

double CalculateAverage(double sum);


int main(){
    double num = 13.5;
    double answer = CalculateAverage(num);
}



double CalculateAverage(double sum) {

int userInput;

double output;

printf("Enter an integer: ");

scanf("%d", &userInput);

do {

printf("You do not want to divide by 0. Enter another integer: ");

scanf("%d", &userInput);

} while (userInput == 0);

output = sum/userInput;

printf("The quotient is %f", output);

return output;

}