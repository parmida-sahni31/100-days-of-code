#include <stdio.h>

int main ()
{
    int a,b,sum,diff,prod,quotient;
    printf("input the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    sum= a + b;
    diff= a - b;
    prod= a * b;
    quotient= a / b; 
    printf("the sum is: %d\n", sum);
    printf("the difference is: %d\n", diff);
    printf("the product is: %d\n", prod);
    printf("the quotient is: %d\n", quotient);
    return 0;
}