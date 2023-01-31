/****************************************************************************************************************
 *                                DECLARE DOUBLE VARIABLES AREACIRCLE AND RADIUS                                *
 * WRITE THE 2 STATEMENTS NEEDED TO PROMPT FOR INPUT AND “READ” FROM THE KEYBOARD AND STORE THE VALUE IN RADIUS *
 *         WRITE THE STATEMENT TO CALCULATE THE AREACIRCLE ( THE AREA OF THE CIRCLE, USE 3.14 FOR PI )          *
 *                        DISPLAY AREACIRCLE ONTO THE SCREEN ROUNDED TO 2 DECIMAL PLACES                        *
 ****************************************************************************************************************/
/*
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031
#include<stdio.h>

double areaCircle, radius;

int main()
{
    printf("What is the radius of your circle? > ");
    scanf("%lf", &radius);

    areaCircle = (double)radius*radius;
    areaCircle = (double)areaCircle*3.14;
    printf("The area of your circle is: %.2lf", areaCircle);
}
*/

/******************************************************************************
 *                DECLARE AN INTEGER VARIABLE CALLED CALORIES                 *
 *  PROMPT THE USER FOR INPUT AND SCAN A VALUE INTO YOUR CALORIES VARIABLE    *
 *                   WRITE THE CONDITIONAL STATEMENTS THAT                    *
 *   DISPLAYS “LOW CALORIE” WHEN THE VALUE OF CALORIES IS LESS THAN LIMIT,    *
 * DISPLAYS “RIGHT ON THE LIMIT” WHEN THE VALUE OF CALORIES IS EQUAL TO LIMIT *
 *         AND DISPLAYS “HIGH CALORIE” WHEN IT IS GREATER THAN LIMIT.         *
 *     ASSUME THAT THE VARIABLE LIMIT HAS BEEN DECLARED AND HAS A VALUE.      *
 ******************************************************************************/
/*

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031
#include<stdio.h>

int calories, limit = 10;

int main()
{
    printf("How many calories? > ");
    scanf("%d", &calories);

    if (calories < limit)
    {
        printf("LOW CALORIE");
    }
    else if (calories == limit)
    {
        printf("Right on the limit");
    }
    else if (calories > limit)
    {
        printf("HIGH CALORIE");
    }

}

*/




/* #3:
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031
#include<stdio.h>
double points = 5.2;
int main()
{
points = (double)points+1.5;
printf("%lf", points);
}






/*

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031
#include<stdio.h>
char firstinitial, lastnameintitila;
int main()
{
printf("Enter a value for letterInput. > ");
scanf(" %c", &lastnameintitila);

}


*/




/*

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031
#include<stdio.h>
char letter ="X";

*/
/*

#include<stdio.h>

char typed;

int main()
{
    printf("type a or B");
    scanf(" %c", &typed);

    if (typed == "a")
    {
        printf("you typed a");
    }



    else if (typed == "B")
    {
        printf("you typed B");
    }



    else
    {
        printf("nono bad job");
    }

}

*/

/***********************************************************************************************************************
 * ASSUME 2 VARIABLES, A DOUBLE CALLED POINTS, AND A CHARACTER CALLED INITIAL, HAVE BEEN DECLARED AND ASSIGNED VALUES. *
 *                               WRITE THE STATEMENT TO PRINT THEM BOTH ONTO THE SCREEN.                               *
 *                           BE SURE TO USE %F AND %C PLACEHOLDERS IN THE PRINTF STATEMENT.                            *
 *        FOR EXAMPLE IF POINTS WAS 125.5 AND INITIAL WAS 'T', THE FOLLOWING WOULD BE PRINTED  ONTO THE SCREEN         *
 ***********************************************************************************************************************/
 
 #include<stdio.h>

double points = 5.9;
char initial='T';

int main()
{
printf("Congratulations %c, you have %.1lf points!", initial, points);


}