#include <stdio.h>

int main ()
{
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    if (a>0)
    {
        printf("positive number");
    } else if(a<0)
    {
        printf("negative number");
    } else {
        printf("zero");
    }
        
    return 0;
}