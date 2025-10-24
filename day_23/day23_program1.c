//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main ()
{
    int n;
    float sum= 0.0;
    printf("enter n: ");
    scanf("%d", &n);

    for (int i= 0; i <= n; i++)
    {
        float numerator = 2 * i;
        float denominator = 4 * i - 1;

        sum = sum + numerator / denominator;
    }
    printf("%.4f", sum);
    return 0;
}
