//Write a program to check if a number is prime.

#include <stdio.h>

int main ()
{
    int n, factor;
    int isprime= 1;

    printf("enter the number: ");
    scanf("%d", &n);

    if (n == 0 || n== 1)
    {
        isprime= 0;
    }

    for (int i=2; i<n; i++)
    {
        factor= n % i;

        if (factor == 0)
        {
            printf("not prime number");
        }
        else 
        {
            printf("prime number");
        }
    }
    
    return 0;

}