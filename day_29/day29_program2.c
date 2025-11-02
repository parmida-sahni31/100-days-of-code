//Find the maximum and minimum element in an array.

#include <stdio.h>

int main ()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements: ", n);
    for (int i= 0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i= 0; i<=n-1; i++)
    {
        if (arr[i] > max)
        max = arr[i];
    }

    for (int i= 0; i<=n-1; i++)
    {
        if (arr[i] < min)
        min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    
    return 0;
}