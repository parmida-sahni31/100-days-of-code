#include <stdio.h>

int main ()
{
    int a, b, c;
    printf("enter side 1: ");
    scanf("%d", &a);
    printf("enter side 2: ");
    scanf("%d", &b);
    printf("enter side 3: ");
    scanf("%d", &c);

    if ((a==b)&&(a==c))
        printf("equilateral triangle");
    else if ((b==a) || (b==c) || (a!=c))
        printf("isosceles triangle");
    else
        printf("scalene triangle");

    return 0;
    
}