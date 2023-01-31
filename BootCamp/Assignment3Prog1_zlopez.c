/*

Zach Lopez, 01/09/23, this program is a road trip calculator that finds the cost of a road trip using the total miles of the trip, the cost per gallon for the trip, and the miles per gallon the vehicle goes.

*/

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings for Visual Studio compiler

#include<stdio.h> //for printf and scanf

char Initial;//initializes a character type variable to use as the users initial
double numofmiles, costPerGallon, milesPerGallon, totalGallonsNeeded, CostOfTrip;//Initializes 5 double type variables to store the information needed to calculate the roadtrip cost and display it to the user

int main()
{


printf("Welcome to Zach's Road Trip Price Calculator! \nPlease type your first initial >");//Greets the user then asks for their first initial
scanf(" %c", &Initial);//gets the users first initial

printf("\nHello %c, How long is your trip? (In miles) > ", Initial);//asks the number of miles for the trip from the user using their first initial
scanf(" %lf", &numofmiles);//gets the number of miles for the trip

printf("\nOk. Now what is the cost per gallon of gas during this trip? > $");//Asks the cost per gallon for their trip
scanf(" %lf", &costPerGallon);//gets the cost per gallon for their trip

printf("\nOk, one more question: how many miles per gallon does your vehicle go? > ");//Asks the miles per gallon of their vehicle
scanf(" %lf", &milesPerGallon);//gets the miles per gallon of their vehicle

totalGallonsNeeded = numofmiles/milesPerGallon;//calculates the cost of trip by dividing the number of miles by their vehicles miles per gallon to get the total gallons needed for the trip
CostOfTrip = totalGallonsNeeded*costPerGallon;//finishes the calculation by multiplying the total gallons needed with the cost per gallon for the trip

printf("\nThe estimated total cost of your roadtrip is $%.2lf. Enjoy %c! \n\nProgram End.", CostOfTrip, Initial);//prints the cost of the road trip and says by to the user using their first initial


}

