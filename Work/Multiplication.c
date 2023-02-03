#include <stdio.h>
int multiply(int a,int b);

int main(void)
{
 int Number1,Number2,product;

printf("Please enter number:");
scanf("%d",&Number1);

printf("Please enter second number:");
scanf("%d",&Number2);

product = multiply(Number1,Number2);
printf("The product is %d", product);

}

int multiply(int a,int b)
{
    int result;
    result = a*b;
    return result;
}