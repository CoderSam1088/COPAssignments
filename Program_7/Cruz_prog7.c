/*COP 2220  program 7 - larger program
//Samantha Cruz - A program to purchase
event tickets and open, read, and write
a text file*/

#define _CRT_SECURE_NO_WARNINGS //for Visual studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for printf and scanf
#include<ctype.h> //for toupper function

//function prototypes go here

//Function from program 6 
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
//complete a purchase when the user enters 'T'

void SetEventChoice(int* itemPtr);
//input: ask the user for the item number and
//the event choice is set by the input/output parameter

void SetTicketPrice(int itemNumber, double* pricePtr);
//input: item number
//input: ticket price is set by the input/output parameter

void CalculateTotal(double pricePerTicket, double* totalPtr);
//input price per ticket by copy
//declare, ask and get the number of tickets
//calculate the total
//input/output parameter for the total

double AddMoney(double accountBalance);
//input: amount of money in the account
//displays the amount of money available in the account
//allows the user to add money to the account
//returns the updated balance after the money has been added

double CheckForEnoughMoney(double accountBalance, double total);
//input: amount of money in the account and the transaction total
//gets money from the user until the user has enough to make the purchase
//make the purchase and returns the remaining balance

void DisplayBalance(double accountBalance);
//input: amount of money in the account
//displays the amount of money available in the account

void DisplayEventSelections();
//display the event choices and related item number
//declare, ask, get, and return the item number

int main()
{
	char choiceInMain;
	double balanceInMain;

	//inPtr to read from the file, outPtr to write to the file
	FILE* inPtr, * outPtr;

	//connect to the file
    inPtr = fopen("/Users/samanthacruz/Desktop/COPAssignments/Program_7/eventAccountBalance.txt", "r");

	
	//get the account balance from the file
    fscanf(inPtr, "%lf", &balanceInMain);
    

	
	//greet the user
    printf("Welcome to the event purchasing app\n");
    printf("We offer discounted tickets to six of the year's best events\n\n");
    printf("You will be presented with a list of the available options\n");
    printf("Please select the number for the item you wish to purchase.\n");
    printf("Next you will enter the number of tickets you wish to purchase.\n\n");
    printf("If you do not have enough money to cover the purchase, you will be asked to add money to your account until you have enough to make the purchase.");
	
	//view and get the selection
	ViewAndGetSelection(&choiceInMain);

	//change the selection to upper case
	choiceInMain = toupper(choiceInMain);
	
	//make sure the user did not enter q to quit
	while (choiceInMain != 'Q')
	{
		//process the selection
		ProcessSelection(choiceInMain, &balanceInMain);
		
		//view and get the next selection
		ViewAndGetSelection(&choiceInMain);
		
		//change the selection to upper case
		choiceInMain = toupper(choiceInMain);
		
	}

	//display the balance
	DisplayBalance(balanceInMain);
	printf("\nsaving the amount in the file . . .\n");

	//connect to the output file
	outPtr = fopen("/Users/samanthacruz/Desktop/COPAssignments/Program_7/eventAccountBalance.txt", "w");

    //save the balance to the file
	fprintf(outPtr, "%lf\n", balanceInMain);

	//say goodbye to the user
	printf("Have a great day!\n");

	//close the file pointers
	fclose(inPtr);
	fclose(outPtr);
	// do not forget to return SUCCESS
    return 0;
 
}


