#include <stdio.h>
int main(void)
{
    int num = 12345, reverse = 0, change;
while (num != 0) {
change = num % 10;
 reverse = reverse* 10+change;
num/=10;
}
 printf("Digits Reversed = %d", reverse);
}