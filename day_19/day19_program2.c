//Write a program to find the sum of digits of a number.


#include <stdio.h>

int main()
{
    int n, remainder, sum=0;
    printf("enter n: ");
    scanf("%d", &n);

    while (n!=0) 
    {
        remainder= n % 10;
        sum += remainder;
        n = n / 10;
    }

    printf("the sum of the digits is: %d", sum);
    return 0;
}