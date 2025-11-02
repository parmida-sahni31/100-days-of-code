//Find the sum of array elements.


#include <stdio.h>

int main ()
{
    int n, sum = 0;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements: ", n);
    for (int i= 0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i= 0; i<=n-1; i++)
    {
        sum = sum + arr[i];
    }
    printf("the sum is: %d", sum);


    return 0;
}