//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main()
{
    int n, remainder, product= 1;
    printf("enter n: ");
    scanf("%d", &n);

    while (n!=0) 
    {
        remainder= n % 10;
        if(remainder % 2 != 0)
        {
            product *= remainder;
        }
        n = n / 10;
    }

    printf("the sum of the odd digits is: %d", product);
    return 0;
}