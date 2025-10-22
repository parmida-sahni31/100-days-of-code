//Write a program to check if a number is a perfect number.

#include <stdio.h>

int main ()
{
    int n, divisor, sum=0;
    printf("enter n: ");
    scanf("%d", &n);

    for (int i= 1; i< n; i++)
    {
        if (n % i == 0)
        {
            sum= sum + i;
        }
    }
    
    if (sum == n)
        printf("the number is a perfect number");
    else
        printf("the number is not a perfect number");
    
    return 0;
}