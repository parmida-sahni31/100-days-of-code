//Insert an element in an array at a given position.

#include <stdio.h>

int main ()
{
    int n, element, index;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[100];
    printf("enter %d elements in a sorted array: ", n);
    for (int i= 0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the element to add and its index: ");
    scanf("%d %d", &element, &index);

    int i= n - 1;
    while (i >= index) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[index] = element;
    n++;
 
    for (int j=0; j<n; j++)
    printf("%d ", arr[j]);

    return 0;
}