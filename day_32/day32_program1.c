//Merge two arrays.

#include <stdio.h>

int main ()
{
    int n, m, i, j;
    printf("enter elements of first array: ");
    scanf("%d", &n);

    printf("enter elements of second array: ");
    scanf("%d", &m);

    int arr1[n];
    printf("enter %d elements: ", n);
    for (int i= 0; i<=n-1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[m];
    printf("enter %d elements: ", m);
    for (int j= 0; j<=m-1; j++)
    {
        scanf("%d", &arr2[j]);
    }

    int arr3[m + n];

    for (i = 0; i < n; i++)
    {
        arr3[i]= arr1[i];
    }

    for (int j = 0; j < m; j++)
    {
        arr3[i+ j] = arr2[j];
    }

    printf("the merged array is: ");
    for (i= 0; i< (n + m); i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}