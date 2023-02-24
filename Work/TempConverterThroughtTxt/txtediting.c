#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *temps_F, *temps_C;
    temps_F = fopen("temps_F.txt", "r");
    temps_C = fopen("temps_C.txt", "a+");
    double tempF[10], newtempC[10], tempFsum,tempCsum, tempFavg, tempCavg;

for(int i = 0; i <=9; i++){
    fscanf(temps_F," %lf", &tempF[i]);
    newtempC[i] = (double)(tempF[i]-32)*5/9;
    fprintf(temps_C,"%.1lf\n", newtempC[i]);
    tempFsum = tempFsum + tempF[i];
    tempCsum = tempCsum + newtempC[i];
}
tempFavg = tempFsum/10;
tempCavg = tempCsum/10;
printf("The average temperature in Fahrenheit is: %.2lf\n", tempFavg);
printf("The average temperature in Celcius is: %.2lf\n\n", tempCavg);
}