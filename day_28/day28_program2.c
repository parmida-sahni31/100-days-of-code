//Read and print elements of a one-dimensional array.


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

    for (int i= 0; i<=n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
