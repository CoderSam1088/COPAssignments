/*COP 2220 program4.c larger program
Samantha Cruz 1-28-22 Program to Plan an event*/

#define _CRT_SECURE_NO_WARNINGS // for Visual studio compiler
#pragma warning(disable:6031) //ignore scanf warnings
#include<stdio.h> //for printf and scanf
#include<ctype.h> //to check if a character is an integer


double events[] = {90, 1050, 925, 75, 150, 225};

//function prototypes

void Greeting(void);
//welcome the user to the event purchasing app

int DisplayEventSelections();
//display the event choices and related item number
//declare, ask, get, and return the item number

double EventTotal(int itemNumber);
//input: item number
//ask and get the number of tickets
//use the item number to identify the price of one ticket
//calculate and return the total price for the event

double CheckForEnoughMoney(double accountBalance, double totalPrice);
//input: amount of money in the account and the total price
//gets money from the user until the user has enough to make the purchase
//make the purchase and return the remaining balance

double AddMoney(double accountBalance);
//input: amount of money in the account
//displays the amount of money available in the account
//allow the user to add money to the account
//return the updated balance after the money has been added

void DisplayBalance(double accountBalance);
//input: amount of money in the account
//displays the amount of money available in the account


int main() {
    //declare all the variables
    double balance = 50;
    int selection;
    int numTickets;
    double total;
    int val;
    int cVal;
    int test;
    

    //greet the user
    Greeting();
    DisplayBalance(balance);
    

    //ask for which event
    selection = DisplayEventSelections();

    //find event total
    total = EventTotal(selection);

    //Check if you have enough money'
    //keep asking for more money until there is enough
    balance = CheckForEnoughMoney(balance, total);

    //purchase tickets and print the new balance

    
    printf("Enter any integer to see your remaining balance: ");

    //collect input from user
    test = scanf("%d", &cVal);
    
    if(test == 1){
        DisplayBalance(balance);
    }

    printf("\nThank you for purchasing tickets using this app!\n\n");
    printf("Have a great day!");

    return 0;
}


//function definitions
//welcome the user to the gas purchasing app
void Greeting() {
    printf("Welcome to the event purchasing app\n");
    printf("We offer discounted tickets to six of the year's best events\n\n");
    printf("You will be presented with a list of the available options\n");
    printf("Please select the number for the item you wish to purchase.\n");
    printf("Next you will enter the number of tickets you wish to purchase.\n\n");
}

//display the event choices and related item number
//declare, ask, get, and return the item number
int DisplayEventSelections(){
    int selection;

    printf("Here are the events available for purchase:\n");
    printf("1. Trip to Lion Country Safari: $%.2f \n", events[0]);
    printf("2. Trip to the Moon: $%.2f \n", events[1]);
    printf("3. Mahi Fishing trip in the Keys: $%.2f \n", events[2]);
    printf("4. Paddleboarding in Deerfield Beach: $%.2f \n", events[3]);
    printf("5. Free parking in Las Olas for a Week: $%.2f \n", events[4]);
    printf("6. Glass Blowing Class: $%.2f \n\n", events[5]);
    printf("Enter your selection (1-6): ");
    scanf("%d", &selection);

    //make sure input is valid and ask for new input if not
    while (selection<1 || selection > 6){
        printf("Invalid selection. Choose a number 1-6: ");
        scanf("%d", &selection);
    }
    printf("The price per ticket is $%.2f.\n\n", events[selection-1]);
    return selection;
}

//input: item number
//ask and get the number of tickets
//use the item number to identify the price of one ticket
//calculate and return the total price for the number of tickets requested
double EventTotal(int itemNumber){
    int numTicks;
    double cost;
    printf(" How many tickets? ");
    scanf("%d", &numTicks);
    cost = numTicks* events[itemNumber-1];
    printf("\n-------------------------------------------------------\n");
    return cost;

}


//input: amount of money in the account
//displays the amount of money available in the account
//allow the user to add money to the account
//return the updated balance after the money has been added
double AddMoney(double accountBalance){
    double amount;
    printf("Enter the amount to add: ");
    scanf("%lf", &amount);
    amount += accountBalance;
    return amount;

}

//input: amount of money in the account and the total price
//gets money from the user until the user has enough to make the purchase //make the purchase and return the remaining balance
double CheckForEnoughMoney(double accountBalance, double totalPrice){
    while(totalPrice > accountBalance){
        accountBalance = AddMoney(accountBalance);
        printf("\n-------------------------------------------------------\n");
        printf("The total is $%.2f and you have $%.2f in your account\n\n", totalPrice, accountBalance);
    }
    accountBalance -= totalPrice;
    printf("\n ... You are now purchasing tickets ...\n");
    return accountBalance;
}



//input: amount of money in the account
//displays the amount of money available in the account
void DisplayBalance(double accountBalance){
    printf("\nYou have $%.2f available in your account\n", accountBalance);
    printf("-------------------------------------------------------\n");
}
