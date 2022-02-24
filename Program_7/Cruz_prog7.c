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
	FILE* inPtr, * outPtr;

	//connect to the file
    inPtr = fopen("/Users/samanthacruz/Desktop/COPAssignments/Program_7/eventAccountBalance.txt", "r");
    outPtr = fopen("/Users/samanthacruz/Desktop/COPAssignments/Program_7/eventAccountBalance.txt", "w");

	
	//get the account balance from the file
    fscanf(inPtr, " %lf", &balanceInMain);
    //printf("%lf\n", balanceInMain);

	
	//greet the user
	
	//view and get the selection

	//change the selection to upper case
	char val = 'q';
	//make sure the user did not enter q to quit
	while (val != 'q')
	{
		//process the selection
		
		//view and get the next selection
		
		//change the selection to upper case
		
	}

	//display the balance
	printf("\nsaving the amount in the file . . .\n");

	//connect to the output file
    //save the balance to the file

	//say goodbye to the user
	// 
	//close the file pointers
	fclose(inPtr);
	fclose(outPtr);
	// do not forget to return SUCCESS
    return 0;
 
}


//function definitions


//Function from program 6
void ProcessSelection(char selection, double* balancePtr)
//input: the user's selection by copy (input parameter)
//input: the account balance (input/output parameter)
//display a message that the selection has been entered
//display the balance when the user enters 'B'
//allow the user to add money to the account when the user enters 'A'
//complete a purchase when the user enters 'T'
{
	int itemNumber;
	double price, total;


	if (selection == 'T')
	{
		printf("\n----------------------------------\n");
		//display balance
		//display the ticket prices
		
		//set the item number
		
		//set the ticket price
		
		//get number of tickets and calculate the total
		

		//check for enough money
		
		//display balance
		printf("----------------------------------\n");
	}
	//add the rest of the conditions

}


void SetEventChoice(int* itemPtr)
//input: ask the user for the item number and
//the event choice is set by the input/output parameter
{
	printf("\nselect the EVENT option by entering the item number: ");
	scanf("%d", itemPtr);
}

void SetTicketPrice(int itemNumber, double* pricePtr)
//input: item number
//input: ticket price is set by the input/output parameter
{
	if (itemNumber == 1)*pricePtr = 90.00;
	else if (itemNumber == 2)*pricePtr = 1050.00;
	//add the rest
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
	
	//calculate the total
	
}


//Function from program 4
double AddMoney(double accountBalance)
//input: amount of money in the account
//displays the amount of money available in the account
//allows the user to add money to the account
//returns the updated balance after the money has been added
{
    return 0;
}

//Function from program 4
double CheckForEnoughMoney(double accountBalance, double total)
//input: amount of money in the account and the transaction total
//gets money from the user until the user has enough to make the purchase
//make the purchase and returns the remaining balance
{
	while (accountBalance < total)//not enough
	{
		accountBalance = AddMoney(accountBalance);
		printf("\n-------------------------------------------------------");
		printf("\nThe total is $%.2f and you have $%.2f in your account\n\n", total, accountBalance);
	}
	//make the transaction
	//return the accountBalance
    return 0;
}

void DisplayBalance(double accountBalance)
//input: amount of money in the account
//displays the amount of money available in the account
{
	printf("\nYou have $%.2f available in your account \n\n", accountBalance);
}
