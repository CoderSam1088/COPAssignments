#define _CRT_SECURE_NO_WARNINGS //for Visual studio compiler 
#pragma warning(disable:6031) //ignore scanf warnings 
#include<stdio.h> //for printf and scanf 
#include<ctype.h> //toupper and tolower 

int main() {
    char lett;
    char lower;
    char lett2;
    char upper;
    double num1;
    int num2;
    double product;
    printf("Hello my name is Samantha\n");
    printf("Enter a letter: ");
    scanf(" %c", &lett);
    lower = tolower(lett);
    printf("%c %c\n", lett, lower);
    printf("Enter another letter: ");
    scanf(" %c", &lett2);
    upper = toupper(lett2);
    printf("%c %c\n", lett2, upper);
    printf("Enter a double: ");
    scanf("%lf", &num1);
    printf("Enter an integer: ");
    scanf("%d", &num2);
    product = num1*num2;
    printf("%f %d %f", num1, num2, product);

}