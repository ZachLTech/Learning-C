/*

Zach Lopez, 1/10/23, Printf Statments: Print 4 strings including: "Hello world", my first and last name, as well as "Programming is fun" using the \n function within a string. 

*/

//For Visual Studio
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include<stdio.h> //library for printf & scanf statments

int main() //Main function of code
{
printf("Hello World\n");//outputs string "Hello world" into terminal
printf("Zachary\n");//outputs string with my firstt name into terminal
printf("Lopez\n");//outputs string with my last name into terminal
printf("Programming is fun!");//outputs string "Programming is fun!" into terminal
return 0;//tells the program that this is the end of the program to exit
}