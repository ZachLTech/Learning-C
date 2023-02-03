#include <stdio.h>


int main()
{
    int n1,n2;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);        
    

    int result;
    result = n1+n2;
    printf("sum = %d",result); 

    int n3,n4;
    printf("Enters two numbers: ");
    scanf("%d %d",&n3,&n4);      
    

    int result2;
    result2 = n3+n4;
    printf("sum = %d",result2); 

    int n5,n6;
    printf("Enters two numbers: ");
    scanf("%d %d",&n5,&n6);;        
    

    int result3;
    result3 = n4+n5;
    printf("sum = %d",result3);

    int n7,n8;
    printf("Enters two numbers: ");
    scanf("%d %d",&n7,&n8);       
    
    int result4;
    result4 = n6+n7;
    printf("sum = %d",result4);

    return 0;
}
/*
int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}
*/
/*
void math()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

}
*/

/*
int main()
{
math();
math();
math();
math();

}
*/