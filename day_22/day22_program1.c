//Write a program to check if a number is a strong number.

/* a Strong Number is a positive integer where the sum of the 
factorials of its individual digits equals the original number. */

#include <stdio.h>

int main ()
{
    int n, remainder, sum=0, fact;
    printf("enter n: ");
    scanf("%d", &n);
    
    int temp = n;

    //find factorial of individual digits
    while (n != 0)
    {
        remainder = n % 10;
        fact = 1;
        for (int i= 1; i <= remainder; i++ )
        {
            fact= fact * i;
        }

        sum= sum + fact;
        n = n/ 10;
    }

    if (sum == temp)
        printf("strong number");
    else
        printf("not strong number");
    return 0;


}