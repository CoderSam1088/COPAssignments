//Module 4 condition examples from notes PART 2

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings 

#include<stdio.h>//for printf and scanf


int main()
{
	double temp, humidity;

	printf("Enter the temperature: ");
	scanf("%lf", &temp);

	printf("\nEnter the humidity percentage: ");
	scanf("%lf", &humidity);


	//NESTED
	if (temp > 85)
	{
		if (humidity < 70)
		{
			printf("Sauna\n");
		}
		else
		{
			printf("SteamRoom\n");
		}
	}
	else
	{
		if (humidity < 70)
		{
			printf("Beautiful\n");
		}
		else
		{
			printf("Sticky\n");
		}
	}

	//CONVERTED TO COMBINED
	if ((temp > 85) && (humidity < 70))
	{
		printf("Sauna\n");
	}
	else if ((temp > 85) && (humidity >= 70))
	{
		printf("SteamRoom\n");
	}
	else if ((temp <= 85) && (humidity < 70))
	{
		printf("Beautiful\n");
	}
	else 	 	/*What would the condition be for this to execute?*/
	{
		printf("Sticky\n");
	}


	return 0;
}












