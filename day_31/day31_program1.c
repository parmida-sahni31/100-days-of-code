//Search for an element in an array using linear search.

#include <stdio.h>

int main ()
{
    int n, q, found = 0;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements: ", n);
    for (int i= 0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the element you want to search: ");
    scanf("%d", &q);

    for (int i= 0; i<=n-1; i++)
    {
        if (arr[i] == q)
        {
        printf("the element is found at position: %d\n", i + 1);
        found = 1;
        break;
        }
    }
    
    if (!found)
    printf("element not found");

    return 0;
}