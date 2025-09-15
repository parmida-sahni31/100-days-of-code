#include <stdio.h>

int main ()
{
    float cel,farh;
    printf("input the temperature in Celcius: ");
    scanf("%f", &cel);
    farh= (cel * 9/5) + 32;
    printf("the temperature in Farhenite is: %f", farh);
    return 0;
}