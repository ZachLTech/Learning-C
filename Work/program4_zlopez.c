/*
 * lopez_program4.c
  Zachary Lopez, 02/10/23, This is a program with a savings and checkings account which allows you to check, deposit, and withdrawl amounts of money in both accounts
 *
*/
#define _CRT_SECURE_NO_WARNINGS //for Visual studio compiler 
#include<stdio.h> //for printf and scanf

int RunBankChoices(); //initializes prototype for function that runs the users possible choices 
void Greeting();//initializes prototype for function that greets the user
void DisplayBalance(double accountBalance, char account); //initializes prototype for function that displays the balance of a chosen account
double DepositMoney(double accountBalance, char account); //initializes prototype for function that lets the user deposit their inputted amount of money
double WithdrawMoney(double accountBalance, char account); //initializes prototype for function that lets the user deposit their inputted amount of money

int main(){
    double checking = 276.20, savings = 124.61; //initializes 2 bank accounts and their initial amounts
    int selection = RunBankChoices(); //initializes integer that calls and reads the returned bank choice value
    printf("\nYou Selected: %d\n", selection); //outputs the users selection in the terminal
    Greeting(); //calls the greeting function

    while (selection != -1){  //starts a while loop that stays active unless the users selection is -1                                                                                                                                                                                                                                                         {
        if (selection == 1){ //if the users selection is 1 it runs the following code
            checking = DepositMoney(checking, 'C'); //changes the checkings account amount by calling the depositmoney function to scan, add, and return the new amount
        }
        else if (selection == 2){ //if the users selection is 2 it runs the following code
            checking = WithdrawMoney(checking, 'C'); //changes the checkings account amount by calling the withdrawmoney function to scan, subtract, and return the new amount
        }
        else if (selection == 3){ //if the users selection is 3 it runs the following code
            savings = DepositMoney(savings, 'S'); //changes the savings account amount by calling the depositmoney function to scan, add, and return the new amount
        }
        else if (selection == 4){ //if the users selection is 4 it runs the following code
            savings = WithdrawMoney(savings, 'S'); //changes the savings account amount by calling the withdrawmoney function to scan, subtract, and return the new amount
        }
        else if (selection == 5){ //if the users selection is 5 it runs the following code
            DisplayBalance(checking, 'C'); //calls the displaybalance function for the checking account
        }
        else if (selection == 6){ //if the users selection is 6 it runs the following code
            DisplayBalance(savings, 'S'); //calls the displaybalance function for the savings account
        }
        else { //if the users input is anything that isn't the given selections, it runs the following code
            printf("\n please enter a selection 1 through 6 or (-1) to QUIT\n"); //tells the user to input an integer selecion 1 through 6 (or -1)
        }
    selection = RunBankChoices(); //re-initializes selection variable to clear the users previous selection and run the bank choices again reading the new returned value
    printf("\nYou Selected: %d\n", selection); //outputs the users selection in the terminal
    }
    printf("Goodbye and have a nice day!\n\n"); //outputs a leaving message when the user quits by typing -1
}

void Greeting(){ //defines function called greeting that when called runs the following code
    printf("\n\nHello welcome to Zach's Bank!\n\n"); //outputs a greeting to the user in the terminal
}
int RunBankChoices(){ //defines function called runbankchoices that when called runs the following code
    int choice; //initializes a integer called choice
    printf("\n\n******************************\nChoose an option from this list: \n(1) to  DEPOSIT to CHECKING ACCOUNT \n(2) to WITHDRAW from CHECKING ACCOUNT \n(3) to  DEPOSIT to SAVINGS ACCOUNT \n(4) to WITHDRAW from SAVINGS ACCOUNT \n(5) to display CHECKING ACCOUNT BALANCE \n(6) to display SAVINGS ACCOUNT BALANCE \n\n(-1) to QUIT \n\n > "); //asks the user to make a bank choice giving them 6 options for bank account managment and 1 to quit the program
    scanf(" %d", &choice); //gets the choice from the user
    return choice; //returns the user chosen integer
}
void DisplayBalance(double accountBalance, char account){ //defines function called displaybalance that when called with an account balance and character indicating which account is being altered runs the following code
    if (account == 'C'){ //if the chosen account character is 'C' indicating checkings account run the following code
        printf("The balance in your checking account is: $%.2lf", accountBalance); //outputs the checking account balance into the terminal
    }
    else if (account == 'S'){ //if the chosen account character is 'S' indicating savings account run the following code
        printf("The balance in your savings account is: $%.2lf", accountBalance); //outputs the savings account balance into the terminal
    }
}
double DepositMoney(double accountBalance, char account){ //defines function called depositmoney that when called called with an account balance and character indicating which account is being altered runs the following code
    double amounttodeposit; //initializes a floating point variable to be used as the amount of money the user wants to deposit
    printf("How much money would you like to deposit? > $"); //asks the user the amount they want to deposit
    scanf(" %lf", &amounttodeposit); //gets the amount of money the user wants to deposit
    accountBalance = (double)accountBalance + amounttodeposit; //adds the original account balance and the inputted amount the user wants to deposit and reassigns it to the account balance variable
    printf("Your new updated account balance is: $%.2lf", accountBalance); //outputs the new updated account balance
    return accountBalance; //returns the altered account balance
}
double WithdrawMoney(double accountBalance, char account){ //defines function called withdrawmoney that when called called with an account balance and character indicating which account is being altered runs the following code
    double amountwithdraw; //initializes a floating point variable to be used as the amount of money the user wants to withdraw
    printf("How much money would you like to withdraw? > $"); //asks the user the amount they want to withdraw
    scanf(" %lf", &amountwithdraw); //gets the amount of money the user wants to withdraw
    accountBalance = (double)accountBalance - amountwithdraw; //adds the original account balance and the inputted amount the user wants to withdraw and reassigns it to the account balance variable
    if(accountBalance<0){ //if the balance in the account is less than 0 dollars execute the following code
        printf("\nYou are trying to withdraw more money than what is in your account. Try again\n"); //outputs a message about not having enough money
        accountBalance = (double)accountBalance + amountwithdraw; //adds the money withdrawn back into the account so it's not in the negatives
        printf("Your account balance is $%.2lf\n", accountBalance); //prints the account balance
        return accountBalance; //returns the account balance to the withdrawmoney function call
    }
    else{
        printf("Your new updated account balance is: $%.2lf\n", accountBalance); //outputs the new updated savings account balance
        return accountBalance; //returns the altered account balance
    }
}