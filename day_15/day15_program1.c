#include <stdio.h>

int main ()
{
    int n, factorial = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        factorial *= i;
    }
    printf("%d", factorial);
    return 0;
}