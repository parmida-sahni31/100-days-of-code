#include <stdio.h>

int main ()
{
    int p;
    printf("enter your percentage: ");
    scanf("%d", &p);
    
    if (p<=100 && p>=90)
        printf("grade A");
    else if (p<90 && p>=80)
        printf("grade B");
    else if (p<80 && p>=70)
        printf("grade C");
    else if (p<70 && p>=60)
        printf("grade D");
    else
        printf("grade F");

    return 0;
}