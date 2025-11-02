//Count even and odd numbers in an array.

#include <stdio.h>

int main ()
{
    int n, odd= 0, even= 0;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements: ", n);
    for (int i= 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i= 0; i < n; i++)
    {
       if (arr[i]>=0)
       {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
       }
        else 
        printf("only enter positive integers\n");

    } 

    printf("count of even numbers: %d\n", even);
    printf("count of odd numbers: %d", odd);
    return 0;
}