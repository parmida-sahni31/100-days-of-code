#include <stdio.h>

int main ()
{
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("even number");
    } else 
    {
        printf("odd number");
    }
        
    return 0;
}