//function definitions
void ViewAndGetSelection(char* selectionPtr)
//input: the user's selection (input/output parameter)
//display the program options and get the users selection
//use an input/output parameter for the selection
{
    printf("\n********************************************************\n");
	printf("What would you like to do?\n");
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
		printf("You selected %c\n\n", selection);
		DisplayBalance(*balancePtr);
		printf("How much do you want to add?\n");
		scanf("%lf", &amount);
		*balancePtr = *balancePtr + amount;
		DisplayBalance(*balancePtr);
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
		DisplayEventSelections();
		printf("----------------------------------\n");
	}
    else if (selection == 'T')
	{
		//declare variable
		int eventChoice;
		double eventCost;
		int numTickets;
		double totalCost;
        //display the ticket prices
		printf("\n----------------------------------\n");
		printf("You selected %c\n", selection);
		DisplayBalance(*balancePtr);
		DisplayEventSelections();
		//set the event choice
		SetEventChoice(&eventChoice);
		SetTicketPrice(eventChoice, &eventCost);
		CalculateTotal(eventCost, &totalCost);
		*balancePtr = CheckForEnoughMoney(*balancePtr, totalCost);
		


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


void SetEventChoice(int* itemPtr)
//input: ask the user for the item number and
//the event choice is set by the input/output parameter
{
	printf("\nselect the EVENT option by entering the item number: ");
	scanf("%d", &*itemPtr);
}

void SetTicketPrice(int itemNumber, double* pricePtr)
//input: item number
//input: ticket price is set by the input/output parameter
//use prices 90, 1050, 925, 75, 150, or 225 for 1, 2, 3, 4, 5, or 6, respectively
{
	if (itemNumber == 1)
	{
		*pricePtr = 90.00;
	}
	else if (itemNumber == 2)
	{
		*pricePtr = 1050.00;
	}
	else if (itemNumber == 3)
	{
		*pricePtr = 925.00;
	} 
	else if (itemNumber == 4)
	{
		*pricePtr = 75.000;
	}
	else if (itemNumber == 5)
	{
		*pricePtr = 150.00;
	}
	else if (itemNumber == 6)
	{
		*pricePtr = 225.00;
	}
	else
	//if they do not pick a valid number, say it is invalid and set
	//price to 0.
	{
		printf("\nyou did not enter a 1,2,3,4,5, or 6");
		*pricePtr = 0.00;
	}
}

void CalculateTotal(double pricePerTicket, double* totalPtr)
//input price per ticket by copy
//declare, ask and get the number of tickets
//calculate the total
//input/output parameter for the total
{
	//declare, ask and get the number of tickets
	int numTickets;
	printf("How many tickets?: ");
	scanf("%d", &numTickets);
	
	//calculate the total
	*totalPtr = numTickets*pricePerTicket;
	
}


//Function from program 4
double AddMoney(double accountBalance)
//input: amount of money in the account
//displays the amount of money available in the account
//allows the user to add money to the account
//returns the updated balance after the money has been added
{
    double amount;
    printf("Enter the amount to add: ");
    scanf("%lf", &amount);
    amount += accountBalance;
    return amount;
}

//Function from program 4
double CheckForEnoughMoney(double accountBalance, double total)
//input: amount of money in the account and the transaction total
//gets money from the user until the user has enough to make the purchase
//make the purchase and returns the remaining balance
{
	while (accountBalance < total)//not enough
	{
		
		printf("\n-------------------------------------------------------");
		printf("\nThe total is $%.2f and you have $%.2f in your account\n\n", total, accountBalance);
		accountBalance = AddMoney(accountBalance);
	
	}
	//make the transaction
	printf("\n-------------------------------------------------------");
	printf("\nThe total is $%.2f and you have $%.2f in your account\n\n", total, accountBalance);

	printf(". . . You are now purchasing tickets . . .\n");
	accountBalance -= total;
	DisplayBalance(accountBalance);
	//return the accountBalance
	return accountBalance;
}

void DisplayBalance(double accountBalance)
//input: amount of money in the account
//displays the amount of money available in the account
{
	printf("\nYou have $%.2f available in your account \n\n", accountBalance);
}

//display the event choices and related item number
//declare, ask, get, and return the item number
void DisplayEventSelections(){
	double events[] = {90, 1050, 925, 75, 150, 225};

	printf("-------------------------------------------------------\n");
    printf("Here are the events available for purchase:\n");
    printf("1. Trip to Lion Country Safari: $%.2f \n", events[0]);
    printf("2. Trip to the Moon: $%.2f \n", events[1]);
    printf("3. Mahi Fishing trip in the Keys: $%.2f \n", events[2]);
    printf("4. Paddleboarding in Deerfield Beach: $%.2f \n", events[3]);
    printf("5. Free parking in Las Olas for a Week: $%.2f \n", events[4]);
    printf("6. Glass Blowing Class: $%.2f \n\n", events[5]);
}