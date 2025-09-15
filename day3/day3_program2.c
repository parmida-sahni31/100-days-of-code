#include <stdio.h>

int main ()
{
    int a,b,c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    c= a;
    a= b;
    b= c;

    printf("the swapped numbers are: \n ");
    printf("%d %d", a,b);
    return 0;

}