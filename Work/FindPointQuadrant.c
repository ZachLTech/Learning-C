/*******************************************************************
 *   THIS PROGRAM WILL BE USED TO CHECK IF INPUTTED COORDINATES    *
 * ON A COORDINATE PLANE ARE IN THE 1ST, 2ND, 3RD, OR 4TH QUADRANT *
 *            USING MULTIPLE CONDITIONS PER IF STATMENT            *
 *******************************************************************/
#include<stdio.h>

int main(){

    double x,y;

    printf("\n\nPlease Input your X coordinate > ");
    scanf(" %lf", &x);
    printf("\nPlease Input your Y coordinate > ");
    scanf (" %lf", &y);

    if (x>0 && y>0){
        printf("\n\nYour Point is in Quadrant 1\n\n");
    }
    else if (x<0 && y>0){
        printf("\n\nYour Point is in Quadrant 2\n\n");
    }
    else if (x<0 && y<0){
        printf("\n\nYour Point is in Quadrant 3\n\n");
    }
    else if (x>0 && y<0){
        printf("\n\nYour Point is in Quadrant 4\n\n");
    }
}