/*
Zachary Lopez, 01/26/2023, An introduction to functions with 4 functions: one to greet the user, one to convert input into ASCII values, and two to convert lbs to kg and kg to lbs
*/

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler 
#pragma warning(disable:6031) //ignore scanf warnings 
#include<stdio.h> //printf and scanf 
#include<ctype.h> //toupper and tolower


void Greeting(void); //Allows function "Greeting" to be ran/called by the main function
void InitialPractice(void); //Allows function "InitialPractice" to be ran/called by the main function
void PoundsToKilograms(void); //Allows function "PoundsToKilograms" to be ran/called by the main function
void KilogramsToPounds(void); //Allows function "KilogramsToPounds" to be ran/called by the main function


int main()
{
Greeting(); //Calls the Greeting Function
InitialPractice(); //Calls the InitialPractice Function
PoundsToKilograms(); //Calls the PoundsToKilograms Function
KilogramsToPounds(); //Calls the KilogramsToPounds Function
}


void Greeting() //Initializes Function "Greeting"
{
printf("\n\nHello! I'm Zach, Welcome to my Weight Converter/ASCII Character Value Finder.\n\n"); //Greets the user with a welcome message
}
void InitialPractice() //Initializes Function "InitialPractice"
{
char inputchar; //initializes character
printf("Please input a character > "); //prompts the user to input a character
scanf(" %c", &inputchar); //scans the user input and assigns it to the value "inputchar"
char inputcharcap = toupper(inputchar); //initializes new character and assigns a capitalized original input character to it
int inputcharnum = (int)inputchar; //initializes new integer and assigns the original inputted char converted to ASCII value to it
int inputcharnumcap = (int)inputcharcap; //initializes new integer and assigns the original inputted char capitalized to ASCII value to it
printf("\nYour Inputted character is: %c\n", inputchar); //outputs the original inputted character
printf("Your Inputted character ASCII value is: %d\n", inputcharnum); //outputs the original inputted character converted to ASCII value
printf("Your Inputted character capitalized is: %c\n", inputcharcap); //outputs the original inputted character capitalized
printf("Your Inputted character capitalized ASCII value is: %d\n\n", inputcharnumcap); //outputs the original inputted character capitalized converted to ASCII value
}
void PoundsToKilograms() //Initializes Function "PoundsToKilograms"
{
double weightinlbs; //initializes floating point of weight in pounds
double weightinkg; //initializes floating point of weight in kilograms
printf("Please input the weight in pounds to be converted to weight in kilograms > "); //prompts the user to input weight which will be converted into kilograms
scanf(" %lf", &weightinlbs); //scans the user input and assigns it to the weight in pounds floating point value
weightinkg = (double)weightinlbs*0.453592; //multiplies the weight in pounds by 0.453592 (conversion for lbs to kg) and assigns it to floating point value "weightinkg"
printf("\nYour Weight in Pounds is: %lf\n", weightinlbs); //outputs the originally inputted weight in pounds
printf("Your Weight in Kilograms is: %lf\n\n", weightinkg); //outputs the converted weight from pounds to kilograms
}
void KilogramsToPounds() //Initializes Function "KilogramsToPounds"
{
double weightinkg; //initializes floating point of weight in kilograms
double weightinlbs; //initializes floating point of weight in pounds
printf("Please input the weight in kilograms to be converted to weight in pounds > "); //prompts the user to input weight which will be converted into pounds
scanf(" %lf", &weightinkg); //scans the user input and assigns it to the weight in kilograms floating point value
weightinlbs = (double)weightinkg*2.2046226218; //multiplies the weight in kilograms by 2.2046226218 (conversion for kg to lbs) and assigns it to floating point value "weightinlbs"
printf("\nYour Weight in Kilograms is: %lf\n", weightinkg); //outputs the originally inputted weight in kilograms
printf("Your Weight in Pounds is: %lf\n\n\n", weightinlbs); //outputs the converted weight from kilograms to pounds
}