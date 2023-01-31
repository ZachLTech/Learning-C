
/*
 
Zachary Lopez, 01/20/23, Turns user inputted char into int and does some math with the char to int and uses toupper function as well

*/


//For Visual Studio
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h> //library for printf & scanf
#include<ctype.h> //library for toupper & char to int conversion

//Initializes needed variables (1 char and 3 ints)
char character;
int userint, multiplieduserintWupperletter, multiplieduserinputWlowerletter;

int main()
{

printf("Type any lowercase letter or character to be transformed into a number > "); //prompts user to type a charachter
scanf(" %c", &character); //gets inputted character from user

//Declaring 2 new variables (A character & integer)
char upperletter = toupper(character); //Declares new char which converts previous inputted char to be capitalized
int upperletnum = (int)upperletter; //Declares new int which converts the new capitalized char into an int
int lowerletnum = (int)character; //declares new variable that converts original inputted char into an int

printf("\n\nYou Typed: %c \n",character); //Prints the original inputted character
printf("Your uppercase character is: %c \n", upperletter); //Prints the new char converted to capitalized
printf("Your uppercase character number is: %d\n", upperletnum); //Prints the converted new capitalized char turned into an int
printf("Your inputted lowercase character number is: %d\n\n", lowerletnum); //Prints the converted original inputted char turned into an int

printf("\n\n Please input an integer > "); //Asks the user to input an integer
scanf(" %d", &userint); //Gets the integer from the user

//Math
multiplieduserintWupperletter = (int)upperletter*userint; //multiplies the int capital letter with the user inputted number and assigns it to a new variable (multiplieduserintWupperletter)

printf("\n\nYour inputted number multiplied by the uppercase character: %d", multiplieduserintWupperletter); //prints new multiplied number

//Math
multiplieduserinputWlowerletter = (int)lowerletnum*userint; //multiplies new int form of originally inputted character by the new int that was user inputted and assigns it to new variable (multiplieduserinputWlowerletter)

printf("\nYour inputted number multiplied by your original lowercase character: %d \n\n", multiplieduserinputWlowerletter); //prints the new multiplied number (multiplieduserinputWlowerletter)

}