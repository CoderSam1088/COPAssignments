#define _CRT_SECURE_NO_WARNINGS // for Visual studio compiler
#pragma warning(disable:6031) //ignore scanf warnings
#include<stdio.h> //for printf and scanf

int main(){
    int number1 = 55, number2 = 66;
    int rcode = scanf("%d", &number1);
    printf("return code is %d\n", rcode);
    printf("number1 is %d\n", number1);
    printf("number2 is %d\n", number2);

}