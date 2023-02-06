/************************************************
 * THIS PROGRAM WILL FIND OUT IF A TRIANGLE IS  *
 * ISOSCELES, EQUILATERAL, OR SCALENE DEPENDENT *
 *   UPON THE USERS INPUT OF ITS SIDE LENGTHS   *
 ************************************************/
#include<stdio.h>

void checkTriangle(double a, double b, double c);

int main(){

    double s1,s2,s3;

    printf("Please Input a First Side Length > ");
    scanf(" %lf", &s1);
    printf("\nPlease Input a Second Side Length > ");
    scanf(" %lf", &s2);
    printf("\nPlease Input a Third Side Length > ");
    scanf(" %lf", &s3);

    checkTriangle(s1, s2, s3);

}

void checkTriangle(double a, double b, double c){

    if (a==b && b==c){
        printf("\n\nThis is an Equilateral Triangle\n\n");
    }

    else if (a==b && a!=c || a==c && a!=c   ||   b==a && b!=c || b==c && b!=a   ||   c==a && c!=b || c==b && c!=a){
        printf("\n\nThis is an Isosceles Triangle\n\n");
    }

    else if (a!=b && b!=c && c!=a){
        printf("\n\nThis is a Scalene Triangle\n\n");
    }


}