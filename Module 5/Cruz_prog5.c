/*COP 2220  (program 5) -
//Samantha Cruz 2/4/22
This is a program that has a menu for a gas station app.
It welcomes the user with a friendly message, gives a list of 
options to choose from. It will continue to run until the user
quits. The options will be implemented later.*/

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings 

#include<stdio.h> //for printf and scanf
#include<ctype.h> //for toupper function

//function prototypes

void Greeting();
//welcome the user to the event purchasing app

char ViewAndGetSelection();
//display the program options, declare, ask, get, and return the selection

void ProcessSelection(char selection);
//input: the user's selection as an input parameter (copy)
//display a message that the selection has been entered


int main()
{
	char choiceInMain;
	//call the Greeting function
    Greeting();

	//view and get the selection - loop initalization 

	//change the selection to upper case
	//choiceInMain = toupper(choiceInMain);

	//make sure the user did not enter q to quit
	//while (choiceInMain != 'Q') //test
	do{
		choiceInMain = ViewAndGetSelection();
		
	} while(choiceInMain != 'Q');


	//say goodbye to the user
    printf("\nHave a great day!");
	
	//return SUCCESS
    return 0;
	
}

//function definitions
void Greeting()
//welcome the user to the Event purchasing app
{
    printf("Welcome to the event purchasing app\n");
    printf("We offer discounted tickets to some of the year's best events!\n\n");
    printf("********************************************************\n");

}

char ViewAndGetSelection()
//display the program options, declare, ask, get, and return the selection
{
	char selection;
    printf("What would you like to do?\n");
    printf("Please select from the following options:\n\n");
    printf("'E' to view the event ticket options\n");
    printf("'T' to purchase Tickets\n");
    printf("'B' to view your account balance\n");
    printf("'A' to add money to your account\n");
    printf("'Q' to Quit\n");
    printf("Enter your selection: ");
    scanf(" %c", &selection);
    selection = toupper(selection);
    ProcessSelection(selection);
    return selection;
}

void ProcessSelection(char selection)
//input: the user's selection as an input parameter (copy)
//display a message that the selection has been entered
{
	if (selection == 'E')
	{
        //if the selection is 'E' or 'e', say it will display ticket prices
		printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("Here you will display the event ticket prices\n");
		printf("----------------------------------\n");
	} 
    else if(selection == 'T')
    {
        //if the selection is 'T', say you will make a ticket purchase
        printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("Here you will make a ticket purchase\n");
		printf("----------------------------------\n");

    }
    else if(selection == 'B')
    {
        //if the selection is 'B', say you will see account balance
        printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("Here you will display the account balance\n");
		printf("----------------------------------\n");

    }
    else if(selection == 'A')
    {
        //if the selection is 'A', say you will add money to the account
        printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("Here you will add money to the account\n");
		printf("----------------------------------\n");

    }
    else if(selection != 'Q')
    {
        //if the selection is not 'Q', say it is an invalid option
        printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("This is not a valid option\n");
		printf("----------------------------------\n");

    }
	
}







