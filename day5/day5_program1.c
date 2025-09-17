#include <stdio.h>
#include <math.h>

int main()
{
    float R, T, P;
    double SI, CI;
    printf("enter the principal amount: ");
    scanf("%f", &P);
    printf("enter the time: ");
    scanf("%f", &T);
    printf("enter the rate of interest: ");
    scanf("%f", &R);
    SI= P * R * T / 100;
    CI= P * pow((1 + R/100), T) - P;
    printf(" the SI and CI are: %lf, %lf", SI , CI);
    return 0;


}