#include<stdio.h>
#include<ctype.h>

int main()
{
char let1,let2;
int num1,num2,num3;
printf("Please input a character > ");
scanf(" %c", &let1);
let2 = toupper(let1);
num1 = (int)let1;
num2 = (int)let2;
num3 = (int)num1+num2;
printf("\nYour original Inputted Letter is: %c\n", let1);
printf("Your original Inputted Letter capitalized is: %c\n", let2);
printf("Your original Inputted Letter integer value is: %d\n", num1);
printf("Your original Inputted Letter capitalized integer value is: %d\n", num2);
printf("Your original Inputted Letter integer added to your original inputted letter capitalized integer is: %d\n", num3);
}