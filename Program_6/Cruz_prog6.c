/*COP 2220  (program 6) -
//Samantha Cruz, 2/22/22
A menu program used to purchase
event tickets. You can also
add to your balance to buy
tickets */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings 

#include<stdio.h> //for printf and scanf
#include<ctype.h> //for toupper function

//function prototypes

void Greeting();
//welcome the user to the event purchasing app

void ViewAndGetSelection(char* selectionPtr);
//input: the user's selection (input/output parameter)
//display the program options and get the users selection
//use an input/output parameter for the selection

void ProcessSelection(char selection, double* balancePtr);
//input: the user's selection by copy (input parameter)
//input: the account balance (input/output parameter)
//display a message that the selection has been entered
//display the balance when the user enters 'B'
//allow the user to add money to the account when the user enters 'A'


int main()
{
	char choiceInMain;
	//declare and initialize the balance
    double balance = 50.00;
	
	//call the Greeting function
    Greeting();

	//view and get the selection
    ViewAndGetSelection(&choiceInMain);
	
	//change the selection to upper case
	choiceInMain = toupper(choiceInMain);


	//make sure the user did not enter Q to quit
	while (choiceInMain != 'Q') //test
	{
		//process the selection
        ProcessSelection(choiceInMain, &balance);

		//view and get the next selection
        ViewAndGetSelection(&choiceInMain);

		//change the selection to upper case;
        choiceInMain = toupper(choiceInMain);
	}

	//say goodbye to the user
    printf("Have a great day!\n");

	// do not forget to return SUCCESS
    return 0;
	
}

//function definitions

void Greeting()
//welcome the user to the Event purchasing app
{
    printf("Welcome to the event purchasing app\n");
    printf("We offer discounted tickets to some of the year's best events!\n\n");
}


void ViewAndGetSelection(char* selectionPtr)
//input: the user's selection (input/output parameter)
//display the program options and get the users selection
//use an input/output parameter for the selection
{
    printf("\n********************************************************\n");
    printf("Please select from the following options:\n\n");
    printf("'E' to view the event ticket options\n");
    printf("'T' to purchase Tickets\n");
    printf("'B' to view your account balance\n");
    printf("'A' to add money to your account\n");
    printf("'Q' to Quit\n");
    printf("Enter your selection: ");
    scanf(" %c", & *selectionPtr);
}

void ProcessSelection(char selection, double* balancePtr)
//input: the user's selection by copy (input parameter)
//input: the account balance (input/output parameter)
//display a message that the selection has been entered
//display the balance when the user enters 'b'
//allow the user to add money to the account when the user enters 'u'
{

	if (selection == 'A')
	{
        //add to the account balance
		double amount;
		printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("How much do you want to add?\n");
		scanf("%lf", &amount);
		*balancePtr = *balancePtr + amount;
		printf("----------------------------------\n");
    }

    else if (selection == 'B')
	{
        //display the account balance
		printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("Here is the current balance: $%.2lf\n", *balancePtr);
		printf("----------------------------------\n");
	}
    else if (selection == 'E')
	{
        //display the ticket prices
		printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("Here you will display the ticket prices\n");
		printf("----------------------------------\n");
	}
    else if (selection == 'T')
	{
        //display the ticket prices
		printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("Here you will make a ticket purchase\n");
		printf("----------------------------------\n");
	}
    else
    {
        //invalid selection
		printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		printf("That is not a valid option\n");
		printf("----------------------------------\n");

    }

}





