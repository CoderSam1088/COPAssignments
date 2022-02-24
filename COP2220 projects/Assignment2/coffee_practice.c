
/*Tami Sorgente,  interactive program, average cups of coffee*/
#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warning
#include<stdio.h>
int main()
{
int cups, cups2, cups3; //variables to store the number of cups of coffee
int sum = 0; //variable to store the total cups of coffee
double average;
//1. greet the user
printf("Welcome to the cups of coffee average calculator\n\n");
//2. ask for the number of cups of coffee
printf("How many cups of coffee do you drink each day?  ");
//3. get the number of cups of coffee
scanf("%d", &cups);
//4. ask for the number of cups of coffee
printf("\nHow many cups of coffee do you drink each day?  ");
//5. get the number of cups of coffee
scanf("%d", &cups2);
//6. ask for the number of cups of coffee
printf("\nHow many cups of coffee do you drink each day?  ");
//7. get the number of cups of coffee
scanf("%d", &cups3);
//8. calculate the sum
sum = cups + cups2 + cups3;
//print the sum to check if it is correct
printf("\nThe sum is %d\n\n", sum);
//9. calculate the average
average = (double)(sum)/3;
//10. print the results
printf("The average number of cups is %f", average);
return 0;
}
