/*
 * Add Samantha Cruz, 1/20/22, Metric/English conversions
 *
 */

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for printf and scanf

 //function prototypes here
 // 
  //greets the user
  //asks, get, and returns the first initial
char Greeting();

//input: the users initial 
//asks and gets kilometers, converts to miles
//prints the results
void KmsToMiles(char initial);

//input: the users initial 
//asks and gets miles, converts to kilometers
//prints the results
void MilesToKms(char initial);

//input: the users initial 
//asks and gets the temperature in celcius
//converts to farenheit
//prints the results
void CelsiusToFahrenheit(char initial);

//input: the users initial 
//asks and gets the temperature in farenheit
//converts to celcius
//prints the results
void FahrenheitToCelsius(char initial);


 
int main()
{
	char initial_in_main;
	initial_in_main = Greeting();
	//add the other function calls here
    KmsToMiles(initial_in_main);
    MilesToKms(initial_in_main);
    CelsiusToFahrenheit(initial_in_main);
    FahrenheitToCelsius(initial_in_main);

	printf("\n%c., Have a Great Day!", initial_in_main);
	return 0;
}

//function prototypes here
 // 
  //greets the user
  //asks, get, and returns the first initial
char Greeting(){
    char initial;
    printf("Enter your first initial: ");
    scanf(" %c", &initial);
    printf("%c., Welcome to the temperature and distance calculator!\n", initial);
    printf("You will enter kilometers and it will be converted to miles\n");
    printf("You will enter miles and it will be converted to kilometers\n");
    printf("You will enter the temperature in Fahrenheit and it will be converted to Celsius\n");
    printf("You will enter the temperature in Celsius and it will be converted to Fahrenheit\n");
    return initial;
}


//function definitions here

//input: the users initial 
//asks and gets kilometers, converts to miles
//prints the results
void KmsToMiles(char initial){
    float km;
    float miles;
    printf("%c., Enter the distance in kilometers: ", initial);
    scanf("%f", &km);
    miles = km*0.62137;
    printf("%c., %f kilometers equals %f miles\n", initial, km, miles);
}

//input: the users initial 
//asks and gets miles, converts to kilometers
//prints the results
void MilesToKms(char initial){
    float miles;
    float km;
    printf("%c., Enter distance in miles: ", initial);
    scanf("%f", &miles);
    km = miles*1.60934;
    printf("%c., %f miles equals %f kilometers\n", initial, miles, km);
}

//input: the users initial 
//asks and gets the temperature in celcius
//converts to farenheit
//prints the results
void CelsiusToFahrenheit(char initial){
    float celc;
    float fahr;
    printf("%c., Enter temp in Celsius: ", initial);
    scanf("%f", &celc);
    fahr = (celc*9/5) + 32;
    printf("%c., %f in Celsius is %f in Fahrenheit\n", initial, celc, fahr);
}

//input: the users initial 
//asks and gets the temperature in farenheit
//converts to celcius
//prints the results
void FahrenheitToCelsius(char initial){
    float celc;
    float fahr;
    printf("%c., Enter temp in Fahrenheit: ", initial);
    scanf("%f", &fahr);
    celc = (fahr-32)*5/9;
    printf("%c., %f in Fahrenheit is %f in Celsius\n", initial, fahr, celc);

}









