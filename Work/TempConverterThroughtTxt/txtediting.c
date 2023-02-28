#include<stdio.h>

int main(){ //opens main function
    FILE *temps_F, *temps_C; //Initiates file pointers
    temps_F = fopen("temps_F.txt", "r"); //opens the Fahrenheit file with mode: reading | then assigns it to the temps_F file pointer
    temps_C = fopen("temps_C.txt", "w"); //creates the Celcius file with mode: writing (creates it and writes in it) | then assigns it to the temps_C file pointer
    double tempF[10], newtempC[10], tempFsum,tempCsum, tempFavg, tempCavg; //declares 2 double arrays (tempF and newtempC) with 10 empty doubles (since we know there are 10 temps) | also declares 4 doubles, 2 for the sums of all c and f temps to calculate and assign to the 2 average doubles of c and f temps

for(int i = 0; i <=9; i++){ //opens a for loop that --> (declares an integer i (which represents the item position in our arrays); says if i is less than or equal to 9 (since there are 10 temperatures); then add 1 to it and repeat)
    fscanf(temps_F," %lf", &tempF[i]); //reads the file temps_F and scans it into our tempF array in the position i (which is 0-9 when cycled through the loop)
    newtempC[i] = (double)(tempF[i]-32)*5/9; //uses math to convert the fahrenheit temp to celcius and assigns it to the array newtempC in position i (which is 0-9 when cycled through the loop)
    fprintf(temps_C,"%.1lf\n", newtempC[i]); //writes the new converted celcius temperature in the temps_C txt file and starts a new line for the next temperature (since its in a loop)
    tempFsum = tempFsum + tempF[i]; //adds the fahrenheit temp from position i in array tempF to tempFsum double (since its a loop it'll end with the sum of all the fahrenheit temps)
    tempCsum = tempCsum + newtempC[i]; ////adds the celcius temp from position i in array tempC to tempCsum double (since its a loop it'll end with the sum of all the celcius temps)
}//closes the for loop
tempFavg = tempFsum/10; //divides the fahrenheit temps sum (tempFsum) by 10 to find the average and assigns it to the variable tempFavg
tempCavg = tempCsum/10;//divides the celcius temps sum (tempCsum) by 10 to find the average and assigns it to the variable tempCavg
printf("The average temperature in Fahrenheit is: %.2lf\n", tempFavg); //prints/outputs the average fahrenheit temperature in the terminal (from double tempFavg)
printf("The average temperature in Celcius is: %.2lf\n\n", tempCavg); //prints/outputs the average celcius temperature in the terminal (from double tempCavg)
fclose(temps_F);
fclose(temps_C);
} //closes main function