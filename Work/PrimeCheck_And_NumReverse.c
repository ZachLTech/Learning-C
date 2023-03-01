#include<stdio.h>

/* Prime Check

int primeCheck(int pnum){
    
    for(int i = 2; i<pnum; i++){
        double rmdrr = pnum%i;
        if(rmdrr == 0){
            return rmdrr;
            break;
        }
        else{
            continue;
            rmdrr = 1;
        }
    }
}

int primeCheck(int pnum);

int main(){
    int blah = 1;
    while(blah==1){
    int num;
    double rmdr = 1;
    printf("\n\nInput an integer to check if prime > ");
    scanf("%d", &num);
    rmdr = primeCheck(num);
    if(rmdr == 0){
        printf("%d is not a prime number", num);
    }
    else{
        printf("%d is a prime number", num);
    }
    }
}

*/

//Num Reverse
#include <stdio.h>
int main(void)
{
    int num = 12345,change , reverse = 0 ; 

    while (num !=0) {
        change = num % 10; //Creating a loop here
        reverse = reverse* 10+change; // Equation used to reverse the numbers (1,2,3,4,5)
        num/=10;
    }
    printf ("Digits Reversed = %d", reverse); //Printing numbers in reverse for final product
}