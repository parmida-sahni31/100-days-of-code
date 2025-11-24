//Delete an element from an array.

#include <stdio.h>

int main ()
{
    int n, arr[100], element, pos = -1;

    printf("enter n: ");
    scanf("%d", &n);

    printf("enter %d elements in a sorted array: ", n);
    for (int i= 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the element you want to delete: ");
    scanf("%d", &element);

    for (int i= 0; i < n; i++){
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    printf("value not found");
    else {
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr [i + 1];
    }
    }

    n--;

    printf("elements after deleting:\n");
    
    for (int j=0; j < n; j++)
    printf("%d", arr[j]);

    return 0;
}

