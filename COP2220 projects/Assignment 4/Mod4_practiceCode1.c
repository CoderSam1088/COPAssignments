//Module 4 condition examples from notes
#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings
#include<stdio.h>//for printf and scanf
int main()
{
    int amount;
    int a = 0, b = 5, c = 7;
    double grade, points = 0.0; //for if/else
    int grade1; //for switch
    char letter_grade;
    printf("Enter the number of roses: ");
    scanf("%d", &amount);
    if (amount == 12)
    {
        printf("There are one dozen roses.\n");
    }
    else
    {
        printf("There are not one dozen roses.\n");
    }
    //numerical grade example with cascading if /else - grade range
    printf("\n__________________________________________________\n");
    printf("\nEnter a numerical grade:  ");
    scanf("%lf", &grade);
    if (grade < 60)
    {
        printf("Below 60, no points\n");
    }
    else if (grade < 70)
    {
        printf("You should try harder\n");
        points = points + 1.0; //add 1 to points
    }
    else if (grade < 80)
    {
        printf("You need more practice\n");
        points = points + 2.0; //add 2 to points
    }
    else
    {
        printf("Great Job\n");
        points = points + 3.0;
    }
    //numerical grade example with switch - exact integer grade
    printf("\n__________________________________________________\n");
    printf("\nEnter another numerical grade:  ");
    scanf("%d", &grade1);
    //using switch to compare a grade, it must have exact value:
    switch (grade1) {
        case 100:
        printf("Awesome job!\n");
        letter_grade = 'A';
        break;

        case 90:
        printf("Excellent\n");
        letter_grade = 'A';
        break;

        case 85:
        printf("Very Good\n");
        letter_grade = 'B';
        break;

        case 80:
        printf("Good\n");
        letter_grade = 'B';
        break;

        case 75:
        printf("Decent");
        letter_grade = 'C';
        break;

        case 70:
        printf("Okay\n");
        letter_grade = 'C';
        break;

        default:
        printf("Needs work!\n");
        letter_grade = 'D';
    }
    printf("\nThe letter grade is %c", letter_grade);
    return 0;
}