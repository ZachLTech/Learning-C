#include<stdio.h>


/* Q1:
int main(){
int mySteps, stepGoal;
printf("Whats your step goal? >");
scanf(" %d", &stepGoal);
printf("How many steps do you have? >");
scanf(" %d", &mySteps);
if(mySteps>stepGoal){
printf("Awesome");
}
else if(mySteps==stepGoal){
printf("Made it!");
}
else if(mySteps<stepGoal){
printf("Start walking!");
}
}
*/

/*Q2
int main(){
for (int i = 0; i <= 100; i++)
{
    printf(" %d\n", i);
}
}
*/

/*Q3 WITH PRINT TO TEST
int main(){

    double sum, numberadded = 0;
    while(numberadded<=200){
        sum = sum + numberadded++;
        printf("Sum: %.2lf, Numberadded: %.2lf\n", sum,numberadded);
    }
}

Q3
int main(){

    double sum, numberadded = 0;
    while(numberadded<=200){
        sum = sum + numberadded++;
    }
}
*/


int main(){
    int number;
    do{
        printf("Enter a positive number!! > ");
        scanf(" %d", &number);
        if(number<0){
            printf("\nI SAID POSITIVE! Try Again.\n\n\n");
            number;
        }
        else{
            printf("\nHurray, You did it! Good Job.\nGoodbye\n\n");
        }   
    }while(number<0);
}