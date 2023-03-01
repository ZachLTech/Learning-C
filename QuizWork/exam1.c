#include<stdio.h>
#include<ctype.h>
/*
double usrdfunction(double paramnum);

int main () {
    double num0 = 15;
    num0 = usrdfunction(num0);
    printf("%.2lf\n",num0);
}
double usrdfunction(double paramnum){
    double num1;
    printf("type a double > ");
    scanf(" %lf", &num1);
    num1 = num1-paramnum;
    return num1;
}
*/
double LuckyGame(double d, int n);

int main(){
double dou = 5;
int nout = 5;
dou = LuckyGame(dou, nout);
printf("%lf",dou);
}

double LuckyGame(double d, int n){
    char initial;
    printf("Whats your initial? > ");
    scanf(" %c", &initial);
    if(n >0){
        printf(" %c, you win", initial);
        d += 100;
    }
    else if (n==0){
        printf(" %c, you did not win", initial);
        d-=100;
    }
    else if(n<0){
        printf(" %c, recheck your numbers", initial);
    }
    return d;
}