//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main ()
{
    int n, positives= 0, negatives= 0, zeroes= 0;
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
        if (arr[i] < 0)
        negatives++;
        else if (arr[i] > 0)
        positives++;
        else 
        zeroes++;
    } 

    printf("count of positive numbers: %d\n", positives);
    printf("count of negative numbers: %d\n", negatives);
    printf("count of zeroes: %d\n", zeroes);
    return 0;
}