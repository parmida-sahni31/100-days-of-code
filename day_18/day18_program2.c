//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main ()
{
    int a ,b, hcf;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    if (a > b)
    {
    for (int i=b; i>=1; i--)
        {
            if (a%i == 0 && b%i == 0)
            hcf= i;
            break;

        }
    }
    else
    {
     for (int i=a; i>=1; i--)
        {
            if (a%i == 0 && b%i == 0)
            hcf = i;
            break;
        }
    }
    printf("HCF is %d", hcf);
    return 0;

}
    